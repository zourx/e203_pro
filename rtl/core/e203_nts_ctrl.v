`include "e203_defines.v"

  `ifdef E203_HAS_NTS //{

module e203_nts_ctrl (

 input         nest_trap_2ntsctrl,

 input         bftail_trap,

/// mret
  input       alu_cmt_mret,
  output      mret,

/// to clk_ctrl
 output        trap_active,

/// to regfile
  output           irq_o,                             // & to nts_ram
  output reg [1:0] trap_stage4nts,                    // to ifu_ifetch & to nplic

  output [(`E203_RFREG_NUM*4)-1:0] ram_data1_o2reg,
  output [(`E203_RFREG_NUM*4)-1:0] ram_data2_o2reg,
  output [(`E203_RFREG_NUM*4)-1:0] ram_data3_o2reg,
  output [(`E203_RFREG_NUM*4)-1:0] ram_data4_o2reg,
  output                           irq_ra_o,          // & to nts_ram & csr & ifu_ifetch

/// from regfile
  input [(`E203_RFREG_NUM*4)-1:0] regfile_data1_i,
  input [(`E203_RFREG_NUM*4)-1:0] regfile_data2_i,
  input [(`E203_RFREG_NUM*4)-1:0] regfile_data3_i,
  input [(`E203_RFREG_NUM*4)-1:0] regfile_data4_i,
  input                           save_2ram,

/// from csr
  input [`E203_XLEN-1:0] mcause_i,
  input [`E203_XLEN-1:0] mepc_i,
  input [`E203_XLEN-1:0] mtval_i,
  input [`E203_XLEN-1:0] mstatus_i,
  input                  mieisop,

/// to csr
  output [`E203_XLEN-1:0] mcause_o,
  output [`E203_XLEN-1:0] mepc_o,
  output [`E203_XLEN-1:0] mtval_o,
  output [`E203_XLEN-1:0] mstatus_o,
  output                  nts_is_full,
  output                  nts_regsave,
  output                  save_reg,
  output                  status_mie_r,

/// from exu_excp
  input                   irq_en_pass,

/// to core (excp .iftch .csr .nplic)
  output       aftail_trap,
  output [2:0] iq_aftrap,

/// ifu -> ifu_ifetch
  output                  cls_mpc,

  input                   isr_i,
  input                   ret_i,
  input                   wait_isring,
  input                   mret_req,

/// from nplic
  input                   ext_irq_r,
  input                   sft_irq_r,
  input                   tmr_irq_r,
  input [2:0]             iq_aftrap_nplic2nts,

/// to nplic
  output                  ret2nplic,
  output [3:0]            num_trap2nplic,

/// nts_ram
  output                           nts_ram_cs,
  output                           nts_ram_we,  
  output [`E203_NTS_RAM_AW-1:0]    nts_ram_addr, 
  output [`E203_NTS_RAM_MW-1:0]    nts_ram_wem,
  output [`E203_NTS_RAM_DW-1:0]    nts_ram_din,          
  input  [`E203_NTS_RAM_DW-1:0]    nts_ram_dout,
  input                            irq_regsave,
  output                           clk_nts_ram,

  input  test_mode,
  input  clk,
  input  rst_n
);

