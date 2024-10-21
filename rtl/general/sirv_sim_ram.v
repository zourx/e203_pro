
 /*                                                                      
 Copyright 2018 Nuclei System Technology, Inc.                
                                                                         
 Licensed under the Apache License, Version 2.0 (the "License");         
 you may not use this file except in compliance with the License.        
 You may obtain a copy of the License at                                 
                                                                         
     http://www.apache.org/licenses/LICENSE-2.0                          
                                                                         
  Unless required by applicable law or agreed to in writing, software    
 distributed under the License is distributed on an "AS IS" BASIS,       
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and     
 limitations under the License.                                          
 */                                                                      
                                                                         
                                                                         
                                                                         
//=====================================================================
//
// Designer   : Bob Hu
//
// Description:
//  The simulation model of SRAM
//
// ====================================================================
module sirv_sim_ram 
#(parameter DP = 512,
  parameter FORCE_X2ZERO = 0,
  parameter DW = 32,
  parameter MW = 4,
  parameter AW = 32,

  parameter AWnts = 15,
  parameter DWnts = 32,
  parameter MWnts = 4
)
(
  input                clk, 
  input                cs,
  input                we,
  input  [AW-1:0]      addr,
  input  [MW-1:0]      wem,
  input  [DW-1:0]      din,
  output [DW-1:0]      dout,

  input                mret2ram,
  input                irq_i,
  output reg           irq_s_reg_done,
  input                irq_ra_i,

  input                clk_nts,
  input                cs_nts,  
  input                we_nts,  
  input  [AWnts-1:0]   addr_nts, 
  input  [MWnts-1:0]   wem_nts,
  input  [DWnts-1:0]   din_nts,          
  output [DWnts-1:0]   dout_nts,

  
  output [`E203_XLEN-1:0] mtvec_trap_data,
  input  [`E203_XLEN-1:0] mtvec_trap_addr,

  output [`E203_XLEN-1:0] mtvec_trap_data_af,
  output [`E203_XLEN-1:0] mtvec_trap_data_bf,
  input  [`E203_XLEN-1:0] mtvec_trap_addr_bf,
  input  [`E203_XLEN-1:0] mtvec_trap_addr_af,
  output [64-1:0]         ir_bf,
  input                   bftail_trap,
  input                   aftail_trap,
  input                   test_clk

  );


/// mem
reg [DW-1:0] mem_r [0:DP-1];

