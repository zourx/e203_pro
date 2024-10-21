`include "e203_defines.v"

module e203_soc_top_verilator(
    input clk,
    input rst_n
);

  `define CPU_TOP u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top
  `define EXU `CPU_TOP.u_e203_cpu.u_e203_core.u_e203_exu
  `define ITCM `CPU_TOP.u_e203_srams.u_e203_itcm_ram.u_e203_itcm_gnrl_ram.u_sirv_sim_ram
  `define DTCM `CPU_TOP.u_e203_srams.u_e203_dtcm_ram.u_e203_dtcm_gnrl_ram.u_sirv_sim_ram

  `define PC_WRITE_TOHOST       `E203_PC_SIZE'h80000086
  `define PC_EXT_IRQ_BEFOR_MRET `E203_PC_SIZE'h800000a6
  `define PC_SFT_IRQ_BEFOR_MRET `E203_PC_SIZE'h800000be
  `define PC_TMR_IRQ_BEFOR_MRET `E203_PC_SIZE'h800000d6
  `define PC_AFTER_SETMTVEC     `E203_PC_SIZE'h8000015C

  wire [`E203_XLEN-1:0] x3 = `EXU.u_e203_exu_regfile.rf_r[3];
  wire [`E203_PC_SIZE-1:0] pc = `EXU.u_e203_exu_commit.alu_cmt_i_pc;
  wire [`E203_PC_SIZE-1:0] pc_vld = `EXU.u_e203_exu_commit.alu_cmt_i_valid;

  /*
  wire lfextclk;
  reg [5:0] cnt;
  always @(posedge clk or negedge rst_n)
  begin 
    if(rst_n == 1'b0) begin
        cnt <= 6'd0;
    end
    else begin
        cnt <= cnt + 6'd1;
    end
  end
  assign lfextclk = cnt[5];
  */

  reg [31:0] pc_write_to_host_cnt;
  reg [31:0] pc_write_to_host_cycle;
  reg [31:0] valid_ir_cycle;
  reg [31:0] cycle_count;
  reg pc_write_to_host_flag;

  always @(posedge clk or negedge rst_n)
  begin 
    if(rst_n == 1'b0) begin
        pc_write_to_host_cnt <= 32'b0;
        pc_write_to_host_flag <= 1'b0;
        pc_write_to_host_cycle <= 32'b0;
    end
    else if (pc_vld & (pc == `PC_WRITE_TOHOST)) begin
        pc_write_to_host_cnt <= pc_write_to_host_cnt + 1'b1;
        pc_write_to_host_flag <= 1'b1;
        if (pc_write_to_host_flag == 1'b0) begin
            pc_write_to_host_cycle <= cycle_count;
        end
    end
  end

  always @(posedge clk or negedge rst_n)
  begin 
    if(rst_n == 1'b0) begin
        cycle_count <= 32'b0;
    end
    else begin
        cycle_count <= cycle_count + 1'b1;
    end
  end

  wire i_valid = `EXU.i_valid;
  wire i_ready = `EXU.i_ready;

  always @(posedge clk or negedge rst_n)
  begin 
    if(rst_n == 1'b0) begin
        valid_ir_cycle <= 32'b0;
    end
    else if(i_valid & i_ready & (pc_write_to_host_flag == 1'b0)) begin
        valid_ir_cycle <= valid_ir_cycle + 1'b1;
    end
  end

  // 這段的 itcmcase 是抓取檔名而非整個 data arry , 以便後續使用 readmem 語法獲取資料
  reg[20*8-1:0] itcmcase;
  initial begin
    $display("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");  
    if($value$plusargs("itcm_init=%s",itcmcase))begin
      $display("itcm_init");
    end
    else begin
	    $display("No itcm_init defined!");
	    $finish;
    end
  end

  // 這段的 dtcmcase 是抓取檔名而非整個 data arry , 以便後續使用 readmem 語法獲取資料
  reg [20*8-1:0] dtcmcase;
  initial begin
    if($value$plusargs("dtcm_init=%s",dtcmcase))begin
      $display("dtcm_init");
      $display("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");  
    end
    else begin
	    $display("No dtcm_init defined!");
	    $finish;
    end
  end

  always  @(pc_write_to_host_cnt) begin
	  if (pc_write_to_host_cnt == 32'd8) begin

        $display("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~~~~ Test Result Summary ~~~~~~~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~~~~~Total cycle_count value: %d ~~~~~~~~~~~~~", cycle_count);
        $display("~~~~~~~~~~The valid Instruction Count: %d ~~~~~~~~~~~~~", valid_ir_cycle);
        $display("~~~~~The test ending reached at cycle: %d ~~~~~~~~~~~~~", pc_write_to_host_cycle);
        $display("~~~~~~~~~~~~~~~The final x3 Reg value: %d ~~~~~~~~~~~~~", x3);
        $display("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    if (x3 == 1) begin
        $display("~~~~~~~~~~~~~~~~ TEST_PASS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~ #####     ##     ####    #### ~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~ #    #   #  #   #       #     ~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~ #    #  #    #   ####    #### ~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~ #####   ######       #       #~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~ #       #    #  #    #  #    #~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~ #       #    #   ####    #### ~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    end
    else begin
        $display("~~~~~~~~~~~~~~~~ TEST_FAIL ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~######    ##       #    #     ~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~#        #  #      #    #     ~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~#####   #    #     #    #     ~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~#       ######     #    #     ~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~#       #    #     #    #     ~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~#       #    #     #    ######~~~~~~~~~~~~~~~~");
        $display("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    end
    $finish; //TODO: temp
    end
  end

  // watchdog
// `ifdef JTAGDPI
// `else
//   always @(posedge clk) begin
//     if (cycle_count[20] == 1'b1) begin
//       $display("Time Out !!!");
      // $finish; 
//     end
//   end
// `endif
  
  // $readmem[hb]("File", ArrayName, StartAddr, EndAddr)
  integer j;
    // dtcmcase 會放進 dtcm_mem , 而 for 迴圈依照 dtcm_dp 從 dtcm_mem 寫入 DTCM 中的 mem_r , 因此 dtcm_mem 比照 dp 規則
    reg [7:0] dtcm_mem [(`E203_DTCM_RAM_DP*8)-1:0];
    initial begin
      $readmemh(dtcmcase, dtcm_mem);

      for (j=0;j<(`E203_DTCM_RAM_DP);j=j+1) begin
          `DTCM.mem_r[j][00+7:00] = dtcm_mem[j*4+0];
          `DTCM.mem_r[j][08+7:08] = dtcm_mem[j*4+1];
          `DTCM.mem_r[j][16+7:16] = dtcm_mem[j*4+2];
          `DTCM.mem_r[j][24+7:24] = dtcm_mem[j*4+3];
      end
        $display("DTCM 0x00: %h", `DTCM.mem_r[8'h00]);
        $display("DTCM end");
        $display("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");  
    end 
  
  // $readmem[hb]("File", ArrayName, StartAddr, EndAddr)
  integer i;
    // itcmcase 會放進 itcm_mem , 而 for 迴圈依照 itcm_dp 從 itcm_mem 寫入 ITCM 中的 mem_r , 因此 itcm_mem 比照 dp 規則 
    reg [7:0] itcm_mem [(`E203_ITCM_RAM_DP*8)-1:0];
    initial begin
      $readmemh(itcmcase, itcm_mem);

      for (i=0;i<(`E203_ITCM_RAM_DP);i=i+1) begin
          `ITCM.mem_r[i][00+7:00] = itcm_mem[i*8+0];
          `ITCM.mem_r[i][08+7:08] = itcm_mem[i*8+1];
          `ITCM.mem_r[i][16+7:16] = itcm_mem[i*8+2];
          `ITCM.mem_r[i][24+7:24] = itcm_mem[i*8+3];
          `ITCM.mem_r[i][32+7:32] = itcm_mem[i*8+4];
          `ITCM.mem_r[i][40+7:40] = itcm_mem[i*8+5];
          `ITCM.mem_r[i][48+7:48] = itcm_mem[i*8+6];
          `ITCM.mem_r[i][56+7:56] = itcm_mem[i*8+7];
      end
        $display("ITCM 0x00: %h", `ITCM.mem_r[8'h00]);
        $display("ITCM end");
    end 

`ifdef JTAGDPI
  wire jtag_TDI;
  wire jtag_TDO;
  wire jtag_TCK;
  wire jtag_TMS;
  wire jtag_TRSTn;

  jtagdpi jtagdpi(
  .clk_i(clk),
  .rst_ni(rst_n),

  .jtag_tck(jtag_TCK),
  .jtag_tms(jtag_TMS),
  .jtag_tdi(jtag_TDI),
  .jtag_tdo(jtag_TDO),
  .jtag_trst_n(jtag_TRSTn),
  .jtag_srst_n()
  );
`else
  wire jtag_TDI = 1'b0;
  wire jtag_TDO;
  wire jtag_TCK = 1'b0;
  wire jtag_TMS = 1'b0;
  wire jtag_TRSTn = 1'b1;
`endif


e203_soc_top u_e203_soc_top(
   
   .hfextclk(clk),
   .hfxoscen(),

   .lfextclk(clk),
   //.lfextclk(lfextclk),
   .lfxoscen(),

   .io_pads_jtag_TCK_i_ival (jtag_TCK),
   .io_pads_jtag_TMS_i_ival (jtag_TMS),
   .io_pads_jtag_TDI_i_ival (jtag_TDI),
   .io_pads_jtag_TDO_o_oval (jtag_TDO),
   .io_pads_jtag_TDO_o_oe (),
   .io_pads_gpio_0_i_ival (1'b1),
   .io_pads_gpio_0_o_oval (),
   .io_pads_gpio_0_o_oe (),
   .io_pads_gpio_0_o_ie (),
   .io_pads_gpio_0_o_pue (),
   .io_pads_gpio_0_o_ds (),
   .io_pads_gpio_1_i_ival (1'b1),
   .io_pads_gpio_1_o_oval (),
   .io_pads_gpio_1_o_oe (),
   .io_pads_gpio_1_o_ie (),
   .io_pads_gpio_1_o_pue (),
   .io_pads_gpio_1_o_ds (),
   .io_pads_gpio_2_i_ival (1'b1),
   .io_pads_gpio_2_o_oval (),
   .io_pads_gpio_2_o_oe (),
   .io_pads_gpio_2_o_ie (),
   .io_pads_gpio_2_o_pue (),
   .io_pads_gpio_2_o_ds (),
   .io_pads_gpio_3_i_ival (1'b1),
   .io_pads_gpio_3_o_oval (),
   .io_pads_gpio_3_o_oe (),
   .io_pads_gpio_3_o_ie (),
   .io_pads_gpio_3_o_pue (),
   .io_pads_gpio_3_o_ds (),
   .io_pads_gpio_4_i_ival (1'b1),
   .io_pads_gpio_4_o_oval (),
   .io_pads_gpio_4_o_oe (),
   .io_pads_gpio_4_o_ie (),
   .io_pads_gpio_4_o_pue (),
   .io_pads_gpio_4_o_ds (),
   .io_pads_gpio_5_i_ival (1'b1),
   .io_pads_gpio_5_o_oval (),
   .io_pads_gpio_5_o_oe (),
   .io_pads_gpio_5_o_ie (),
   .io_pads_gpio_5_o_pue (),
   .io_pads_gpio_5_o_ds (),
   .io_pads_gpio_6_i_ival (1'b1),
   .io_pads_gpio_6_o_oval (),
   .io_pads_gpio_6_o_oe (),
   .io_pads_gpio_6_o_ie (),
   .io_pads_gpio_6_o_pue (),
   .io_pads_gpio_6_o_ds (),
   .io_pads_gpio_7_i_ival (1'b1),
   .io_pads_gpio_7_o_oval (),
   .io_pads_gpio_7_o_oe (),
   .io_pads_gpio_7_o_ie (),
   .io_pads_gpio_7_o_pue (),
   .io_pads_gpio_7_o_ds (),
   .io_pads_gpio_8_i_ival (1'b1),
   .io_pads_gpio_8_o_oval (),
   .io_pads_gpio_8_o_oe (),
   .io_pads_gpio_8_o_ie (),
   .io_pads_gpio_8_o_pue (),
   .io_pads_gpio_8_o_ds (),
   .io_pads_gpio_9_i_ival (1'b1),
   .io_pads_gpio_9_o_oval (),
   .io_pads_gpio_9_o_oe (),
   .io_pads_gpio_9_o_ie (),
   .io_pads_gpio_9_o_pue (),
   .io_pads_gpio_9_o_ds (),
   .io_pads_gpio_10_i_ival (1'b1),
   .io_pads_gpio_10_o_oval (),
   .io_pads_gpio_10_o_oe (),
   .io_pads_gpio_10_o_ie (),
   .io_pads_gpio_10_o_pue (),
   .io_pads_gpio_10_o_ds (),
   .io_pads_gpio_11_i_ival (1'b1),
   .io_pads_gpio_11_o_oval (),
   .io_pads_gpio_11_o_oe (),
   .io_pads_gpio_11_o_ie (),
   .io_pads_gpio_11_o_pue (),
   .io_pads_gpio_11_o_ds (),
   .io_pads_gpio_12_i_ival (1'b1),
   .io_pads_gpio_12_o_oval (),
   .io_pads_gpio_12_o_oe (),
   .io_pads_gpio_12_o_ie (),
   .io_pads_gpio_12_o_pue (),
   .io_pads_gpio_12_o_ds (),
   .io_pads_gpio_13_i_ival (1'b1),
   .io_pads_gpio_13_o_oval (),
   .io_pads_gpio_13_o_oe (),
   .io_pads_gpio_13_o_ie (),
   .io_pads_gpio_13_o_pue (),
   .io_pads_gpio_13_o_ds (),
   .io_pads_gpio_14_i_ival (1'b1),
   .io_pads_gpio_14_o_oval (),
   .io_pads_gpio_14_o_oe (),
   .io_pads_gpio_14_o_ie (),
   .io_pads_gpio_14_o_pue (),
   .io_pads_gpio_14_o_ds (),
   .io_pads_gpio_15_i_ival (1'b1),
   .io_pads_gpio_15_o_oval (),
   .io_pads_gpio_15_o_oe (),
   .io_pads_gpio_15_o_ie (),
   .io_pads_gpio_15_o_pue (),
   .io_pads_gpio_15_o_ds (),
   .io_pads_gpio_16_i_ival (1'b1),
   .io_pads_gpio_16_o_oval (),
   .io_pads_gpio_16_o_oe (),
   .io_pads_gpio_16_o_ie (),
   .io_pads_gpio_16_o_pue (),
   .io_pads_gpio_16_o_ds (),
   .io_pads_gpio_17_i_ival (1'b1),
   .io_pads_gpio_17_o_oval (),
   .io_pads_gpio_17_o_oe (),
   .io_pads_gpio_17_o_ie (),
   .io_pads_gpio_17_o_pue (),
   .io_pads_gpio_17_o_ds (),
   .io_pads_gpio_18_i_ival (1'b1),
   .io_pads_gpio_18_o_oval (),
   .io_pads_gpio_18_o_oe (),
   .io_pads_gpio_18_o_ie (),
   .io_pads_gpio_18_o_pue (),
   .io_pads_gpio_18_o_ds (),
   .io_pads_gpio_19_i_ival (1'b1),
   .io_pads_gpio_19_o_oval (),
   .io_pads_gpio_19_o_oe (),
   .io_pads_gpio_19_o_ie (),
   .io_pads_gpio_19_o_pue (),
   .io_pads_gpio_19_o_ds (),
   .io_pads_gpio_20_i_ival (1'b1),
   .io_pads_gpio_20_o_oval (),
   .io_pads_gpio_20_o_oe (),
   .io_pads_gpio_20_o_ie (),
   .io_pads_gpio_20_o_pue (),
   .io_pads_gpio_20_o_ds (),
   .io_pads_gpio_21_i_ival (1'b1),
   .io_pads_gpio_21_o_oval (),
   .io_pads_gpio_21_o_oe (),
   .io_pads_gpio_21_o_ie (),
   .io_pads_gpio_21_o_pue (),
   .io_pads_gpio_21_o_ds (),
   .io_pads_gpio_22_i_ival (1'b1),
   .io_pads_gpio_22_o_oval (),
   .io_pads_gpio_22_o_oe (),
   .io_pads_gpio_22_o_ie (),
   .io_pads_gpio_22_o_pue (),
   .io_pads_gpio_22_o_ds (),
   .io_pads_gpio_23_i_ival (1'b1),
   .io_pads_gpio_23_o_oval (),
   .io_pads_gpio_23_o_oe (),
   .io_pads_gpio_23_o_ie (),
   .io_pads_gpio_23_o_pue (),
   .io_pads_gpio_23_o_ds (),
   .io_pads_gpio_24_i_ival (1'b1),
   .io_pads_gpio_24_o_oval (),
   .io_pads_gpio_24_o_oe (),
   .io_pads_gpio_24_o_ie (),
   .io_pads_gpio_24_o_pue (),
   .io_pads_gpio_24_o_ds (),
   .io_pads_gpio_25_i_ival (1'b1),
   .io_pads_gpio_25_o_oval (),
   .io_pads_gpio_25_o_oe (),
   .io_pads_gpio_25_o_ie (),
   .io_pads_gpio_25_o_pue (),
   .io_pads_gpio_25_o_ds (),
   .io_pads_gpio_26_i_ival (1'b1),
   .io_pads_gpio_26_o_oval (),
   .io_pads_gpio_26_o_oe (),
   .io_pads_gpio_26_o_ie (),
   .io_pads_gpio_26_o_pue (),
   .io_pads_gpio_26_o_ds (),
   .io_pads_gpio_27_i_ival (1'b1),
   .io_pads_gpio_27_o_oval (),
   .io_pads_gpio_27_o_oe (),
   .io_pads_gpio_27_o_ie (),
   .io_pads_gpio_27_o_pue (),
   .io_pads_gpio_27_o_ds (),
   .io_pads_gpio_28_i_ival (1'b1),
   .io_pads_gpio_28_o_oval (),
   .io_pads_gpio_28_o_oe (),
   .io_pads_gpio_28_o_ie (),
   .io_pads_gpio_28_o_pue (),
   .io_pads_gpio_28_o_ds (),
   .io_pads_gpio_29_i_ival (1'b1),
   .io_pads_gpio_29_o_oval (),
   .io_pads_gpio_29_o_oe (),
   .io_pads_gpio_29_o_ie (),
   .io_pads_gpio_29_o_pue (),
   .io_pads_gpio_29_o_ds (),
   .io_pads_gpio_30_i_ival (1'b1),
   .io_pads_gpio_30_o_oval (),
   .io_pads_gpio_30_o_oe (),
   .io_pads_gpio_30_o_ie (),
   .io_pads_gpio_30_o_pue (),
   .io_pads_gpio_30_o_ds (),
   .io_pads_gpio_31_i_ival (1'b1),
   .io_pads_gpio_31_o_oval (),
   .io_pads_gpio_31_o_oe (),
   .io_pads_gpio_31_o_ie (),
   .io_pads_gpio_31_o_pue (),
   .io_pads_gpio_31_o_ds (),

   .io_pads_qspi_sck_o_oval (),
   .io_pads_qspi_dq_0_i_ival (1'b1),
   .io_pads_qspi_dq_0_o_oval (),
   .io_pads_qspi_dq_0_o_oe (),
   .io_pads_qspi_dq_0_o_ie (),
   .io_pads_qspi_dq_0_o_pue (),
   .io_pads_qspi_dq_0_o_ds (),
   .io_pads_qspi_dq_1_i_ival (1'b1),
   .io_pads_qspi_dq_1_o_oval (),
   .io_pads_qspi_dq_1_o_oe (),
   .io_pads_qspi_dq_1_o_ie (),
   .io_pads_qspi_dq_1_o_pue (),
   .io_pads_qspi_dq_1_o_ds (),
   .io_pads_qspi_dq_2_i_ival (1'b1),
   .io_pads_qspi_dq_2_o_oval (),
   .io_pads_qspi_dq_2_o_oe (),
   .io_pads_qspi_dq_2_o_ie (),
   .io_pads_qspi_dq_2_o_pue (),
   .io_pads_qspi_dq_2_o_ds (),
   .io_pads_qspi_dq_3_i_ival (1'b1),
   .io_pads_qspi_dq_3_o_oval (),
   .io_pads_qspi_dq_3_o_oe (),
   .io_pads_qspi_dq_3_o_ie (),
   .io_pads_qspi_dq_3_o_pue (),
   .io_pads_qspi_dq_3_o_ds (),
   .io_pads_qspi_cs_0_o_oval (),
   .io_pads_aon_erst_n_i_ival (rst_n),//This is the real reset, active low
   .io_pads_aon_pmu_dwakeup_n_i_ival (1'b1),

   .io_pads_aon_pmu_vddpaden_o_oval (),
    .io_pads_aon_pmu_padrst_o_oval    (),

    .io_pads_bootrom_n_i_ival       (1'b0),// In Simulation we boot from ROM
    .io_pads_dbgmode0_n_i_ival       (1'b1),
    .io_pads_dbgmode1_n_i_ival       (1'b1),
    .io_pads_dbgmode2_n_i_ival       (1'b1) 
);

endmodule
