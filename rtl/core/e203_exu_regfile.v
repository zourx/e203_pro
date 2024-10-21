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
// Designer   : Bob Hu
//
// Description:
//  The Regfile module to implement the core's general purpose registers file
//
// ====================================================================
`include "e203_defines.v"

module e203_exu_regfile(
  input  [`E203_RFIDX_WIDTH-1:0] read_src1_idx,
  input  [`E203_RFIDX_WIDTH-1:0] read_src2_idx,
  output [`E203_XLEN-1:0] read_src1_dat,
  output [`E203_XLEN-1:0] read_src2_dat,

  input  wbck_dest_wen,
  input  [`E203_RFIDX_WIDTH-1:0] wbck_dest_idx,
  input  [`E203_XLEN-1:0] wbck_dest_dat,



  input  test_mode,
  input  clk,
  input  rst_n,

  input  irq_regsave,
///////////#####################################################################################///////////////////////////
  input  [`E203_XLEN-1:0] mepc_i,

// from nts_ctrl
  input                           irq_i,
  input                           irq_ra_i,
  input [1:0]                     trap_stage,
  input [(`E203_RFREG_NUM*4)-1:0] reg_data1_i,
  input [(`E203_RFREG_NUM*4)-1:0] reg_data2_i,
  input [(`E203_RFREG_NUM*4)-1:0] reg_data3_i,
  input [(`E203_RFREG_NUM*4)-1:0] reg_data4_i,


// to nts_ctrl
  output reg                           save_2ram,
  output reg [(`E203_RFREG_NUM*4)-1:0] reg_data1_o,
  output reg [(`E203_RFREG_NUM*4)-1:0] reg_data2_o,
  output reg [(`E203_RFREG_NUM*4)-1:0] reg_data3_o,
  output reg [(`E203_RFREG_NUM*4)-1:0] reg_data4_o,

/// to nplic
  output [`E203_XLEN-1:0] x2_sp,

// to x1_r().v
  output [`E203_XLEN-1:0] x1_r    // x1_is_irqra
);




reg [`E203_XLEN-1:0] rf_r [`E203_RFREG_NUM-1:0];


//// NOP    : x0.x3.x4
//// caller : x1.x5-x7.x10-x17.x28-x31
//// callee : x2.x8.x9.x18-x27

always @(posedge clk or negedge rst_n) begin
  if (~rst_n) begin
    save_2ram <= 1'b0;
  end else if ((irq_i == 'b1) & (trap_stage == 'b01)) begin
    save_2ram <= 1'b1;
  end else begin
    save_2ram <= 1'b0;
  end
end

assign reg_data1_o = (irq_i & save_2ram) ? {rf_r[1] , rf_r[5], rf_r[6], rf_r[7]}     : 'b0;
assign reg_data2_o = (irq_i & save_2ram) ? {rf_r[10] , rf_r[11], rf_r[12], rf_r[13]} : 'b0;
assign reg_data3_o = (irq_i & save_2ram) ? {rf_r[14] , rf_r[15], rf_r[16], rf_r[17]} : 'b0;
assign reg_data4_o = (irq_i & save_2ram) ? {rf_r[28] , rf_r[29], rf_r[30], rf_r[31]} : 'b0;



reg mret;
reg irq_ra_r;