/// mret
assign mret = (alu_cmt_mret & (trap_stage4nts == 'b10));
wire mret_i;
assign mret_i = mret;

wire irq_i;
assign irq_i = (ext_irq_r | sft_irq_r | tmr_irq_r) & ~isr_i & status_mie_r;

// nts_ram save reg done for ifu_ifetch
assign nts_regsave = ((trap_stage4nts == 'b01) & irq_regsave) ? irq_regsave : 'b0 ;

// to nts_ram
wire [(`E203_RFREG_NUM*4)-1:0] reg_data1_o2ram;
wire [(`E203_RFREG_NUM*4)-1:0] reg_data2_o2ram;
wire [(`E203_RFREG_NUM*4)-1:0] reg_data3_o2ram;
wire [(`E203_RFREG_NUM*4)-1:0] reg_data4_o2ram;
wire [(`E203_RFREG_NUM*4)-1:0] csr_data1_o2ram;

// 20 reg rolled into one
assign nts_ram_din = {reg_data1_o2ram, reg_data2_o2ram, reg_data3_o2ram, reg_data4_o2ram, csr_data1_o2ram};

// read cs=1 we=0 , write cs=1 we=1  , wem = mask
assign nts_ram_cs   = (save_reg & ~nts_regsave) ? 1'b1 : (clsmie_mret | mret_i) ? 1'b1 : 'b0;
assign nts_ram_we   = (save_reg & ~nts_regsave) ? 1'b1 : (clsmie_mret | mret_i) ? 1'b0 : 'b0;
assign nts_ram_wem  = (save_reg & ~nts_regsave) ? 1'b1 : 1'b0;
assign clk_nts_ram  = ((nts_ram_cs == 1) & (nts_ram_din[640-1:128] != 'b0) | (ret_i | mret) & (trap_stage4nts == 'b10)) ? clk : 'b0;

// from nts_ram
wire [(`E203_RFREG_NUM*4)-1:0] ram_data1_i;
wire [(`E203_RFREG_NUM*4)-1:0] ram_data2_i;
wire [(`E203_RFREG_NUM*4)-1:0] ram_data3_i;
wire [(`E203_RFREG_NUM*4)-1:0] ram_data4_i;
wire [(`E203_RFREG_NUM*4)-1:0] ram_data5_i;

// 20 reg
assign ram_data1_i = nts_ram_dout [639:512];
assign ram_data2_i = nts_ram_dout [511:384];
assign ram_data3_i = nts_ram_dout [383:256];
assign ram_data4_i = nts_ram_dout [255:128];
assign ram_data5_i = nts_ram_dout [127:0];


// addr ctrl
// if ntrap_num = 1 is first irq
// if ntrap_num = 2 is first nest irq
wire [31:0] nts_save2ram;
assign nts_save2ram = (ntrap_num == 0) ? 'b0 : `E203_CFG_NTS_ADDR_BASE;

assign nts_ram_addr = 'h14*(ntrap_num-'d1) + (nts_save2ram[20-1:2]);

assign nts_is_full = (ntrap_num == 'd12) ? 'b1 : 'b0; // close mie

///////////////////////////
// nest trap number counter
reg [3:0] ntrap_num;

reg irq_i_d;       // 上周期的 irq_i
reg irq_en_pass_d; // 上周期的 irq_en_pass

always @(posedge clk or negedge rst_n) begin
  if (~rst_n) begin
    ntrap_num <= 'b0;
    irq_i_d <= 1'b0;
    irq_en_pass_d <= 1'b0;
  end else begin
    // 檢測 irq_i 和 irq_en_pass 的上升沿
    if ((irq_i & ~irq_i_d) && (irq_en_pass & ~irq_en_pass_d)) begin
      ntrap_num <= ntrap_num + 1'b1;
    end else if (clsmie_mret | mret_i | (aftail_trap & (iq_aftrap_nplic2nts != 'b001) & (num_trap2nplic != 'b1))) begin
      ntrap_num <= ntrap_num - 1'b1;
    end else begin
      ntrap_num <= ntrap_num;
    end

    // 更新上周期的狀態
    irq_i_d <= irq_i;
    irq_en_pass_d <= irq_en_pass;
    irq_en_pass_d <= irq_en_pass;
  end
end

/////////////////////////////////////
// interrupt stage
// not trap -> irq -> isr ->  mret 
//    00    -> 01  -> 10  ->  11

always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
        trap_stage4nts <= 2'b00;
    end else begin
        if (mret_stage | nest_trap_2ntsctrl) begin
            trap_stage4nts <= 2'b00;
        end else if (clsmie_mret | mret_i) begin
            trap_stage4nts <= 2'b11;
        end else if (isring | isring_nxt | bf_wait) begin
            trap_stage4nts <= 2'b10;
        end else if (irqing) begin
            trap_stage4nts <= 2'b01;
        end else begin
            trap_stage4nts <= trap_stage4nts;
        end
    end
end

/// nest - mret
  wire mret_stage;
  wire isring_nxt;
  assign mret_stage = (((trap_stage4nts == 2'b11) & alu_cmt_mret) | mret_req) & (ntrap_num == 'b0);
  assign isring_nxt = mret_req & (ntrap_num != 'b0);

// nts_ctrl enable
assign trap_active = ~(trap_stage4nts == 0);
wire irqing;
wire isring;

// IRQ in core & jump ISR ago
assign irqing = (irq_i & ~isring & irq_en_pass) | save_2ram | nts_regsave;

// IRQ in ISR
assign isring = (~rst_n) ? 'b0 : ~bftail_trap & (isr_i | aftail_trap | wait_isring);

reg bf_wait;
always @(posedge clk or negedge rst_n) begin
  if(~rst_n) begin
    bf_wait <= 'b0;
  end else if (isr_i & bftail_trap) begin
    bf_wait <= 'b1;
  end else begin
    bf_wait <= 'b0;
  end
end

// mret & close mie & jump pc
wire clsmie_mret;
assign clsmie_mret = ~aftail_trap & ~(ntrap_num == 'd0) & ret_i;
assign cls_mpc = (ret_i & ntrap_num != 'b1) ? 1'b1 : 1'b0;

assign irq_ra_o = clsmie_mret;

always @(posedge clk or negedge rst_n) begin
  if (~rst_n) begin
    save_reg <= 'b0;
  end else if (irq_en_pass & irq_i & ~(aftail_trap)) begin
    save_reg <= 'b1;
  end else begin
    save_reg <= 'b0;
  end
end

/// nest - num . mret to nplic
  assign ret2nplic    = clsmie_mret;
  assign num_trap2nplic = ntrap_num;

/// after trap and mret ago
reg n_trap_r;
assign n_trap_r = (~rst_n) ? 'b0 : 
                  ((num_trap2nplic >= 2) & (ret_i) & ((iq_aftrap_nplic2nts == 'b100) | (iq_aftrap_nplic2nts == 'b010))) ? 'b1 : 'b0;

assign aftail_trap = (iq_aftrap_nplic2nts != 'b0) & ret_i & (trap_stage4nts == 'b10) & ~n_trap_r;
assign iq_aftrap = (aftail_trap) ? iq_aftrap_nplic2nts : 'b0;

/// load caller reg & csr reg
/// nts_ctrl -> return_2regfile

always @(posedge clk or negedge rst_n) begin
  if (~rst_n) begin
    ram_data1_o2reg <= 'h0;
    ram_data2_o2reg <= 'h0;
    ram_data3_o2reg <= 'h0;
    ram_data4_o2reg <= 'h0;
  end else if (clsmie_mret) begin
    ram_data1_o2reg <= ram_data1_i;
    ram_data2_o2reg <= ram_data2_i;
    ram_data3_o2reg <= ram_data3_i;
    ram_data4_o2reg <= ram_data4_i;
  end else if (trap_stage4nts == 'b11) begin
    ram_data1_o2reg <= ram_data1_o2reg;
    ram_data2_o2reg <= ram_data2_o2reg;
    ram_data3_o2reg <= ram_data3_o2reg;
    ram_data4_o2reg <= ram_data4_o2reg;
  end else begin
    ram_data1_o2reg <= 'h0;
    ram_data2_o2reg <= 'h0;
    ram_data3_o2reg <= 'h0;
    ram_data4_o2reg <= 'h0;
  end
end

assign mcause_o  = (~rst_n) ? 'h0 : (clsmie_mret | mret_i) ? ram_data5_i[127:96] : 'h0;
assign mepc_o    = (~rst_n) ? 'h0 : (clsmie_mret)          ? ram_data5_i[95:64]  : 'h0;
assign mtval_o   = (~rst_n) ? 'h0 : (clsmie_mret | mret_i) ? ram_data5_i[63:32]  : 'h0;
assign mstatus_o = (~rst_n) ? 'h0 : (clsmie_mret | mret_i) ? ram_data5_i[31:0]   : 'h0;


/// save caller reg & csr reg
/// nts_ctrl -> save_2ram
assign reg_data1_o2ram = (~rst_n) ? 'h0 :(save_reg & ~nts_regsave) ? regfile_data1_i : 'h0;
assign reg_data2_o2ram = (~rst_n) ? 'h0 :(save_reg & ~nts_regsave) ? regfile_data2_i : 'h0;
assign reg_data3_o2ram = (~rst_n) ? 'h0 :(save_reg & ~nts_regsave) ? regfile_data3_i : 'h0;
assign reg_data4_o2ram = (~rst_n) ? 'h0 :(save_reg & ~nts_regsave) ? regfile_data4_i : 'h0;

assign csr_data1_o2ram = (~rst_n) ? 'h0 :(save_reg & ~nts_regsave) ? {mcause_i, mepc_i, mtval_i, mstatus_i} : 'h0;
assign irq_o           = (~rst_n) ? 'h0 :(save_reg & ~nts_regsave) ? 'b1 : 'h0;

endmodule

  `endif//}