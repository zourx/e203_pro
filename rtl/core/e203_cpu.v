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
//  The CPU module to implement Core and other top level glue logics 
//
// ====================================================================

`include "e203_defines.v"

module e203_cpu #(
    parameter MASTER = 1
)(
  output [`E203_PC_SIZE-1:0] inspect_pc,
  output inspect_dbg_irq      ,
  output inspect_mem_cmd_valid,
  output inspect_mem_cmd_ready,
  output inspect_mem_rsp_valid,
  output inspect_mem_rsp_ready,
  output inspect_core_clk          ,
  output core_csr_clk      ,
  `ifdef E203_HAS_ITCM
  output rst_itcm,
  `endif
  `ifdef E203_HAS_DTCM
  output rst_dtcm,
  `endif
  `ifdef E203_HAS_NTS
  output rst_nts,
  `endif

  output  core_wfi,
  output  tm_stop,
  
  input  [`E203_PC_SIZE-1:0] pc_rtvec,

  ///////////////////////////////////////
  // With the interface to debug module 
  //
    // The interface with commit stage
  output  [`E203_PC_SIZE-1:0] cmt_dpc,
  output  cmt_dpc_ena,

  output  [3-1:0] cmt_dcause,
  output  cmt_dcause_ena,

  output  dbg_irq_r,

    // The interface with CSR control 
  output  wr_dcsr_ena    ,
  output  wr_dpc_ena     ,
  output  wr_dscratch_ena,


  output  [32-1:0] wr_csr_nxt    ,

  input  [32-1:0] dcsr_r    ,
  input  [`E203_PC_SIZE-1:0] dpc_r     ,
  input  [32-1:0] dscratch_r,

  input  dbg_mode,
  input  dbg_halt_r,
  input  dbg_step_r,
  input  dbg_ebreakm_r,
  input  dbg_stopcycle,


  /////////////////////////////////////////////////////
  input [`E203_HART_ID_W-1:0] core_mhartid,  

  input  dbg_irq_a,
  input  ext_irq_a,
  input  sft_irq_a,
  input  tmr_irq_a,

  `ifdef E203_HAS_ITCM //{
  //input [`E203_ADDR_SIZE-1:0] itcm_region_indic,
  `endif//}

  `ifdef E203_HAS_DTCM //{
  //input [`E203_ADDR_SIZE-1:0] dtcm_region_indic,
  `endif//}

  `ifdef E203_HAS_ITCM_EXTITF //{
  //////////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////
  // External-agent ICB to ITCM
  //    * Bus cmd channel
  input                          ext2itcm_icb_cmd_valid,
  output                         ext2itcm_icb_cmd_ready,
  input  [`E203_ITCM_ADDR_WIDTH-1:0]   ext2itcm_icb_cmd_addr, 
  input                          ext2itcm_icb_cmd_read, 
  input  [`E203_XLEN-1:0]        ext2itcm_icb_cmd_wdata,
  input  [`E203_XLEN/8-1:0]      ext2itcm_icb_cmd_wmask,
  //
  //    * Bus RSP channel
  output                         ext2itcm_icb_rsp_valid,
  input                          ext2itcm_icb_rsp_ready,
  output                         ext2itcm_icb_rsp_err  ,
  output [`E203_XLEN-1:0]        ext2itcm_icb_rsp_rdata,
  `endif//}

  `ifdef E203_HAS_DTCM_EXTITF //{
  //////////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////
  // External-agent ICB to DTCM
  //    * Bus cmd channel
  input                          ext2dtcm_icb_cmd_valid,
  output                         ext2dtcm_icb_cmd_ready,
  input  [`E203_DTCM_ADDR_WIDTH-1:0]   ext2dtcm_icb_cmd_addr, 
  input                          ext2dtcm_icb_cmd_read, 
  input  [`E203_XLEN-1:0]        ext2dtcm_icb_cmd_wdata,
  input  [`E203_XLEN/8-1:0]      ext2dtcm_icb_cmd_wmask,
  //
  //    * Bus RSP channel
  output                         ext2dtcm_icb_rsp_valid,
  input                          ext2dtcm_icb_rsp_ready,
  output                         ext2dtcm_icb_rsp_err  ,
  output [`E203_XLEN-1:0]        ext2dtcm_icb_rsp_rdata,
  `endif//}


  //////////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////
  // The ICB Interface to Private Peripheral Interface
  input [`E203_ADDR_SIZE-1:0]    ppi_region_indic,
  //
  input                          ppi_icb_enable,
  //    * Bus cmd channel
  output                         ppi_icb_cmd_valid,
  input                          ppi_icb_cmd_ready,
  output [`E203_ADDR_SIZE-1:0]   ppi_icb_cmd_addr, 
  output                         ppi_icb_cmd_read, 
  output [`E203_XLEN-1:0]        ppi_icb_cmd_wdata,
  output [`E203_XLEN/8-1:0]      ppi_icb_cmd_wmask,
  output                         ppi_icb_cmd_lock,
  output                         ppi_icb_cmd_excl,
  output [1:0]                   ppi_icb_cmd_size,
  //
  //    * Bus RSP channel
  input                          ppi_icb_rsp_valid,
  output                         ppi_icb_rsp_ready,
  input                          ppi_icb_rsp_err  ,
  input                          ppi_icb_rsp_excl_ok  ,
  input  [`E203_XLEN-1:0]        ppi_icb_rsp_rdata,

  
  input [`E203_ADDR_SIZE-1:0]    clint_region_indic,
  input                          clint_icb_enable,

  output                         clint_icb_cmd_valid,
  input                          clint_icb_cmd_ready,
  output [`E203_ADDR_SIZE-1:0]   clint_icb_cmd_addr, 
  output                         clint_icb_cmd_read, 
  output [`E203_XLEN-1:0]        clint_icb_cmd_wdata,
  output [`E203_XLEN/8-1:0]      clint_icb_cmd_wmask,
  output                         clint_icb_cmd_lock,
  output                         clint_icb_cmd_excl,
  output [1:0]                   clint_icb_cmd_size,
  //
  //    * Bus RSP channel
  input                          clint_icb_rsp_valid,
  output                         clint_icb_rsp_ready,
  input                          clint_icb_rsp_err  ,
  input                          clint_icb_rsp_excl_ok  ,
  input  [`E203_XLEN-1:0]        clint_icb_rsp_rdata,

  input [`E203_ADDR_SIZE-1:0]    plic_region_indic,
  input                          plic_icb_enable,

  output                         plic_icb_cmd_valid,
  input                          plic_icb_cmd_ready,
  output [`E203_ADDR_SIZE-1:0]   plic_icb_cmd_addr, 
  output                         plic_icb_cmd_read, 
  output [`E203_XLEN-1:0]        plic_icb_cmd_wdata,
  output [`E203_XLEN/8-1:0]      plic_icb_cmd_wmask,
  output                         plic_icb_cmd_lock,
  output                         plic_icb_cmd_excl,
  output [1:0]                   plic_icb_cmd_size,
  //
  //    * Bus RSP channel
  input                          plic_icb_rsp_valid,
  output                         plic_icb_rsp_ready,
  input                          plic_icb_rsp_err  ,
  input                          plic_icb_rsp_excl_ok  ,
  input  [`E203_XLEN-1:0]        plic_icb_rsp_rdata,

  `ifdef E203_HAS_FIO //{
  //////////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////
  // The ICB Interface to Fast I/O
  input [`E203_ADDR_SIZE-1:0]    fio_region_indic,
  //
  input                          fio_icb_enable,
  //    * Bus cmd channel
  output                         fio_icb_cmd_valid,
  input                          fio_icb_cmd_ready,
  output [`E203_ADDR_SIZE-1:0]   fio_icb_cmd_addr, 
  output                         fio_icb_cmd_read, 
  output [`E203_XLEN-1:0]        fio_icb_cmd_wdata,
  output [`E203_XLEN/8-1:0]      fio_icb_cmd_wmask,
  output                         fio_icb_cmd_lock,
  output                         fio_icb_cmd_excl,
  output [1:0]                   fio_icb_cmd_size,
  //
  //    * Bus RSP channel
  input                          fio_icb_rsp_valid,
  output                         fio_icb_rsp_ready,
  input                          fio_icb_rsp_err  ,
  input                          fio_icb_rsp_excl_ok  ,
  input  [`E203_XLEN-1:0]        fio_icb_rsp_rdata,
  `endif//}

  `ifdef E203_HAS_MEM_ITF //{
  //////////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////
  // The ICB Interface from Ifetch 
  //
  input                          mem_icb_enable,
  //    * Bus cmd channel
  output                         mem_icb_cmd_valid,
  input                          mem_icb_cmd_ready,
  output [`E203_ADDR_SIZE-1:0]   mem_icb_cmd_addr, 
  output                         mem_icb_cmd_read, 
  output [`E203_XLEN-1:0]        mem_icb_cmd_wdata,
  output [`E203_XLEN/8-1:0]      mem_icb_cmd_wmask,
  output                         mem_icb_cmd_lock,
  output                         mem_icb_cmd_excl,
  output [1:0]                   mem_icb_cmd_size,
  output [1:0]                   mem_icb_cmd_burst,
  output [1:0]                   mem_icb_cmd_beat,
  //
  //    * Bus RSP channel
  input                          mem_icb_rsp_valid,
  output                         mem_icb_rsp_ready,
  input                          mem_icb_rsp_err  ,
  input                          mem_icb_rsp_excl_ok,
  input  [`E203_XLEN-1:0]        mem_icb_rsp_rdata,
  `endif//}

  `ifdef E203_HAS_ITCM//{
  output itcm_ls,

  output                         itcm_ram_cs,  
  output                         itcm_ram_we,  
  output [`E203_ITCM_RAM_AW-1:0] itcm_ram_addr, 
  output [`E203_ITCM_RAM_MW-1:0] itcm_ram_wem,
  output [`E203_ITCM_RAM_DW-1:0] itcm_ram_din,          
  input  [`E203_ITCM_RAM_DW-1:0] itcm_ram_dout,
  output                         clk_itcm_ram,
  `endif//}

  `ifdef E203_HAS_DTCM//{
  output dtcm_ls,

  output                         dtcm_ram_cs,  
  output                         dtcm_ram_we,  
  output [`E203_DTCM_RAM_AW-1:0] dtcm_ram_addr, 
  output [`E203_DTCM_RAM_MW-1:0] dtcm_ram_wem,
  output [`E203_DTCM_RAM_DW-1:0] dtcm_ram_din,          
  input  [`E203_DTCM_RAM_DW-1:0] dtcm_ram_dout,
  output                         clk_dtcm_ram,
  `endif//}

  `ifdef E203_HAS_NTS//{

  input  bftail_trap,
  output aftail_trap,
  input  nest_trap_2ntsctrl,

  input  [2:0] iq_aftrap_nplic2nts,
  output [1:0] trap_stage_nts2nplic,
  input  [1:0] trap_type2core,
  
  /// to nplic
  output                  ret2nplic,
  output [3:0]            num_trap2nplic,
  output                  nts_full_o2nplic,
  output [`E203_XLEN-1:0] x2_sp,

  /// to itcm
  input  [`E203_XLEN-1:0] mtvec_trap_data,
  output [`E203_XLEN-1:0] mtvec_trap_addr,
  output [`E203_XLEN-1:0] mtvec_trap_addr_bf,
  input  [`E203_XLEN-1:0] mtvec_trap_data_bf,
  input  [`E203_XLEN-1:0] mtvec_trap_data_af,
  output [`E203_XLEN-1:0] mtvec_trap_addr_af,
  input  [64-1:0]         ir_bf,

  output nts_ram_sd,
  output nts_ram_ds,
  output nts_ram_ls,

  output                             nts_ram_cs,  
  output                             nts_ram_we,  
  output [`E203_NTS_RAM_AW-1:0]      nts_ram_addr, 
  output [`E203_NTS_RAM_MW-1:0]      nts_ram_wem,
  output [`E203_NTS_RAM_DW-1:0]      nts_ram_din,          
  input  [`E203_NTS_RAM_DW-1:0]      nts_ram_dout,
  output                             clk_nts_ram,
  
  output                             irq_o, 
  output                             irq_ra_o, 
  input                              irq_regsave,
  output                             mret2ram,


  `endif//}

  input  test_mode,

  input  clk,
  input  rst_n

  );

  wire core_cgstop;
  wire tcm_cgstop;
  
  wire core_ifu_active;
  wire core_exu_active;
  wire core_lsu_active;
  wire core_biu_active;
  
  // The core's clk and rst
  wire rst_core;
  wire clk_core_ifu;
  wire clk_core_exu;
  wire clk_core_lsu;
  wire clk_core_biu;
  
  // The ITCM/DTCM clk and rst
  `ifdef E203_HAS_ITCM
  wire clk_itcm;
  wire itcm_active;
  `endif
  `ifdef E203_HAS_DTCM
  wire clk_dtcm;
  wire dtcm_active;
  `endif

  `ifdef E203_HAS_NTS
  wire clk_nts;
  wire nts_active;
  wire nts_ls;
  `endif

  // The Top always on clk and rst
  wire rst_aon;
  wire clk_aon;

  // The reset ctrl and clock ctrl should be in the power always-on domain

  e203_reset_ctrl #(.MASTER(MASTER)) u_e203_reset_ctrl (
    .clk        (clk_aon  ),
    .rst_n      (rst_n    ),
    .test_mode  (test_mode),

    .rst_core   (rst_core),


  `ifdef E203_HAS_ITCM
    .rst_itcm   (rst_itcm),
  `endif
  `ifdef E203_HAS_DTCM
    .rst_dtcm   (rst_dtcm),
  `endif
  `ifdef E203_HAS_NTS
    .rst_nts   (rst_nts),
  `endif

    .rst_aon   (rst_aon) 

  );



  e203_clk_ctrl u_e203_clk_ctrl(
    .clk          (clk          ),
    .rst_n        (rst_aon      ),
    .test_mode    (test_mode    ),
                                
    .clk_aon      (clk_aon      ),

    .core_cgstop   (core_cgstop),
    


    .clk_core_ifu (clk_core_ifu      ),
    .clk_core_exu (clk_core_exu      ),
    .clk_core_lsu (clk_core_lsu      ),
    .clk_core_biu (clk_core_biu      ),
  `ifdef E203_HAS_ITCM
    .clk_itcm     (clk_itcm     ),
    .itcm_active  (itcm_active),
    .itcm_ls      (itcm_ls    ),
  `endif
  `ifdef E203_HAS_DTCM
    .clk_dtcm     (clk_dtcm     ),
    .dtcm_active  (dtcm_active),
    .dtcm_ls      (dtcm_ls    ),
  `endif

  `ifdef E203_HAS_NTS
    .clk_nts     (clk_nts     ),
    .nts_active  (nts_active),
    .nts_ls      (nts_ls    ),
  `endif

    .core_ifu_active(core_ifu_active),
    .core_exu_active(core_exu_active),
    .core_lsu_active(core_lsu_active),
    .core_biu_active(core_biu_active),
    .core_wfi     (core_wfi ) 
  );

  wire ext_irq_r;
  wire sft_irq_r;
  wire tmr_irq_r;

  e203_irq_sync  #(.MASTER(MASTER)) u_e203_irq_sync(
    .clk       (clk_aon  ),
    .rst_n     (rst_aon  ),
                         

    .dbg_irq_a (dbg_irq_a),
    .dbg_irq_r (dbg_irq_r),

    .ext_irq_a   (ext_irq_a),
    .sft_irq_a   (sft_irq_a),
    .tmr_irq_a   (tmr_irq_a),
    .ext_irq_r   (ext_irq_r),
    .sft_irq_r   (sft_irq_r),
    .tmr_irq_r   (tmr_irq_r) 
  );



  `ifdef E203_HAS_ITCM //{
  wire ifu2itcm_holdup;
  //wire ifu2itcm_replay;

  wire ifu2itcm_icb_cmd_valid;
  wire ifu2itcm_icb_cmd_ready;
  wire [`E203_ITCM_ADDR_WIDTH-1:0]   ifu2itcm_icb_cmd_addr;

  wire ifu2itcm_icb_rsp_valid;
  wire ifu2itcm_icb_rsp_ready;
  wire ifu2itcm_icb_rsp_err;
  wire [`E203_ITCM_DATA_WIDTH-1:0] ifu2itcm_icb_rsp_rdata; 

  wire                         lsu2itcm_icb_cmd_valid;
  wire                         lsu2itcm_icb_cmd_ready;
  wire [`E203_ITCM_ADDR_WIDTH-1:0]   lsu2itcm_icb_cmd_addr; 
  wire                         lsu2itcm_icb_cmd_read; 
  wire [`E203_XLEN-1:0]        lsu2itcm_icb_cmd_wdata;
  wire [`E203_XLEN/8-1:0]      lsu2itcm_icb_cmd_wmask;
  wire                         lsu2itcm_icb_cmd_lock;
  wire                         lsu2itcm_icb_cmd_excl;
  wire [1:0]                   lsu2itcm_icb_cmd_size;
  wire                         lsu2itcm_icb_rsp_valid;
  wire                         lsu2itcm_icb_rsp_ready;
  wire                         lsu2itcm_icb_rsp_err  ;
  wire [`E203_XLEN-1:0]        lsu2itcm_icb_rsp_rdata;
  `endif//}

  `ifdef E203_HAS_DTCM //{
  wire                               lsu2dtcm_icb_cmd_valid;
  wire                               lsu2dtcm_icb_cmd_ready;
  wire [`E203_DTCM_ADDR_WIDTH-1:0]   lsu2dtcm_icb_cmd_addr; 
  wire                               lsu2dtcm_icb_cmd_read; 
  wire [`E203_XLEN-1:0]              lsu2dtcm_icb_cmd_wdata;
  wire [`E203_XLEN/8-1:0]            lsu2dtcm_icb_cmd_wmask;
  wire                               lsu2dtcm_icb_cmd_lock;
  wire                               lsu2dtcm_icb_cmd_excl;
  wire [1:0]                         lsu2dtcm_icb_cmd_size;
  wire                               lsu2dtcm_icb_rsp_valid;
  wire                               lsu2dtcm_icb_rsp_ready;
  wire                               lsu2dtcm_icb_rsp_err  ;
  wire [`E203_XLEN-1:0]              lsu2dtcm_icb_rsp_rdata;
  `endif//}

  `ifdef E203_HAS_CSR_EAI//{
  wire         eai_csr_valid;
  wire         eai_csr_ready;
  wire  [31:0] eai_csr_addr;
  wire         eai_csr_wr;
  wire  [31:0] eai_csr_wdata;
  wire  [31:0] eai_csr_rdata;

  // This is an empty module to just connect the EAI CSR interface, 
  //  user can hack it to become a real one
  e203_extend_csr u_e203_extend_csr(
    .eai_csr_valid (eai_csr_valid),
    .eai_csr_ready (eai_csr_ready),
    .eai_csr_addr  (eai_csr_addr ),
    .eai_csr_wr    (eai_csr_wr   ),
    .eai_csr_wdata (eai_csr_wdata),
    .eai_csr_rdata (eai_csr_rdata),
    .clk           (clk_core_exu ),
    .rst_n         (rst_core ) 
   );
  `endif//}

 

  e203_core u_e203_core(
    .inspect_pc            (inspect_pc),


  `ifdef E203_HAS_CSR_EAI//{
    .eai_csr_valid (eai_csr_valid),
    .eai_csr_ready (eai_csr_ready),
    .eai_csr_addr  (eai_csr_addr ),
    .eai_csr_wr    (eai_csr_wr   ),
    .eai_csr_wdata (eai_csr_wdata),
    .eai_csr_rdata (eai_csr_rdata),
  `endif//}
    .tcm_cgstop              (tcm_cgstop),
    .core_cgstop             (core_cgstop),
    .tm_stop                 (tm_stop),

    .pc_rtvec                (pc_rtvec),

    .ifu_active              (core_ifu_active),
    .exu_active              (core_exu_active),
    .lsu_active              (core_lsu_active),
    .biu_active              (core_biu_active),
    .core_wfi                (core_wfi),

    .core_mhartid            (core_mhartid),  
    .dbg_irq_r               (dbg_irq_r),
    .lcl_irq_r               (`E203_LIRQ_NUM'b0),// Not implemented now
    .ext_irq_r               (ext_irq_r),
    .sft_irq_r               (sft_irq_r),
    .tmr_irq_r               (tmr_irq_r),
    .evt_r                   (`E203_EVT_NUM'b0),// Not implemented now

    .cmt_dpc                 (cmt_dpc        ),
    .cmt_dpc_ena             (cmt_dpc_ena    ),
    .cmt_dcause              (cmt_dcause     ),
    .cmt_dcause_ena          (cmt_dcause_ena ),

    .wr_dcsr_ena     (wr_dcsr_ena    ),
    .wr_dpc_ena      (wr_dpc_ena     ),
    .wr_dscratch_ena (wr_dscratch_ena),


                                     
    .wr_csr_nxt      (wr_csr_nxt    ),
                                     
    .dcsr_r          (dcsr_r         ),
    .dpc_r           (dpc_r          ),
    .dscratch_r      (dscratch_r     ),
                                             
    .dbg_mode                (dbg_mode       ),
    .dbg_halt_r              (dbg_halt_r     ),
    .dbg_step_r              (dbg_step_r     ),
    .dbg_ebreakm_r           (dbg_ebreakm_r),
    .dbg_stopcycle           (dbg_stopcycle),

  `ifdef E203_HAS_ITCM //{
    //.itcm_region_indic       (itcm_region_indic),
    .itcm_region_indic       (`E203_ITCM_ADDR_BASE),
  `endif//}
   `ifdef E203_HAS_DTCM //{
    //.dtcm_region_indic       (dtcm_region_indic),
    .dtcm_region_indic       (`E203_DTCM_ADDR_BASE),
  `endif//}

  `ifdef E203_HAS_ITCM //{

    .ifu2itcm_holdup         (ifu2itcm_holdup       ),
    //.ifu2itcm_replay         (ifu2itcm_replay       ),

    .ifu2itcm_icb_cmd_valid  (ifu2itcm_icb_cmd_valid),
    .ifu2itcm_icb_cmd_ready  (ifu2itcm_icb_cmd_ready),
    .ifu2itcm_icb_cmd_addr   (ifu2itcm_icb_cmd_addr ),
    .ifu2itcm_icb_rsp_valid  (ifu2itcm_icb_rsp_valid),
    .ifu2itcm_icb_rsp_ready  (ifu2itcm_icb_rsp_ready),
    .ifu2itcm_icb_rsp_err    (ifu2itcm_icb_rsp_err  ),
    .ifu2itcm_icb_rsp_rdata  (ifu2itcm_icb_rsp_rdata),

    .lsu2itcm_icb_cmd_valid  (lsu2itcm_icb_cmd_valid),
    .lsu2itcm_icb_cmd_ready  (lsu2itcm_icb_cmd_ready),
    .lsu2itcm_icb_cmd_addr   (lsu2itcm_icb_cmd_addr ),
    .lsu2itcm_icb_cmd_read   (lsu2itcm_icb_cmd_read ),
    .lsu2itcm_icb_cmd_wdata  (lsu2itcm_icb_cmd_wdata),
    .lsu2itcm_icb_cmd_wmask  (lsu2itcm_icb_cmd_wmask),
    .lsu2itcm_icb_cmd_lock   (lsu2itcm_icb_cmd_lock ),
    .lsu2itcm_icb_cmd_excl   (lsu2itcm_icb_cmd_excl ),
    .lsu2itcm_icb_cmd_size   (lsu2itcm_icb_cmd_size ),
    
    .lsu2itcm_icb_rsp_valid  (lsu2itcm_icb_rsp_valid),
    .lsu2itcm_icb_rsp_ready  (lsu2itcm_icb_rsp_ready),
    .lsu2itcm_icb_rsp_err    (lsu2itcm_icb_rsp_err  ),
    .lsu2itcm_icb_rsp_excl_ok(1'b0),
    .lsu2itcm_icb_rsp_rdata  (lsu2itcm_icb_rsp_rdata),

  `endif//}

  `ifdef E203_HAS_DTCM //{

    .lsu2dtcm_icb_cmd_valid  (lsu2dtcm_icb_cmd_valid),
    .lsu2dtcm_icb_cmd_ready  (lsu2dtcm_icb_cmd_ready),
    .lsu2dtcm_icb_cmd_addr   (lsu2dtcm_icb_cmd_addr ),
    .lsu2dtcm_icb_cmd_read   (lsu2dtcm_icb_cmd_read ),
    .lsu2dtcm_icb_cmd_wdata  (lsu2dtcm_icb_cmd_wdata),
    .lsu2dtcm_icb_cmd_wmask  (lsu2dtcm_icb_cmd_wmask),
    .lsu2dtcm_icb_cmd_lock   (lsu2dtcm_icb_cmd_lock ),
    .lsu2dtcm_icb_cmd_excl   (lsu2dtcm_icb_cmd_excl ),
    .lsu2dtcm_icb_cmd_size   (lsu2dtcm_icb_cmd_size ),
    
    .lsu2dtcm_icb_rsp_valid  (lsu2dtcm_icb_rsp_valid),
    .lsu2dtcm_icb_rsp_ready  (lsu2dtcm_icb_rsp_ready),
    .lsu2dtcm_icb_rsp_err    (lsu2dtcm_icb_rsp_err  ),
    .lsu2dtcm_icb_rsp_excl_ok(1'b0),
    .lsu2dtcm_icb_rsp_rdata  (lsu2dtcm_icb_rsp_rdata),

  `endif//}


  
    .ppi_icb_enable        (ppi_icb_enable),
    .ppi_region_indic      (ppi_region_indic ),
    .ppi_icb_cmd_valid     (ppi_icb_cmd_valid),
    .ppi_icb_cmd_ready     (ppi_icb_cmd_ready),
    .ppi_icb_cmd_addr      (ppi_icb_cmd_addr ),
    .ppi_icb_cmd_read      (ppi_icb_cmd_read ),
    .ppi_icb_cmd_wdata     (ppi_icb_cmd_wdata),
    .ppi_icb_cmd_wmask     (ppi_icb_cmd_wmask),
    .ppi_icb_cmd_lock      (ppi_icb_cmd_lock ),
    .ppi_icb_cmd_excl      (ppi_icb_cmd_excl ),
    .ppi_icb_cmd_size      (ppi_icb_cmd_size ),
    
    .ppi_icb_rsp_valid     (ppi_icb_rsp_valid),
    .ppi_icb_rsp_ready     (ppi_icb_rsp_ready),
    .ppi_icb_rsp_err       (ppi_icb_rsp_err  ),
    .ppi_icb_rsp_excl_ok   (ppi_icb_rsp_excl_ok),
    .ppi_icb_rsp_rdata     (ppi_icb_rsp_rdata),

    .plic_icb_enable        (plic_icb_enable),
    .plic_region_indic      (plic_region_indic ),
    .plic_icb_cmd_valid     (plic_icb_cmd_valid),
    .plic_icb_cmd_ready     (plic_icb_cmd_ready),
    .plic_icb_cmd_addr      (plic_icb_cmd_addr ),
    .plic_icb_cmd_read      (plic_icb_cmd_read ),
    .plic_icb_cmd_wdata     (plic_icb_cmd_wdata),
    .plic_icb_cmd_wmask     (plic_icb_cmd_wmask),
    .plic_icb_cmd_lock      (plic_icb_cmd_lock ),
    .plic_icb_cmd_excl      (plic_icb_cmd_excl ),
    .plic_icb_cmd_size      (plic_icb_cmd_size ),
    
    .plic_icb_rsp_valid     (plic_icb_rsp_valid),
    .plic_icb_rsp_ready     (plic_icb_rsp_ready),
    .plic_icb_rsp_err       (plic_icb_rsp_err  ),
    .plic_icb_rsp_excl_ok   (plic_icb_rsp_excl_ok),
    .plic_icb_rsp_rdata     (plic_icb_rsp_rdata),

    .clint_icb_enable        (clint_icb_enable),
    .clint_region_indic      (clint_region_indic ),
    .clint_icb_cmd_valid     (clint_icb_cmd_valid),
    .clint_icb_cmd_ready     (clint_icb_cmd_ready),
    .clint_icb_cmd_addr      (clint_icb_cmd_addr ),
    .clint_icb_cmd_read      (clint_icb_cmd_read ),
    .clint_icb_cmd_wdata     (clint_icb_cmd_wdata),
    .clint_icb_cmd_wmask     (clint_icb_cmd_wmask),
    .clint_icb_cmd_lock      (clint_icb_cmd_lock ),
    .clint_icb_cmd_excl      (clint_icb_cmd_excl ),
    .clint_icb_cmd_size      (clint_icb_cmd_size ),
    
    .clint_icb_rsp_valid     (clint_icb_rsp_valid),
    .clint_icb_rsp_ready     (clint_icb_rsp_ready),
    .clint_icb_rsp_err       (clint_icb_rsp_err  ),
    .clint_icb_rsp_excl_ok   (clint_icb_rsp_excl_ok),
    .clint_icb_rsp_rdata     (clint_icb_rsp_rdata),

  `ifdef E203_HAS_FIO //{
    .fio_icb_enable        (fio_icb_enable),
    .fio_region_indic      (fio_region_indic ),
    .fio_icb_cmd_valid     (fio_icb_cmd_valid),
    .fio_icb_cmd_ready     (fio_icb_cmd_ready),
    .fio_icb_cmd_addr      (fio_icb_cmd_addr ),
    .fio_icb_cmd_read      (fio_icb_cmd_read ),
    .fio_icb_cmd_wdata     (fio_icb_cmd_wdata),
    .fio_icb_cmd_wmask     (fio_icb_cmd_wmask),
    .fio_icb_cmd_lock      (fio_icb_cmd_lock ),
    .fio_icb_cmd_excl      (fio_icb_cmd_excl ),
    .fio_icb_cmd_size      (fio_icb_cmd_size ),
    
    .fio_icb_rsp_valid     (fio_icb_rsp_valid),
    .fio_icb_rsp_ready     (fio_icb_rsp_ready),
    .fio_icb_rsp_err       (fio_icb_rsp_err  ),
    .fio_icb_rsp_excl_ok   (fio_icb_rsp_excl_ok),
    .fio_icb_rsp_rdata     (fio_icb_rsp_rdata),
  `endif//}

  `ifdef E203_HAS_MEM_ITF //{
    .mem_icb_enable     (mem_icb_enable),
    .mem_icb_cmd_valid  (mem_icb_cmd_valid),
    .mem_icb_cmd_ready  (mem_icb_cmd_ready),
    .mem_icb_cmd_addr   (mem_icb_cmd_addr ),
    .mem_icb_cmd_read   (mem_icb_cmd_read ),
    .mem_icb_cmd_wdata  (mem_icb_cmd_wdata),
    .mem_icb_cmd_wmask  (mem_icb_cmd_wmask),
    .mem_icb_cmd_lock   (mem_icb_cmd_lock ),
    .mem_icb_cmd_excl   (mem_icb_cmd_excl ),
    .mem_icb_cmd_size   (mem_icb_cmd_size ),
    .mem_icb_cmd_burst  (mem_icb_cmd_burst ),
    .mem_icb_cmd_beat   (mem_icb_cmd_beat ),
    
    .mem_icb_rsp_valid  (mem_icb_rsp_valid),
    .mem_icb_rsp_ready  (mem_icb_rsp_ready),
    .mem_icb_rsp_err    (mem_icb_rsp_err  ),
    .mem_icb_rsp_excl_ok(mem_icb_rsp_excl_ok  ),
    .mem_icb_rsp_rdata  (mem_icb_rsp_rdata),
  `endif//}

    .clk_aon           (clk_aon           ),
    .clk_core_ifu      (clk_core_ifu      ),
    .clk_core_exu      (clk_core_exu      ),
    .clk_core_lsu      (clk_core_lsu      ),
    .clk_core_biu      (clk_core_biu      ),
    .test_mode         (test_mode),
    .rst_n             (rst_core ),

/////////////////////////////////////////////////////////////////
/// core module
    .trap_type2core     (trap_type2core  ),

/// alu_cmt_mret to nts_ctrl
/// mret to csr
    .alu_cmt_mret       (alu_cmt_mret),
    .mret               (mret),

  /// nts_ctrl to core (excp .iftch .csr)
    .aftail_trap        (af_trap  ),
    .iq_aftrap          (iq_aftrap), 

  /// nplic to core (excp .iftch .csr)
    .bftail_trap        (bftail_trap),


  /// to itcm
    .ir_bf              (ir_bf             ),
    .mtvec_trap_data    (mtvec_trap_data   ),
    .mtvec_trap_data_bf (mtvec_trap_data_bf),
    .mtvec_trap_data_af (mtvec_trap_data_af),
    .mtvec_trap_addr    (mtvec_trap_addr   ),
    .mtvec_trap_addr_bf (mtvec_trap_addr_bf),
    .mtvec_trap_addr_af (mtvec_trap_addr_af),

  /// from nts_ctrl to regfile
    .irq_i              (irq_o     ),
    .trap_stage4nts     (trap_stage),

    .ram_data1_i2reg    (ram_data1_o2reg),
    .ram_data2_i2reg    (ram_data2_o2reg),
    .ram_data3_i2reg    (ram_data3_o2reg),
    .ram_data4_i2reg    (ram_data4_o2reg),
    .irq_ra_i           (irq_ra         ),

  /// from regfile to nts_ctrl
    .regfile_data1_o    (regfile_data1_i),
    .regfile_data2_o    (regfile_data2_i),
    .regfile_data3_o    (regfile_data3_i),
    .regfile_data4_o    (regfile_data4_i),
    .save_2ram          (save_2ram      ),

  /// from csr to nts_ctrl
    .mcause_o           (mcause_csr2nts ),
    .mepc_o             (mepc_csr2nts   ),
    .mtval_o            (mtval_csr2nts  ),
    .mstatus_o          (mstatus_csr2nts),
    .mieisop            (mieisop        ),
    .status_mie_r       (status_mie_r   ),
  /// from nts_ctrl to csr
    .mcause_i           (mcause_nts2csr ),
    .mepc_i             (mepc_nts2csr   ),
    .mtval_i            (mtval_nts2csr  ),
    .mstatus_i          (mstatus_nts2csr),

    .nts_is_full        (nts_is_full),
    .nts_regsave        (nts_regsave),
    .save_reg           (save_reg   ),

  /// from exu_excp to nts_ctrl
    .irq_en_pass        (irq_en_pass),

  /// from nts_ctrl to ifu_ifetch
    .cls_mpc            (cls_mpc),

  /// from ifu_ifetch to nts_ctrl
    .wait_isring        (wait_isring),
    .isr_o              (isr_i      ),
    .ret_o              (ret_i      ),
    .mret_req           (mret_req   ),

  /// to nplic
    .x2_sp(x2_sp),

  /// ram to regfile
    .irq_regsave        (irq_regsave)

  );

assign trap_stage_nts2nplic = trap_stage;

wire [1:0]trap_stage;
wire [(`E203_RFREG_NUM*4)-1:0] ram_data1_o2reg;
wire [(`E203_RFREG_NUM*4)-1:0] ram_data2_o2reg;
wire [(`E203_RFREG_NUM*4)-1:0] ram_data3_o2reg;
wire [(`E203_RFREG_NUM*4)-1:0] ram_data4_o2reg;

wire [(`E203_RFREG_NUM*4)-1:0] regfile_data1_i;
wire [(`E203_RFREG_NUM*4)-1:0] regfile_data2_i;
wire [(`E203_RFREG_NUM*4)-1:0] regfile_data3_i;
wire [(`E203_RFREG_NUM*4)-1:0] regfile_data4_i;

wire mcause_i;
wire mepc_i;
wire mtval_i;
wire mstatus_i;
wire mieisop;

wire mcause_o;
wire mepc_o;
wire mtval_o;
wire mstatus_o;

wire   nts_is_full;
assign nts_full_o2nplic = nts_is_full;

wire   irq_ra;
assign irq_ra_o = irq_ra;

//wire clsmie_mret;
wire nts_regsave;
wire save_reg;
wire irq_en_pass;
wire                  cls_mpc;

wire isr_i;
wire ret_i;

////////////////////*************************************/////////////////////


  `ifdef E203_HAS_ITCM //{
  e203_itcm_ctrl u_e203_itcm_ctrl(
    .tcm_cgstop   (tcm_cgstop),

    .itcm_active  (itcm_active),

    .ifu2itcm_icb_cmd_valid  (ifu2itcm_icb_cmd_valid),
    .ifu2itcm_icb_cmd_ready  (ifu2itcm_icb_cmd_ready),
    .ifu2itcm_icb_cmd_addr   (ifu2itcm_icb_cmd_addr ),
    .ifu2itcm_icb_cmd_read   (1'b1 ),
    .ifu2itcm_icb_cmd_wdata  ({`E203_ITCM_DATA_WIDTH{1'b0}}),
    .ifu2itcm_icb_cmd_wmask  ({`E203_ITCM_DATA_WIDTH/8{1'b0}}),

    .ifu2itcm_icb_rsp_valid  (ifu2itcm_icb_rsp_valid),
    .ifu2itcm_icb_rsp_ready  (ifu2itcm_icb_rsp_ready),
    .ifu2itcm_icb_rsp_err    (ifu2itcm_icb_rsp_err  ),
    .ifu2itcm_icb_rsp_rdata  (ifu2itcm_icb_rsp_rdata),

    .ifu2itcm_holdup         (ifu2itcm_holdup       ),
    //.ifu2itcm_replay         (ifu2itcm_replay       ),

    .lsu2itcm_icb_cmd_valid  (lsu2itcm_icb_cmd_valid),
    .lsu2itcm_icb_cmd_ready  (lsu2itcm_icb_cmd_ready),
    .lsu2itcm_icb_cmd_addr   (lsu2itcm_icb_cmd_addr ),
    .lsu2itcm_icb_cmd_read   (lsu2itcm_icb_cmd_read ),
    .lsu2itcm_icb_cmd_wdata  (lsu2itcm_icb_cmd_wdata),
    .lsu2itcm_icb_cmd_wmask  (lsu2itcm_icb_cmd_wmask),
    
    .lsu2itcm_icb_rsp_valid  (lsu2itcm_icb_rsp_valid),
    .lsu2itcm_icb_rsp_ready  (lsu2itcm_icb_rsp_ready),
    .lsu2itcm_icb_rsp_err    (lsu2itcm_icb_rsp_err  ),
    .lsu2itcm_icb_rsp_rdata  (lsu2itcm_icb_rsp_rdata),

    .itcm_ram_cs             (itcm_ram_cs  ),
    .itcm_ram_we             (itcm_ram_we  ),
    .itcm_ram_addr           (itcm_ram_addr), 
    .itcm_ram_wem            (itcm_ram_wem ),
    .itcm_ram_din            (itcm_ram_din ),         
    .itcm_ram_dout           (itcm_ram_dout),
    .clk_itcm_ram            (clk_itcm_ram ),

  `ifdef E203_HAS_ITCM_EXTITF //{
    .ext2itcm_icb_cmd_valid  (ext2itcm_icb_cmd_valid),
    .ext2itcm_icb_cmd_ready  (ext2itcm_icb_cmd_ready),
    .ext2itcm_icb_cmd_addr   (ext2itcm_icb_cmd_addr ),
    .ext2itcm_icb_cmd_read   (ext2itcm_icb_cmd_read ),
    .ext2itcm_icb_cmd_wdata  (ext2itcm_icb_cmd_wdata),
    .ext2itcm_icb_cmd_wmask  (ext2itcm_icb_cmd_wmask),
    
    .ext2itcm_icb_rsp_valid  (ext2itcm_icb_rsp_valid),
    .ext2itcm_icb_rsp_ready  (ext2itcm_icb_rsp_ready),
    .ext2itcm_icb_rsp_err    (ext2itcm_icb_rsp_err  ),
    .ext2itcm_icb_rsp_rdata  (ext2itcm_icb_rsp_rdata),
  `endif//}

    .test_mode               (test_mode),
    .clk                     (clk_itcm),
    .rst_n                   (rst_itcm) 
  );
  `endif//}

  `ifdef E203_HAS_DTCM //{
  e203_dtcm_ctrl u_e203_dtcm_ctrl(
    .tcm_cgstop   (tcm_cgstop),

    .dtcm_active  (dtcm_active),

    .lsu2dtcm_icb_cmd_valid  (lsu2dtcm_icb_cmd_valid),
    .lsu2dtcm_icb_cmd_ready  (lsu2dtcm_icb_cmd_ready),
    .lsu2dtcm_icb_cmd_addr   (lsu2dtcm_icb_cmd_addr ),
    .lsu2dtcm_icb_cmd_read   (lsu2dtcm_icb_cmd_read ),
    .lsu2dtcm_icb_cmd_wdata  (lsu2dtcm_icb_cmd_wdata),
    .lsu2dtcm_icb_cmd_wmask  (lsu2dtcm_icb_cmd_wmask),
    
    .lsu2dtcm_icb_rsp_valid  (lsu2dtcm_icb_rsp_valid),
    .lsu2dtcm_icb_rsp_ready  (lsu2dtcm_icb_rsp_ready),
    .lsu2dtcm_icb_rsp_err    (lsu2dtcm_icb_rsp_err  ),
    .lsu2dtcm_icb_rsp_rdata  (lsu2dtcm_icb_rsp_rdata),

    .dtcm_ram_cs             (dtcm_ram_cs  ),
    .dtcm_ram_we             (dtcm_ram_we  ),
    .dtcm_ram_addr           (dtcm_ram_addr), 
    .dtcm_ram_wem            (dtcm_ram_wem ),
    .dtcm_ram_din            (dtcm_ram_din ),         
    .dtcm_ram_dout           (dtcm_ram_dout),
    .clk_dtcm_ram            (clk_dtcm_ram ),

  `ifdef E203_HAS_DTCM_EXTITF //{
    .ext2dtcm_icb_cmd_valid  (ext2dtcm_icb_cmd_valid),
    .ext2dtcm_icb_cmd_ready  (ext2dtcm_icb_cmd_ready),
    .ext2dtcm_icb_cmd_addr   (ext2dtcm_icb_cmd_addr ),
    .ext2dtcm_icb_cmd_read   (ext2dtcm_icb_cmd_read ),
    .ext2dtcm_icb_cmd_wdata  (ext2dtcm_icb_cmd_wdata),
    .ext2dtcm_icb_cmd_wmask  (ext2dtcm_icb_cmd_wmask),
    
    .ext2dtcm_icb_rsp_valid  (ext2dtcm_icb_rsp_valid),
    .ext2dtcm_icb_rsp_ready  (ext2dtcm_icb_rsp_ready),
    .ext2dtcm_icb_rsp_err    (ext2dtcm_icb_rsp_err  ),
    .ext2dtcm_icb_rsp_rdata  (ext2dtcm_icb_rsp_rdata),
  `endif//}

    .test_mode               (test_mode),
    .clk                     (clk_dtcm),
    .rst_n                   (rst_dtcm) 
  );
  `endif//}



wire [`E203_XLEN-1:0] mcause_csr2nts ;
wire [`E203_XLEN-1:0] mepc_csr2nts   ;
wire [`E203_XLEN-1:0] mtval_csr2nts  ;
wire [`E203_XLEN-1:0] mstatus_csr2nts;

wire [`E203_XLEN-1:0] mcause_nts2csr;
wire [`E203_XLEN-1:0] mepc_nts2csr;
wire [`E203_XLEN-1:0] mtval_nts2csr;
wire [`E203_XLEN-1:0] mstatus_nts2csr;
wire                  wait_isring;
wire                  save_2ram;
wire                  status_mie_r;
wire                  mret_req;
wire                  af_trap;
wire [2:0]            iq_aftrap;
wire                  af_trap = aftail_trap;
wire                  alu_cmt_mret;
wire                  mret;

assign mret2ram   = mret;

  `ifdef E203_HAS_NTS
  e203_nts_ctrl u_e203_nts_ctrl(
  
    .nest_trap_2ntsctrl (nest_trap_2ntsctrl),

    .bftail_trap        (bftail_trap),

  /// mret input
    .alu_cmt_mret       (alu_cmt_mret),
    .mret               (mret),
  
  /// to core (excp .iftch .csr .nplic)
    .aftail_trap(aftail_trap),
    .iq_aftrap(iq_aftrap), 

  /// from ifu_ifetch
    .wait_isring(wait_isring),
    .mret_req(mret_req),
  
  /// to regfile
    .irq_o(irq_o),
    .trap_stage4nts(trap_stage),

    .ram_data1_o2reg(ram_data1_o2reg),
    .ram_data2_o2reg(ram_data2_o2reg),
    .ram_data3_o2reg(ram_data3_o2reg),
    .ram_data4_o2reg(ram_data4_o2reg),
    .irq_ra_o       (irq_ra),
  
  /// from regfile
    .regfile_data1_i(regfile_data1_i),
    .regfile_data2_i(regfile_data2_i),
    .regfile_data3_i(regfile_data3_i),
    .regfile_data4_i(regfile_data4_i),
    .save_2ram(save_2ram),
  
  /// from csr
    .mcause_i (mcause_csr2nts),
    .mepc_i   (mepc_csr2nts),
    .mtval_i  (mtval_csr2nts),
    .mstatus_i(mstatus_csr2nts),
    .mieisop  (mieisop),
    .status_mie_r(status_mie_r),
  
  /// to csr
    .mcause_o(mcause_nts2csr),
    .mepc_o(mepc_nts2csr),
    .mtval_o(mtval_nts2csr),
    .mstatus_o(mstatus_nts2csr),

    .nts_is_full(nts_is_full),
    .nts_regsave(nts_regsave),
    .save_reg(save_reg),
  
  /// from exu_excp
    .irq_en_pass(irq_en_pass),
    .cls_mpc(cls_mpc),
  
  /// from ifu -> ifu_ifetch
    .isr_i(isr_i),
    .ret_i(ret_i),

  /// from nplic
    .ext_irq_r(ext_irq_r),
    .sft_irq_r(sft_irq_r),
    .tmr_irq_r(tmr_irq_r),
    .iq_aftrap_nplic2nts(iq_aftrap_nplic2nts),
  /// to nplic
    .ret2nplic                 (ret2nplic),
    .num_trap2nplic            (num_trap2nplic),
  /// nts_ram
    .nts_ram_cs             (nts_ram_cs  ),
    .nts_ram_we             (nts_ram_we  ),
    .nts_ram_addr           (nts_ram_addr), 
    .nts_ram_wem            (nts_ram_wem ),
    .nts_ram_din            (nts_ram_din ),         
    .nts_ram_dout           (nts_ram_dout),
    .clk_nts_ram            (clk_nts_ram ),
    .irq_regsave            (irq_regsave ),

/// to clk_ctrl
    .trap_active            (nts_active),
    .test_mode              (test_mode),
    .clk                    (clk_core_ifu),
    .rst_n                  (rst_core) 
  );
  `endif

  assign inspect_dbg_irq       = dbg_irq_a;
  assign inspect_mem_cmd_valid = mem_icb_cmd_valid;
  assign inspect_mem_cmd_ready = mem_icb_cmd_ready;
  assign inspect_mem_rsp_valid = mem_icb_rsp_valid;
  assign inspect_mem_rsp_ready = mem_icb_rsp_ready;
  assign inspect_core_clk   = clk;
  assign core_csr_clk       = clk_core_exu;

endmodule