always @ (posedge clk or negedge rst_n) begin
  if (~rst_n) begin
    irq_ra_r <= 1'b0;
    mret <= 1'b0;
  end
  else if ((trap_stage == 2'b10) & irq_ra_i) begin
    irq_ra_r <= 1'b1;
    mret <= 1'b1;
  end else begin
    irq_ra_r <= 1'b0;
    mret <= 1'b0;
  end
end


wire [`E203_RFREG_NUM-1:0] rf_wen;
wire [`E203_RFREG_NUM-1:0] write_enable;
wire [`E203_XLEN-1:0]      write_data [`E203_RFREG_NUM-1:0];
wire [`E203_XLEN-1:0]      write_sp;

reg regsave_req;
always @(posedge clk) begin
  regsave_req <= irq_regsave;
end

wire irqing = (regsave_req & (trap_stage == 2'b01)) | (irq_ra_r & mret);

genvar i;

generate
  for (i = 0; i < `E203_RFREG_NUM; i = i + 1) begin: regfile
    if (i == 0) begin: rf0

        // x0 cannot be written since it is constant zeros
      assign rf_wen[i] = 1'b0;
      assign rf_r[i] = `E203_XLEN'b0;
    end else begin: rfno0

      // Decide whether to use saved data or write-back data
      assign write_data[i] = 
                        (regsave_req & (trap_stage == 2'b01) & write_enable[i]) ? 
                            mepc_i :
                        (irq_ra_r & mret & write_enable[i]) ? (
                           (i == 1)  ? reg_data1_i[127:96] :
                           (i == 5)  ? reg_data1_i[95:64]  :
                           (i == 6)  ? reg_data1_i[63:32]  :
                           (i == 7)  ? reg_data1_i[31:0]   :
                           (i == 10) ? reg_data2_i[127:96] :
                           (i == 11) ? reg_data2_i[95:64]  :
                           (i == 12) ? reg_data2_i[63:32]  :
                           (i == 13) ? reg_data2_i[31:0]   :
                           (i == 14) ? reg_data3_i[127:96] :
                           (i == 15) ? reg_data3_i[95:64]  :
                           (i == 16) ? reg_data3_i[63:32]  :
                           (i == 17) ? reg_data3_i[31:0]   :
                           (i == 28) ? reg_data4_i[127:96] :
                           (i == 29) ? reg_data4_i[95:64]  :
                           (i == 30) ? reg_data4_i[63:32]  :
                           (i == 31) ? reg_data4_i[31:0]   :
                           rf_r[i]
                         ) : 
                         (write_enable[i]) ?
                           wbck_dest_dat : rf_r[i];
      
      assign rf_wen[i] = wbck_dest_wen & (wbck_dest_idx == i) ;

      assign write_enable = (regsave_req & (trap_stage == 2'b01)) ?
                                'h00000002 :
                            (irq_ra_r & mret) ? 
                                'hF003FCE2 : rf_wen;

      assign write_sp = (irq_ra_r & mret & (rf_wen == 'h00000004)) ? wbck_dest_dat : 'b0;
      always @(posedge clk) begin
        if (irq_ra_r & mret & (rf_wen == 'h00000004)) begin
          rf_r[2] = write_sp;
        end
      end

      always @(*) begin
        if (irqing & write_enable[i]) begin
          rf_r[i] = write_data[i];
        end
      end

      always @(posedge clk) begin
        if (~irqing & write_enable[i]) begin
          rf_r[i] <= write_data[i];
        end
      end
    end
  end

endgenerate

assign read_src1_dat = rf_r[read_src1_idx];
assign read_src2_dat = rf_r[read_src2_idx];

assign x1_r  = rf_r[1];   //// return adder
assign x2_sp = rf_r[2];

reg count;

always @(negedge clk) begin
  if((trap_stage == 2'b11) & (count == 0)) begin
    count <= count + 'b1;
    // $display("!!!!!!!!!!!!!!!!!!!!!!!!!!");
    // $display(" rf_r[1]  : %h", rf_r[1]);
    // $display(" rf_r[5]  : %h", rf_r[5]);
    // $display(" rf_r[6]  : %h", rf_r[6]);
    // $display(" rf_r[7]  : %h", rf_r[7]);
    // $display(" rf_r[10] : %h", rf_r[10]);
    // $display(" rf_r[11] : %h", rf_r[11]);
    // $display(" rf_r[12] : %h", rf_r[12]);
    // $display(" rf_r[13] : %h", rf_r[13]);
    // $display(" rf_r[14] : %h", rf_r[14]);
    // $display(" rf_r[15] : %h", rf_r[15]);
    // $display(" rf_r[16] : %h", rf_r[16]);
    // $display(" rf_r[17] : %h", rf_r[17]);
    // $display(" rf_r[28] : %h", rf_r[28]);
    // $display(" rf_r[29] : %h", rf_r[29]);
    // $display(" rf_r[30] : %h", rf_r[30]);
    // $display(" rf_r[31] : %h", rf_r[31]);
    // $display("!!!!!!!!!!!!!!!!!!!!!!!!!!");
  end else begin
    count <= 'b0; 
  end
end

endmodule