/// 咬尾中斷發生時
wire [`E203_ITCM_ADDR_WIDTH-3-1:0] mtvec_trap_addr_num_af = ((mtvec_trap_addr_af - 'h80000030) >> 2);

assign mtvec_trap_data_af = (aftail_trap) ? ((mtvec_trap_addr_num_af == 'd11) ? {mem_r[12][31:0]} : 
                                             (mtvec_trap_addr_num_af == 'd3 ) ? {mem_r[8][31:0]}  :
                                             (mtvec_trap_addr_num_af == 'd7 ) ? {mem_r[10][31:0]} : 'b0) : 'b0;

/// 追尾中斷發生時
wire [`E203_ITCM_ADDR_WIDTH-3-1:0] mtvec_trap_addr_num_bf = ((mtvec_trap_addr_bf - 'h80000030) >> 2);

assign mtvec_trap_data_bf = (bftail_trap) ? ((mtvec_trap_addr_num_bf == 'd11) ? {mem_r[12][31:0]} : (mtvec_trap_addr_num_bf == 'd3) ? mem_r[8][31:0] : 'b0) : 'b0;

/// 追尾中斷的指令重取
wire [13-1:0] ir_addr_bf = mtvec_trap_data_bf [16-1:3];

assign ir_bf = (bftail_trap) ? mem_r[ir_addr_bf] : 'b0;

/// trap 入口 pc
wire excetion0_interrupt1 = (mtvec_trap_addr >= 80000030);
wire [`E203_ITCM_ADDR_WIDTH-3-1:0] mtvec_trap_addr_num = ((mtvec_trap_addr-'h80000030) >> 2);

always @(*) begin
  if (excetion0_interrupt1) begin                   // interrupt
    case (mtvec_trap_addr_num)
        3: mtvec_trap_data = {mem_r[8][31:0]};
        7: mtvec_trap_data = {mem_r[10][31:0]};
        11: mtvec_trap_data = {mem_r[12][31:0]};
        default: mtvec_trap_data = 'h0;
    endcase
  end
  else begin
    case (mtvec_trap_addr_num)                      // exception
        11: mtvec_trap_data = {mem_r[6][31:0]};
        default: mtvec_trap_data = 'h0;
    endcase
  end
end

// m - mode
// 80001874 = system call         = mem_r 6  [31:0]  = irq num  11
// 80001A24 = software handler    = mem_r 8  [31:0]  = irq num  3
// 8000218C = timer    handler    = mem_r 10 [31:0]  = irq num  7
// 800018B4 = external handler    = mem_r 12 [31:0]  = irq num  11


////////////////////////////////////////////////////////////////////////////////
// nts - irq addr
reg [AWnts-1:0] addr_irq_r;

// nts - write enable / read enable
wire   wen_nts;
wire   ren_nts;
assign ren_nts = cs_nts & (~we_nts) & (~irq_i) & (irq_ra_i | mret2ram);
assign wen_nts = (cs_nts & we_nts) & irq_i & (~irq_ra_i);

always @(posedge clk_nts) begin
    if (ren_nts & ~irq_i) begin
        addr_irq_r <= addr_nts;
    end else begin
  end
end

// nts - load 20 reg
wire [639:0] dout_irq;

assign dout_irq[31:0]    = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r];
assign dout_irq[63:32]   = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+1];
assign dout_irq[95:64]   = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+2];
assign dout_irq[127:96]  = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+3];
assign dout_irq[159:128] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+4];

assign dout_irq[191:160] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+5];
assign dout_irq[223:192] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+6];
assign dout_irq[255:224] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+7];
assign dout_irq[287:256] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+8];
assign dout_irq[319:288] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+9];

assign dout_irq[351:320] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+10];
assign dout_irq[383:352] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+11];
assign dout_irq[415:384] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+12];
assign dout_irq[447:416] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+13];
assign dout_irq[479:448] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+14];

assign dout_irq[511:480] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+15];
assign dout_irq[543:512] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+16];
assign dout_irq[575:544] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+17];
assign dout_irq[607:576] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+18];
assign dout_irq[639:608] = (ren_nts == 0) ? 'b0 : mem_r[addr_irq_r+19];

// nts load output
assign dout_nts = (dout_irq != 'b0) ? dout_irq : 'b0;



////////////////////////////////////////////////////////////////////////////////
// load addr
reg [AW-1:0] addr_r;

//  load - write enable / read enable
wire   [MW-1:0] wen;
wire   ren;
assign ren = cs & (~we) & (~irq_i) & (~irq_ra_i);
assign wen = ({MW{cs & we}} & wem) & {MW{(~irq_i) & (~irq_ra_i)}};

always @(posedge clk) begin
    if (ren) begin
        addr_r <= addr;
    end else begin
  end
end

// load data
wire [DW-1:0] dout_pre;
assign dout_pre = mem_r[addr_r];

generate
  if((FORCE_X2ZERO == 1)) begin: force_x_to_zero
    for (i = 0; i < DW; i = i+1) begin:force_x_gen 
        `ifndef SYNTHESIS//{
        assign dout_load[i] = (dout_pre[i] === 1'bx) ? 1'b0 : dout_pre[i];
        `else//}{
        assign dout_load[i] = dout_pre[i];
        `endif//}
    end
  end
  else begin:no_force_x_to_zero
    assign dout_load = dout_pre;
  end
endgenerate

// load output
wire [DW-1:0] dout_load;

assign dout = dout_load;

////////////////////////////////////////////////////////////////////////////////
// store data

////////////////////////////////////////////////////////////////////////////////
// nts store data

reg irq_regsave;

assign irq_s_reg_done = irq_regsave;


// store data
genvar i;
generate
    for (i = 0; i < MW; i = i+1) begin :mem
      if(((8*i+8) > DW)) begin: last
        always @(posedge clk or negedge clk_nts) begin
          if (wen[i] & ~(irq_i & wen_nts)) begin
              mem_r[addr][DW-1:8*i] <= din[DW-1:8*i];
              irq_regsave <= 1'b0;
          end
        end
      end
      else begin: non_last
        always @(posedge clk or negedge clk_nts) begin
          if (wen[i] & ~(irq_i & wen_nts)) begin
              mem_r[addr][8*i+7:8*i] <= din[8*i+7:8*i];
              irq_regsave <= 1'b0;
          end else if ((irq_i & wen_nts))begin
              mem_r[addr_nts+0][32-1:0]  <= din_nts[31:0];
              mem_r[addr_nts+1][32-1:0]  <= din_nts[63:32];
              mem_r[addr_nts+2][32-1:0]  <= din_nts[95:64];
              mem_r[addr_nts+3][32-1:0]  <= din_nts[127:96];
              mem_r[addr_nts+4][32-1:0]  <= din_nts[159:128];

              mem_r[addr_nts+5][32-1:0] <= din_nts[191:160];
              mem_r[addr_nts+6][32-1:0] <= din_nts[223:192];
              mem_r[addr_nts+7][32-1:0] <= din_nts[255:224];
              mem_r[addr_nts+8][32-1:0] <= din_nts[287:256];
              mem_r[addr_nts+9][32-1:0] <= din_nts[319:288];

              mem_r[addr_nts+10][32-1:0] <= din_nts[351:320];
              mem_r[addr_nts+11][32-1:0] <= din_nts[383:352];
              mem_r[addr_nts+12][32-1:0] <= din_nts[415:384];
              mem_r[addr_nts+13][32-1:0] <= din_nts[447:416];
              mem_r[addr_nts+14][32-1:0] <= din_nts[479:448];

              mem_r[addr_nts+15][32-1:0] <= din_nts[511:480];
              mem_r[addr_nts+16][32-1:0] <= din_nts[543:512];
              mem_r[addr_nts+17][32-1:0] <= din_nts[575:544];
              mem_r[addr_nts+18][32-1:0] <= din_nts[607:576];
              mem_r[addr_nts+19][32-1:0] <= din_nts[639:608];
              irq_regsave <= 1'b1;
          end else if(irq_s_reg_done)begin
            irq_regsave <= 1'b0;
          end
        end
      end
    end
endgenerate


reg [31:0] count;
reg [639:0] save_data;

always @(*) begin
    if (din_nts != 0) begin
            save_data = din_nts;
        end
    end


always @(posedge test_clk) begin
  if(irq_s_reg_done & count == 0) begin
    count = count + 'd1;
    // $display("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    // $display("nts_ram_base_addr : 88004154 = 'b0000 0100 0001 0101 01 = 'd4181 = 'h1055");
    // $display("addr : %h , nts 1 : %h , data [31:0]    : %h", addr_nts+0, mem_r[addr_nts+0], save_data[31:0]);
    // $display("addr : %h , nts 2 : %h , data [63:32]   : %h", addr_nts+1, mem_r[addr_nts+1], save_data[63:32]);
    // $display("addr : %h , nts 3 : %h , data [95:64]   : %h", addr_nts+2, mem_r[addr_nts+2], save_data[95:64]);
    // $display("addr : %h , nts 4 : %h , data [127:96]  : %h", addr_nts+3, mem_r[addr_nts+3], save_data[127:96]);
    // $display("addr : %h , nts 5 : %h , data [159:128] : %h", addr_nts+4, mem_r[addr_nts+4], save_data[159:128]);
    // $display("addr : %h , nts 6 : %h , data [191:160] : %h", addr_nts+5, mem_r[addr_nts+5], save_data[191:160]);
    // $display("addr : %h , nts 7 : %h , data [223:192] : %h", addr_nts+6, mem_r[addr_nts+6], save_data[223:192]);
    // $display("addr : %h , nts 8 : %h , data [255:224] : %h", addr_nts+7, mem_r[addr_nts+7], save_data[255:224]);
    // $display("addr : %h , nts 9 : %h , data [287:256] : %h", addr_nts+8, mem_r[addr_nts+8], save_data[287:256]);
    // $display("addr : %h , nts 10: %h , data [319:288] : %h", addr_nts+9, mem_r[addr_nts+9], save_data[319:288]);
    // $display("addr : %h , nts 11: %h , data [351:320] : %h", addr_nts+10, mem_r[addr_nts+10], save_data[351:320]);
    // $display("addr : %h , nts 12: %h , data [383:352] : %h", addr_nts+11, mem_r[addr_nts+11], save_data[383:352]);
    // $display("addr : %h , nts 13: %h , data [415:384] : %h", addr_nts+12, mem_r[addr_nts+12], save_data[415:384]);
    // $display("addr : %h , nts 14: %h , data [447:416] : %h", addr_nts+13, mem_r[addr_nts+13], save_data[447:416]);
    // $display("addr : %h , nts 15: %h , data [479:448] : %h", addr_nts+14, mem_r[addr_nts+14], save_data[479:448]);
    // $display("addr : %h , nts 16: %h , data [511:480] : %h", addr_nts+15, mem_r[addr_nts+15], save_data[511:480]);
    // $display("addr : %h , nts 17: %h , data [543:512] : %h", addr_nts+16, mem_r[addr_nts+16], save_data[543:512]);
    // $display("addr : %h , nts 18: %h , data [575:544] : %h", addr_nts+17, mem_r[addr_nts+17], save_data[575:544]);
    // $display("addr : %h , nts 19: %h , data [607:576] : %h", addr_nts+18, mem_r[addr_nts+18], save_data[607:576]);
    // $display("addr : %h , nts 20: %h , data [639:608] : %h", addr_nts+19, mem_r[addr_nts+19], save_data[639:608]);
    // $display("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
  end else if(irq_s_reg_done == 'b0 & count != 0) begin
    count = count - 'd1;
  end
end

endmodule

