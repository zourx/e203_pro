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
//  This is the hand-coded version of PLIC to replace the chisel generated one
//
// ====================================================================

module sirv_plic_man # (
    parameter PLIC_PRIO_WIDTH   = 3 ,  // 指定 PLIC 中優先級的位寬 預設為 3 所以支援優先級有 2^3 = 8 級
    parameter PLIC_IRQ_NUM      = 13,  // Must larger than 1, if just 1 interrupt, please go without PLIC // 支援中斷數目
    parameter PLIC_IRQ_NUM_LOG2 = 4 ,  //  If the irq is 1<N<=2, then log2 value is 1;               // 每個中斷源需要編碼計算
                                       //  If the irq is 2<N<=4, then log2 value is 2;
                                       //  If the irq is 4<N<=8, then log2 value is 3;
                                       //  ....etc
                                       //  We at most support 10 levels, then 1024 interrupt sources
                                       //  But the source 0 is just always tied to zero
                                    
    parameter PLIC_ICB_RSP_FLOP = 0,   // Do we flop the ICB response channel to easy timing
    parameter PLIC_IRQ_I_FLOP   = 0,   // Do we flop the input interrupts from sources
    parameter PLIC_IRQ_O_FLOP   = 0    // Do we flop the output interrupt to the Core target
)(
  input   clk,
  input   rst_n,

  input                      icb_cmd_valid,         // 從 Core 向 PLIC 發送讀寫的請求
  output                     icb_cmd_ready,         // 從 PLIC 向 Core 返回讀寫請求的接受
  input  [24-1:0]            icb_cmd_addr ,         // 24 bit 的讀寫地址
  input                      icb_cmd_read ,         // 讀操作或寫操作
  input  [32-1:0]            icb_cmd_wdata,         // 表示寫操作時要寫入的資料
  
  output                     icb_rsp_valid,         // 從 PLIC 向 Core 發送讀寫返回的請求
  input                      icb_rsp_ready,         // 從 Core 向 PLIC 返回讀寫請求的接受
  output [32-1:0]            icb_rsp_rdata,         // 表示讀操作時讀取的資料

  input  [PLIC_IRQ_NUM-1:0]  plic_irq_i,            // 表示來自不同來源的中斷信號
  output                     plic_irq_o,            // 表示 Core 需要處理的優先級最高的中斷信號

/// nts
  output [2:0] iq_aftrap_nplic2nts,                 // after trap , trap type
  input        saveregdone_2nplic,                  // save csr and reg done
  input  [1:0] trap_stage_nts2nplic,                // trap in core or ISR or not
  output [1:0] trap_type2core,                      // trap is extern or software or time

  output       bftail_trap,                         // before trap happen
  input        aftail_trap,                         // after  trap happen
  output       nest_trap_2ntsctrl,                  // nest   trap happen

/// to nplic
  input                   ret2nplic,
  input  [3:0]            num_trap2nplic,
  input                   nts_full_o2nplic,
  input  [`E203_XLEN-1:0] x2_sp,

/// clint
  input                          tm_stop,
  input                          clint_icb_cmd_valid,
  output                         clint_icb_cmd_ready,
  input  [`E203_ADDR_SIZE-1:0]   clint_icb_cmd_addr, 
  input                          clint_icb_cmd_read, 
  input  [`E203_XLEN-1:0]        clint_icb_cmd_wdata,
  input  [`E203_XLEN/8-1:0]      clint_icb_cmd_wmask,

  output                         clint_icb_rsp_valid,
  input                          clint_icb_rsp_ready,
  output                         clint_icb_rsp_err,
  output [`E203_XLEN-1:0]        clint_icb_rsp_rdata,

  output                         clint_tmr_irq,
  output                         clint_sft_irq,

  input                          aon_rtcToggle_a
);

/// clint
wire sft_irq;
wire tmr_irq;

e203_subsys_clint u_e203_subsys_clint(
    .tm_stop                 (tm_stop),

    .clint_icb_cmd_valid     (clint_icb_cmd_valid),
    .clint_icb_cmd_ready     (clint_icb_cmd_ready),
    .clint_icb_cmd_addr      (clint_icb_cmd_addr ),
    .clint_icb_cmd_read      (clint_icb_cmd_read ),
    .clint_icb_cmd_wdata     (clint_icb_cmd_wdata),
    .clint_icb_cmd_wmask     (clint_icb_cmd_wmask),
    
    .clint_icb_rsp_valid     (clint_icb_rsp_valid),
    .clint_icb_rsp_ready     (clint_icb_rsp_ready),
    .clint_icb_rsp_err       (clint_icb_rsp_err  ),
    .clint_icb_rsp_rdata     (clint_icb_rsp_rdata),

    .clint_tmr_irq           (tmr_irq),
    .clint_sft_irq           (sft_irq),

    .aon_rtcToggle_a         (aon_rtcToggle_a),

    .clk           (clk      ),
    .rst_n         (rst_n    )
  );


// trap type
//  e_trap = 11 , s_trap = 10 , t_trap = 01
wire      strap_happen;
reg [1:0] trap_type;
wire      t_irq;
wire      s_irq;
wire      e_irq;

assign strap_happen  = (clint_icb_rsp_rdata == 'b1);
assign clint_sft_irq = s_irq;
assign clint_tmr_irq = t_irq;

assign t_irq =  (~rst_n) ? 'b0 : ((plic_irq_i == 'b0) & (plic_irq_i_r == 'b0) & (irq_pend_r == 'b0) & (trap_stage_nts2nplic == 'b00)) & (strap_happen == 'b0) & tmr_irq;
assign s_irq =  (~rst_n) ? 'b0 : ((plic_irq_i == 'b0) & (plic_irq_i_r == 'b0) & (irq_pend_r == 'b0) & (trap_stage_nts2nplic == 'b00)) &  sft_irq;
assign e_irq =  (~rst_n) ? 'b0 : (~(irq_o == 'b0));

assign trap_type = (e_irq) ? 2'b11 : (s_irq) ? 2'b10 : (t_irq) ? 2'b01 : (trap_stage_nts2nplic == 'b10) ? 'b0 : trap_type;
assign trap_type2core = trap_type;

// prio : e_trap > s_trap > t_trap


// interrupt stage
// not trap -> irq -> isr ->  mret 
//    00    -> 01  -> 10  ->  11

////////////////////////////////////////////////////////////////////////////////////////////

  reg [6+3-1:0] id_prio_reg [0:11-1];
  reg n_trap;
  /// ISR interrupt - ID PRIO
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      af_cls_pend <= 'b0;
      id_reg      <= 'b0;
      prio_reg    <= 'b0;
      n_trap      <= 'b0;
    end else if(ret2nplic & (num_trap2nplic == 'b1))begin
      af_cls_pend <= 'b0;
      id_reg      <= 'b0;
      prio_reg    <= 'b0;
      n_trap      <= 'b0; 
    end else if(ret2nplic & (num_trap2nplic != 'b1))begin
      af_cls_pend <= 'b0;
      id_reg      <= id_prio_reg[num_trap2nplic-2][8:3];
      prio_reg    <= id_prio_reg[num_trap2nplic-2][2:0];
      n_trap      <= 'b0; 
    end else if(nest_trap) begin
      id_prio_reg[num_trap2nplic-1] <= {id_reg, prio_reg};
      af_cls_pend <= 'b0;
      id_reg      <= id_reg;
      prio_reg    <= prio_reg;
      n_trap      <= 1'b1;
    end else if(aftail_trap) begin
      n_trap      <= 'b0;
      af_cls_pend <= 1'b1;
      id_reg      <= aftail_trap_id;
      prio_reg    <= aftail_trap_prio;
    end else if (n_trap | (traping & ((prio_reg < irq_prio_top) | ((prio_reg == irq_prio_top) & (id_reg > irq_id_top))))) begin
      af_cls_pend <= 'b0;
      n_trap      <= 'b0;
      id_reg      <= irq_id_top;
      prio_reg    <= irq_prio_top;
    end else begin
      n_trap      <= 'b0;
      af_cls_pend <= 'b0;
      id_reg      <= id_reg;
      prio_reg    <= prio_reg;
    end
  end

/// 巢狀中斷
  reg [2:0]            count;
  reg [`E203_XLEN-1:0] sp_reg;
  reg                  op_nest;
  always @(posedge clk or negedge rst_n) begin
    if(~rst_n | (trap_stage_nts2nplic == 'b01)) begin
      count   <= 'd4;
      sp_reg  <= 'd0;
      op_nest <= 'b0;
    end else if((trap_stage_nts2nplic == 'b10) & (count != 'd0) & (sp_reg != x2_sp)) begin
      count   <= count - 'd1;
      sp_reg  <= x2_sp;
      op_nest <= 'b0;
    end else if(count == 'd0) begin
      op_nest <= 1'b1;
    end
  end

  wire nest_trap = (n_trap) ? 'b0 : ((op_nest) & (nts_full_o2nplic == 'b0) & (trap_stage_nts2nplic == 'b10)) ? (( prio_reg <  irq_prio_top) | 
                                                                                                    ((prio_reg == irq_prio_top) & (id_reg > id_top_r))) : 'b0;

  assign nest_trap_2ntsctrl = nest_trap;

  wire [PLIC_IRQ_NUM_LOG2-1:0] id_top_r = (irq_prio_top_lt) ? irq_id_lvl_1 [1] : irq_id_lvl_1 [0];


/// 咬尾中斷
/// 判斷當前是否有中斷，同時檢查優先級是否大於 threshold，發送中斷訊號給 nts_ctrl，等待中斷返回
  wire e_trap_pend = (trap_stage_nts2nplic == 'b10)                                                 ? ((irq_prio_top > irq_thod_r) & ((irq_prio_top_lt) ? irq_ip_lvl_1 [1] : irq_ip_lvl_1 [0])) : 'b0;
  wire s_trap_pend = ((trap_stage_nts2nplic == 'b10) & (e_trap_pend == 'b0))                        ? sft_irq : 'b0;
  wire t_trap_pend = ((trap_stage_nts2nplic == 'b10) & (s_trap_pend == 'b0) & (e_trap_pend == 'b0)) ? tmr_irq : 'b0;

/// iq_aftrap = (time, software, extern)
  assign iq_aftrap_nplic2nts = {t_trap_pend , s_trap_pend , e_trap_pend};

/// 如果發生追尾中斷,屏蔽原本中斷傳送,改由另一條中斷發送
  wire irq_o_checked = (bf_trap & (trap_stage_nts2nplic == 'b01)) ? 'b0 : irq_o;

/// 校正完成儲存 reg & csr 的訊號
  wire can_irq = n_trap | (trap_stage_nts2nplic == 'b00) | ((trap_stage_nts2nplic == 'b01) & saveregdone);
  reg saveregdone;
  always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
      saveregdone <= 'b0;
    end else if(trap_stage_nts2nplic == 'b01)begin
      saveregdone <= saveregdone_2nplic;
    end else if(~(trap_stage_nts2nplic == 'b01))begin
      saveregdone <= 'b0;
    end
  end

/// bftail_trap
  wire bf_trap = bftail_trap;
  assign bftail_trap = (clint_sft_irq & clint_tmr_irq) | 
                      ((trap_stage_nts2nplic == 'b01) & saveregdone & ((prio_reg < irq_prio_top) | ((prio_reg == irq_prio_top) & (id_reg > irq_id_top))));

/// Once the interrupt has entered the OS ,the highest priority ID should be disabled.
/// if trap stage 01 -> 10 ,cls highest pending
  reg [1:0] trap_stage_delay;
  reg cls_pend_save;

  always @(posedge clk or posedge rst_n) begin
    if (~rst_n) begin
      trap_stage_delay <= 2'b00;
      cls_pend_save <= 1'b0;
    end else begin
      trap_stage_delay <= trap_stage_nts2nplic;
      if ((trap_stage_delay == 2'b01 & trap_stage_nts2nplic == 2'b10) | af_cls_pend) begin
        cls_pend_save <= 1'b1;
      end else begin
        cls_pend_save <= 1'b0;
      end
    end
  end

/// core -> ISR ,cls pending
  wire [PLIC_IRQ_NUM-1:0] cls_pending = (cls_pend_save) ? 1 << id_reg : 'b0;

/// Before entering the OS due to an interrupt, save the highest priority ID. If a change occurs
/// it indicates a tailgating interrupt
  wire traping = (irq_id_top != 'b0) & (trap_stage_nts2nplic == 'b00 | trap_stage_nts2nplic == 'b01) ? 'b1 : 'b0;

  reg [PLIC_IRQ_NUM_LOG2-1:0] id_reg;
  reg [PLIC_PRIO_WIDTH-1:0]   prio_reg;

/// after trap happen , save top id .top prio ,change id_reg .prio_reg 
  wire [PLIC_IRQ_NUM_LOG2-1:0] aftail_trap_id   = (aftail_trap) ? ((irq_prio_top_lt) ? irq_id_lvl_1  [1] : irq_id_lvl_1 [0]) : 'b0;
  wire [PLIC_PRIO_WIDTH-1:0]   aftail_trap_prio = (aftail_trap) ? irq_prio_top : 'b0;
  reg af_cls_pend;


////////////////////////////////////////////////////////////////////////////////////////////

// If there are 32 irq, then we need 1 pend-array ([31:0])
// If there are 40 irq, then we need 2 pend-array ([39:32],[31:0])
// If there are 64 irq, then we need 2 pend-array ([63:32],[31:0])
// 用於計算需要多少個挂起陣列（pend-array），以管理系統中的中斷請求（irq request）
localparam PLIC_PEND_ARRAY = (((PLIC_IRQ_NUM-1)/32) + 1);

// 用於協調 ICB 命令的寫入和讀取操作
 wire icb_cmd_hsked    = icb_cmd_valid & icb_cmd_ready;   // 當有有效的 ICB 命令要輸入且模組準備好接收時為 1
 wire icb_cmd_wr_hsked = icb_cmd_hsked & (~icb_cmd_read);  // 當 ICB 命令為寫入操作且可以被寫入時為 1
 wire icb_cmd_rd_hsked = icb_cmd_hsked & icb_cmd_read;     // 當 ICB 命令為讀取操作且可以被讀取時為 1

// 用於 gateway
 wire [PLIC_IRQ_NUM-1:0]  plic_irq_i_r;
 wire [PLIC_IRQ_NUM-1:0]  irq_i_gated_valid;
 wire [PLIC_IRQ_NUM-1:0]  irq_i_gated_ready;
 wire [PLIC_IRQ_NUM-1:0]  irq_i_gated_hsked;

 reg [PLIC_IRQ_NUM-1:0]  icb_claim_irq;
 reg [PLIC_IRQ_NUM-1:0]  icb_complete_irq;

// 做 D flip-flop
 wire irq_o;

// 做 D flip-flop
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id ;
 wire [PLIC_IRQ_NUM_LOG2-1:0] plic_irq_id ;
 wire [PLIC_PRIO_WIDTH-1:0] plic_irq_prio ;

// 做 irq_pend
 wire [PLIC_IRQ_NUM-1:0]  irq_pend_set;
 wire [PLIC_IRQ_NUM-1:0]  irq_pend_clr;
 wire [PLIC_IRQ_NUM-1:0]  irq_pend_ena;
 wire [PLIC_IRQ_NUM-1:0]  irq_pend_nxt;
 wire [PLIC_PEND_ARRAY*32-1:0] irq_pend_r;  // The IP bit per interrupt source

// 做 address map
 wire [PLIC_PEND_ARRAY-1:0] icb_cmd_sel_pend;
 wire icb_cmd_sel_clam;

// 做 閾值（Threshold）功能
 wire icb_cmd_sel_thod;
 wire irq_thod_ena;
 wire [PLIC_PRIO_WIDTH-1:0] irq_thod_nxt; 
 wire [PLIC_PRIO_WIDTH-1:0] irq_thod_r  ; // The  priority per interrupt source

// 做 優先權
 wire [PLIC_IRQ_NUM-1:0]  icb_cmd_sel_prio;
 wire [PLIC_IRQ_NUM-1:0]  irq_prio_ena;
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_nxt [PLIC_IRQ_NUM-1:0];
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_r [PLIC_IRQ_NUM-1:0];  // The  priority per interrupt source
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_masked [PLIC_IRQ_NUM-1:0];  // The masked priority per interrupt source

// 生成 prio id ip 所需
 wire irq_prio_lvl_10_lt [1024-1:0]; // The level-10 max priority array
 wire irq_prio_lvl_9_lt  [512-1:0] ; // The level-9  max priority array
 wire irq_prio_lvl_8_lt  [256-1:0] ; // The level-8  max priority array
 wire irq_prio_lvl_7_lt  [128-1:0] ; // The level-7  max priority array
 wire irq_prio_lvl_6_lt  [64-1:0]  ; // The level-6  max priority array
 wire irq_prio_lvl_5_lt  [32-1:0]  ; // The level-5  max priority array
 wire irq_prio_lvl_4_lt  [16-1:0]  ; // The level-4  max priority array
 wire irq_prio_lvl_3_lt  [8-1:0]   ; // The level-3  max priority array
 wire irq_prio_lvl_2_lt  [4-1:0]   ; // The level-2  max priority array
 wire irq_prio_lvl_1_lt  [2-1:0]   ; // The level-1  max priority array
 wire irq_prio_top_lt              ; // The level-0  max priority 

// 生成 prio id ip 所需
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_lvl_10 [1024-1:0] ; // The level-10 max priority array
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_lvl_9  [512-1:0]  ; // The level-9  max priority array
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_lvl_8  [256-1:0]  ; // The level-8  max priority array
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_lvl_7  [128-1:0]  ; // The level-7  max priority array
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_lvl_6  [64-1:0]   ; // The level-6  max priority array
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_lvl_5  [32-1:0]   ; // The level-5  max priority array
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_lvl_4  [16-1:0]   ; // The level-4  max priority array
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_lvl_3  [8-1:0]    ; // The level-3  max priority array
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_lvl_2  [4-1:0]    ; // The level-2  max priority array
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_lvl_1  [2-1:0]    ; // The level-1  max priority array
 wire [PLIC_PRIO_WIDTH-1:0] irq_prio_top               ; // The level-0  max priority 

// 生成 prio id ip 所需                                                  
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id_lvl_10 [1024-1:0] ; // The level-10 max id array
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id_lvl_9  [512-1:0]  ; // The level-9  max id array
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id_lvl_8  [256-1:0]  ; // The level-8  max id array
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id_lvl_7  [128-1:0]  ; // The level-7  max id array
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id_lvl_6  [64-1:0]   ; // The level-6  max id array
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id_lvl_5  [32-1:0]   ; // The level-5  max id array
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id_lvl_4  [16-1:0]   ; // The level-4  max id array
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id_lvl_3  [8-1:0]    ; // The level-3  max id array
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id_lvl_2  [4-1:0]    ; // The level-2  max id array
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id_lvl_1  [2-1:0]    ; // The level-1  max id array
 wire [PLIC_IRQ_NUM_LOG2-1:0] irq_id_top               ; // The level-0  max id 

 // 生成 prio id ip 所需
 wire irq_ip_lvl_10 [1024-1:0] ; // The level-10 IP array
 wire irq_ip_lvl_9  [512-1:0]  ; // The level-9  IP array
 wire irq_ip_lvl_8  [256-1:0]  ; // The level-8  IP array
 wire irq_ip_lvl_7  [128-1:0]  ; // The level-7  IP array
 wire irq_ip_lvl_6  [64-1:0]   ; // The level-6  IP array
 wire irq_ip_lvl_5  [32-1:0]   ; // The level-5  IP array
 wire irq_ip_lvl_4  [16-1:0]   ; // The level-4  IP array
 wire irq_ip_lvl_3  [8-1:0]    ; // The level-3  IP array
 wire irq_ip_lvl_2  [4-1:0]    ; // The level-2  IP array
 wire irq_ip_lvl_1  [2-1:0]    ; // The level-1  IP array
 wire irq_ip_top               ; // The level-0  IP 

// 仲裁
 wire          icb_cmd_sel_enab [PLIC_PEND_ARRAY-1:0];
 wire          irq_enab_ena     [PLIC_PEND_ARRAY-1:0];
 wire [32-1:0] irq_enab_nxt     [PLIC_PEND_ARRAY-1:0];
 wire [32-1:0] irq_enab_r       [PLIC_PEND_ARRAY-1:0];

 wire plic_irq_o_pre;

 genvar i;
 integer ii;

// 做 D flip-flop

// 如果 PLIC_IRQ_I_FLOP = 1 , 產生 flop_i_irq 模塊 , 以 PLIC_IRQ_NUM 當參數 , plic_irq_i 當輸入 , plic_irq_i 當儲存訊號
// 否則直接將訊號直接賦值
 generate 
   if(PLIC_IRQ_I_FLOP == 1) begin: flop_i_irq
      sirv_gnrl_dffr #(PLIC_IRQ_NUM) plic_irq_i_dffr(plic_irq_i , plic_irq_i_r, clk, rst_n);
   end
   else begin: no_flop_i_irq
      assign plic_irq_i_r = plic_irq_i;
   end

   if(PLIC_IRQ_O_FLOP == 1) begin: flop_o_irq
        sirv_gnrl_dffr #(1) plic_irq_o_dffr(irq_o_checked , plic_irq_o_pre, clk, rst_n);
        sirv_gnrl_dffr #(PLIC_IRQ_NUM_LOG2) plic_irq_id_dffr(irq_id , plic_irq_id, clk, rst_n);
        sirv_gnrl_dffr #(PLIC_PRIO_WIDTH) plic_irq_prio_dffr(irq_prio_top , plic_irq_prio, clk, rst_n);
   end
   else begin: no_flop_o_irq
        assign plic_irq_o_pre  = irq_o_checked ;
        assign plic_irq_id = irq_id;
        assign plic_irq_prio = irq_prio_top;
   end

     assign plic_irq_o = plic_irq_o_pre;// & (plic_irq_prio > irq_thod_r);

     assign irq_i_gated_hsked[0] = 1'b0;
     assign irq_i_gated_valid[0] = 1'b0;
     assign irq_i_gated_ready[0] = 1'b0;

     assign irq_pend_set[0] = 1'b0;
     assign irq_pend_clr[0] = 1'b0;
     assign irq_pend_ena[0] = 1'b0;
     assign irq_pend_nxt[0] = 1'b0;
     assign irq_pend_r  [0] = 1'b0;

     assign irq_prio_ena[0] = 1'b0;
     assign irq_prio_nxt[0] = {PLIC_PRIO_WIDTH{1'b0}};
     assign irq_prio_r[0]   = {PLIC_PRIO_WIDTH{1'b0}};
 
     assign irq_prio_masked[0] = {PLIC_PRIO_WIDTH{1'b0}};

// 利用 for 迴圈做 Gateway - PLIC 中斷處理的入口

// Pending - 當中斷源的中斷訊號進入 PLIC 後，如果該中斷訊號尚未處理，則將其加入到未完成的中斷列表中 稱為 Pending

    // for 迴圈遍歷所有的中斷源 ， 使用 sirv_LevelGateway.v 模塊
   
   for(i=1; i<PLIC_IRQ_NUM;i=i+1) begin: source_gen
     sirv_LevelGateway u_LevelGateway_1_1 (
       .clock           (clk   ),
       .reset           (~rst_n),
       .io_interrupt    (plic_irq_i_r[i]),          // 中斷源的訊號 plic_irq_i_r 作為輸入
       .io_plic_valid   (irq_i_gated_valid[i]),
       .io_plic_ready   (irq_i_gated_ready[i]),
       .io_plic_complete(icb_complete_irq[i])       // icb_complete_irq 作為觸發中斷的訊號
     );

    // 有新的中斷請求到達且 gateway 閒置 (irq_i_gated_valid = 1) & PLIC 可以寫入新的中斷 (irq_i_gated_ready)
     assign irq_i_gated_hsked[i] = irq_i_gated_valid[i] & irq_i_gated_ready[i];

    // 如果 irq = 0 ，代表中斷處理完了 , 可以準備寫入新的中斷
     assign irq_i_gated_ready[i] = (~irq_pend_r[i]);

    // 設置每個中斷源的 IRQ pend，該中斷源要處理但尚未處理存放至 pending
     assign irq_pend_set[i] = irq_i_gated_hsked[i];

    // 當 PLIC 送出中斷給 core 時 ， 同時要清除 IRQ pend
     assign irq_pend_clr[i] = icb_claim_irq[i] | cls_pending[i];
     assign irq_pend_ena[i] = (irq_pend_set[i] | irq_pend_clr[i]);
     assign irq_pend_nxt[i] = (irq_pend_set[i] | (~irq_pend_clr[i]));

    // 當 irq_pend_ena 為1時，irq_pend_nxt 的值就會被載入到 DFFLR 中，並在下一個 clk 作為 irq_pend_r 的值輸出
     sirv_gnrl_dfflr #(1) irq_pend_dfflr(irq_pend_ena[i] , irq_pend_nxt[i], irq_pend_r[i], clk, rst_n);


// Priority - 每個中斷源實現優先級控制

    //傳遞進來的訊號為寫入 (icb_cmd_read = 0 & icb_cmd_valid = 1 & icb_cmd_ready = 1) ，將icb_cmd_wr_hsked = 1
    // 當地址正確 icb_cmd_sel_prio 為 1 用於判斷寫入操作是否針對優先級選擇位
     assign irq_prio_ena[i] = icb_cmd_wr_hsked & icb_cmd_sel_prio[i];

    // 傳遞進來的 icb_cmd_wdata
     assign irq_prio_nxt[i] = icb_cmd_wdata[PLIC_PRIO_WIDTH-1:0];
    
    // 當 irq_prio_ena = 1 時，irq_prio_nxt 賦值給 irq_prio_r
     sirv_gnrl_dfflr #(PLIC_PRIO_WIDTH) irq_prio_dfflr(irq_prio_ena[i] , irq_prio_nxt[i], irq_prio_r[i], clk, rst_n);
 

    // 中斷源 IP 沒設置 pending，優先級就會 mask 為 0    ! 第1個 and gate !
     assign irq_prio_masked[i] = irq_prio_r[i] & {PLIC_PRIO_WIDTH{irq_pend_r[i]}};
   end
    
   // 預設 PLIC_IRQ_NUM 中斷數量以外的全部設置為 0 
   for(i=PLIC_IRQ_NUM; i<(PLIC_PEND_ARRAY*32);i=i+1) begin: pend_gen
       assign irq_pend_r[i] = 1'b0;
   end


// Interrupt Enable - 實現每個中斷源控制

    // 遍歷每個中斷源
   for(i=0; i<(PLIC_PEND_ARRAY);i=i+1) begin: enab_r_i
     assign irq_enab_ena[i] = icb_cmd_sel_enab[i] & icb_cmd_wr_hsked;
     sirv_gnrl_dfflr #(32) irq_enab_dfflr(irq_enab_ena[i], irq_enab_nxt[i], irq_enab_r[i], clk, rst_n);

    // 0號中斷始終為0(不能中斷) , 其餘中斷透過賦值
     if(i == 0)begin: i0_ena
       assign irq_enab_nxt[i] = {icb_cmd_wdata[31:1],1'b0};
     end
     else if((PLIC_PEND_ARRAY-1) == i) begin:last_one
         if((PLIC_IRQ_NUM%32) == 0) begin:irq_num_div_32
           assign irq_enab_nxt[i] = icb_cmd_wdata[31:0];
         end
         else begin:irq_num_not_div_32
           assign irq_enab_nxt[i] = icb_cmd_wdata[(PLIC_IRQ_NUM%32)-1:0];
         end
     end
     else begin:no_last_one
       assign irq_enab_nxt[i] = icb_cmd_wdata[31:0];
     end
   end

   
// Threshold - 設定 閾值（Threshold）

// 閾值決定了可以中斷的最高優先級
// 閾值以下的所有中斷都將被忽略，直到所有高於閾值的中斷都被處理完畢

  //用於判斷寫入操作是否針對閾值選擇位
   assign irq_thod_ena = icb_cmd_wr_hsked & icb_cmd_sel_thod;
   assign irq_thod_nxt = icb_cmd_wdata[PLIC_PRIO_WIDTH-1:0];

   sirv_gnrl_dfflr #(PLIC_PRIO_WIDTH) irq_thod_dfflr(irq_thod_ena , irq_thod_nxt, irq_thod_r, clk, rst_n);


// 生成 max prio id ip

    // Use the binary-tree structure to compare and select the pending interrupt
    //   source with the max priority and its ID
    // Generate the level-10 signals
    // We need to tie the unused signals to zeros
    //  and the synthesis tools will automatically 
    //  optimize unused logics to zeros
    // Tie the irq0 relevant logics to 0

         assign irq_prio_lvl_10[0] = {PLIC_PRIO_WIDTH{1'b0}};  
         assign irq_id_lvl_10  [0] = {PLIC_IRQ_NUM_LOG2{1'b0}};
         assign irq_ip_lvl_10  [0] = 1'b0;

     for(i=1; i<PLIC_IRQ_NUM;i=i+1) begin: tie_input

         // The priority will be masked to zero, if the IE is not set     ! 第2個 and gate !
         assign irq_prio_lvl_10[i] = irq_prio_masked[i] & {PLIC_PRIO_WIDTH{irq_enab_r[i/32][i%32]}};
         assign irq_id_lvl_10  [i] = i[PLIC_IRQ_NUM_LOG2-1:0];
         assign irq_ip_lvl_10  [i] = irq_pend_r[i] & irq_enab_r[i/32][i%32];
     end

     for(i=PLIC_IRQ_NUM; i<1024;i=i+1) begin: tie_unused_tozero
         assign irq_prio_lvl_10[i] = {PLIC_PRIO_WIDTH{1'b0}};  
         assign irq_id_lvl_10  [i] = i[PLIC_IRQ_NUM_LOG2-1:0];
         assign irq_ip_lvl_10  [i] = 1'b0;
     end

    // 三元運算子 ？ 前面為 1 賦值 ： 前面 ， 否則賦值 ： 後面
         // Generate the level-9 comp
     for(i=0; i<512;i=i+1) begin: lvl_9_comp_gen//{
         assign irq_prio_lvl_9_lt[i] = (irq_prio_lvl_10[2*i] < irq_prio_lvl_10[(2*i)+1]); 
         assign irq_prio_lvl_9[i] = irq_prio_lvl_9_lt[i] ? irq_prio_lvl_10[(2*i)+1] : irq_prio_lvl_10[2*i];
         assign irq_id_lvl_9  [i] = irq_prio_lvl_9_lt[i] ? irq_id_lvl_10  [(2*i)+1] : irq_id_lvl_10  [2*i];
         assign irq_ip_lvl_9  [i] = irq_prio_lvl_9_lt[i] ? irq_ip_lvl_10  [(2*i)+1] : irq_ip_lvl_10  [2*i];
     end//}
         // Generate the level-8 comp
     for(i=0; i<256;i=i+1) begin: lvl_8_comp_gen//{
         assign irq_prio_lvl_8_lt[i] = (irq_prio_lvl_9[2*i] < irq_prio_lvl_9[(2*i)+1]); 
         assign irq_prio_lvl_8[i] = irq_prio_lvl_8_lt[i] ? irq_prio_lvl_9[(2*i)+1] : irq_prio_lvl_9[2*i];
         assign irq_id_lvl_8  [i] = irq_prio_lvl_8_lt[i] ? irq_id_lvl_9  [(2*i)+1] : irq_id_lvl_9  [2*i];
         assign irq_ip_lvl_8  [i] = irq_prio_lvl_8_lt[i] ? irq_ip_lvl_9  [(2*i)+1] : irq_ip_lvl_9  [2*i];
     end//}
         // Generate the level-7 comp
     for(i=0; i<128;i=i+1) begin: lvl_7_comp_gen//{
         assign irq_prio_lvl_7_lt[i] = (irq_prio_lvl_8[2*i] < irq_prio_lvl_8[(2*i)+1]); 
         assign irq_prio_lvl_7[i] = irq_prio_lvl_7_lt[i] ? irq_prio_lvl_8[(2*i)+1] : irq_prio_lvl_8[2*i];
         assign irq_id_lvl_7  [i] = irq_prio_lvl_7_lt[i] ? irq_id_lvl_8  [(2*i)+1] : irq_id_lvl_8  [2*i];
         assign irq_ip_lvl_7  [i] = irq_prio_lvl_7_lt[i] ? irq_ip_lvl_8  [(2*i)+1] : irq_ip_lvl_8  [2*i];
     end//}
         // Generate the level-6 comp
     for(i=0; i<64;i=i+1) begin: lvl_6_comp_gen//{
         assign irq_prio_lvl_6_lt[i] = (irq_prio_lvl_7[2*i] < irq_prio_lvl_7[(2*i)+1]); 
         assign irq_prio_lvl_6[i] = irq_prio_lvl_6_lt[i] ? irq_prio_lvl_7[(2*i)+1] : irq_prio_lvl_7[2*i];
         assign irq_id_lvl_6  [i] = irq_prio_lvl_6_lt[i] ? irq_id_lvl_7  [(2*i)+1] : irq_id_lvl_7  [2*i];
         assign irq_ip_lvl_6  [i] = irq_prio_lvl_6_lt[i] ? irq_ip_lvl_7  [(2*i)+1] : irq_ip_lvl_7  [2*i];
     end//}
         // Generate the level-5 comp
     for(i=0; i<32;i=i+1) begin: lvl_5_comp_gen//{
         assign irq_prio_lvl_5_lt[i] = (irq_prio_lvl_6[2*i] < irq_prio_lvl_6[(2*i)+1]); 
         assign irq_prio_lvl_5[i] = irq_prio_lvl_5_lt[i] ? irq_prio_lvl_6[(2*i)+1] : irq_prio_lvl_6[2*i];
         assign irq_id_lvl_5  [i] = irq_prio_lvl_5_lt[i] ? irq_id_lvl_6  [(2*i)+1] : irq_id_lvl_6  [2*i];
         assign irq_ip_lvl_5  [i] = irq_prio_lvl_5_lt[i] ? irq_ip_lvl_6  [(2*i)+1] : irq_ip_lvl_6  [2*i];
     end//}
         // Generate the level-4 comp
     for(i=0; i<16;i=i+1) begin: lvl_4_comp_gen//{
         assign irq_prio_lvl_4_lt[i] = (irq_prio_lvl_5[2*i] < irq_prio_lvl_5[(2*i)+1]); 
         assign irq_prio_lvl_4[i] = irq_prio_lvl_4_lt[i] ? irq_prio_lvl_5[(2*i)+1] : irq_prio_lvl_5[2*i];
         assign irq_id_lvl_4  [i] = irq_prio_lvl_4_lt[i] ? irq_id_lvl_5  [(2*i)+1] : irq_id_lvl_5  [2*i];
         assign irq_ip_lvl_4  [i] = irq_prio_lvl_4_lt[i] ? irq_ip_lvl_5  [(2*i)+1] : irq_ip_lvl_5  [2*i];
     end//}
         // Generate the level-3 comp
     for(i=0; i<8;i=i+1) begin: lvl_3_comp_gen//{
         assign irq_prio_lvl_3_lt[i] = (irq_prio_lvl_4[2*i] < irq_prio_lvl_4[(2*i)+1]); 
         assign irq_prio_lvl_3[i] = irq_prio_lvl_3_lt[i] ? irq_prio_lvl_4[(2*i)+1] : irq_prio_lvl_4[2*i];
         assign irq_id_lvl_3  [i] = irq_prio_lvl_3_lt[i] ? irq_id_lvl_4  [(2*i)+1] : irq_id_lvl_4  [2*i];
         assign irq_ip_lvl_3  [i] = irq_prio_lvl_3_lt[i] ? irq_ip_lvl_4  [(2*i)+1] : irq_ip_lvl_4  [2*i];
     end//}
         // Generate the level-2 comp
     for(i=0; i<4;i=i+1) begin: lvl_2_comp_gen//{
         assign irq_prio_lvl_2_lt[i] = (irq_prio_lvl_3[2*i] < irq_prio_lvl_3[(2*i)+1]); 
         assign irq_prio_lvl_2[i] = irq_prio_lvl_2_lt[i] ? irq_prio_lvl_3[(2*i)+1] : irq_prio_lvl_3[2*i];
         assign irq_id_lvl_2  [i] = irq_prio_lvl_2_lt[i] ? irq_id_lvl_3  [(2*i)+1] : irq_id_lvl_3  [2*i];
         assign irq_ip_lvl_2  [i] = irq_prio_lvl_2_lt[i] ? irq_ip_lvl_3  [(2*i)+1] : irq_ip_lvl_3  [2*i];
     end//}
         // Generate the level-1 comp
     for(i=0; i<2;i=i+1) begin: lvl_1_comp_gen//{
         assign irq_prio_lvl_1_lt[i] = (irq_prio_lvl_2[2*i] < irq_prio_lvl_2[(2*i)+1]); 
         assign irq_prio_lvl_1[i] = irq_prio_lvl_1_lt[i] ? irq_prio_lvl_2[(2*i)+1] : irq_prio_lvl_2[2*i];
         assign irq_id_lvl_1  [i] = irq_prio_lvl_1_lt[i] ? irq_id_lvl_2  [(2*i)+1] : irq_id_lvl_2  [2*i];
         assign irq_ip_lvl_1  [i] = irq_prio_lvl_1_lt[i] ? irq_ip_lvl_2  [(2*i)+1] : irq_ip_lvl_2  [2*i];
     end//}

     assign irq_prio_top_lt = (irq_prio_lvl_1[0] <= irq_prio_lvl_1[1]); 
     assign irq_prio_top    = irq_prio_top_lt ? irq_prio_lvl_1[1] : irq_prio_lvl_1[0];
     
     assign irq_id_top      = (~rst_n) ? 'b0 : (can_irq) ? ((irq_prio_top_lt) ? irq_id_lvl_1  [1]     : irq_id_lvl_1  [0]) : 'b0;
     
     assign irq_ip_top      = (~rst_n) ? 'b0 : (can_irq) ? ((irq_prio_top_lt) ? irq_ip_lvl_1  [1]     : irq_ip_lvl_1  [0]) : 'b0;
     
     assign irq_o           = (~rst_n) ? 'b0 : (can_irq) ? (irq_ip_top & (irq_prio_top > irq_thod_r)) : 'b0;
     
     assign irq_id          = irq_id_top;

 endgenerate

/// The address map
 generate 
         ///   0x0C00_0004 source 1 priority
         ///   0x0C00_0008 source 2 priority
         ///   ...
         ///   0x0C00_0FFC source 1023 priority
   for(i=0; i<PLIC_IRQ_NUM;i=i+1) begin: sel_prio
     assign icb_cmd_sel_prio[i] = (icb_cmd_addr == ($unsigned(i) * 4)); 
   end

         ///0x0C00 1000 Start of pending array
         ///... (read-only)
         ///0x0C00 107C End of pending array
   for(i=0; i<(PLIC_PEND_ARRAY);i=i+1) begin: sel_pend
     assign icb_cmd_sel_pend[i] = (icb_cmd_addr == (($unsigned(i) * 4) + 24'h1000)); 
   end


         ///0x0C00 1000 Start of target 0 enable array
         ///0x0C00 107C End   of target 0 enable array
         ///.... target 1
         ///.... target 2
     for(i=0; i<(PLIC_PEND_ARRAY);i=i+1) begin: sel_enab_i
       assign icb_cmd_sel_enab[i] = (icb_cmd_addr == (($unsigned(i) * 4) + 24'h2000)); 
     end

         /// 0x0C20 0000 target 0 priority threshold
         /// 0x0C20 0004 target 0 claim/complete
         /// 0x0C20 1000 target 1 priority threshold
         /// 0x0C20 1004 target 1 claim/complete
       assign icb_cmd_sel_thod = (icb_cmd_addr ==  (24'h20_0000)); 
       assign icb_cmd_sel_clam = (icb_cmd_addr ==  (24'h20_0004)); 
        
 endgenerate


// 仲裁 prio id ip
// Implement the rdata mux

   reg [32-1:0] rsp_rdata_prio;
   reg [32-1:0] rsp_rdata_pend;
   reg [32-1:0] rsp_rdata_targ;

   always @* begin:rdat_prio_mux
       rsp_rdata_prio = 32'b0;

       for(ii=0; ii<PLIC_IRQ_NUM;ii=ii+1) begin: sel_prio
         rsp_rdata_prio = rsp_rdata_prio | ({32{icb_cmd_sel_prio[ii]}} & irq_prio_r[ii] );
       end
   end

   always @* begin:rdat_pend_mux
       rsp_rdata_pend = 32'b0;

       for(ii=0; ii<(PLIC_PEND_ARRAY);ii=ii+1) begin: sel_pend
         rsp_rdata_pend = rsp_rdata_pend | ({32{icb_cmd_sel_pend[ii]}} &  
                             {
                                irq_pend_r[ii*32+31], irq_pend_r[ii*32+30], irq_pend_r[ii*32+29], irq_pend_r[ii*32+28], 
                                irq_pend_r[ii*32+27], irq_pend_r[ii*32+26], irq_pend_r[ii*32+25], irq_pend_r[ii*32+24], 
                                irq_pend_r[ii*32+23], irq_pend_r[ii*32+22], irq_pend_r[ii*32+21], irq_pend_r[ii*32+20], 
                                irq_pend_r[ii*32+19], irq_pend_r[ii*32+18], irq_pend_r[ii*32+17], irq_pend_r[ii*32+16], 
                                irq_pend_r[ii*32+15], irq_pend_r[ii*32+14], irq_pend_r[ii*32+13], irq_pend_r[ii*32+12], 
                                irq_pend_r[ii*32+11], irq_pend_r[ii*32+10], irq_pend_r[ii*32+09], irq_pend_r[ii*32+08], 
                                irq_pend_r[ii*32+07], irq_pend_r[ii*32+06], irq_pend_r[ii*32+05], irq_pend_r[ii*32+04], 
                                irq_pend_r[ii*32+03], irq_pend_r[ii*32+02], irq_pend_r[ii*32+01], irq_pend_r[ii*32+00]  
                             });
       end
   end

   always @* begin:rdat_targ_mux 
       rsp_rdata_targ = 32'b0;

       rsp_rdata_targ = rsp_rdata_targ | ({32{icb_cmd_sel_thod}} & irq_thod_r ); 
       rsp_rdata_targ = rsp_rdata_targ | ({32{icb_cmd_sel_clam}} & irq_id_save);
       for(ii=0; ii<(PLIC_PEND_ARRAY);ii=ii+1) begin: sel_enab_i
           rsp_rdata_targ = rsp_rdata_targ | ({32{icb_cmd_sel_enab[ii]}} & irq_enab_r[ii]);
       end
   end

   wire [32-1:0] rsp_rdata = rsp_rdata_prio | rsp_rdata_pend | rsp_rdata_targ;

   reg [5:0] irq_id_save;

   assign irq_id_save = (bf_trap) ? irq_id_top : (plic_irq_o) ? plic_irq_id : (icb_complete_irq != 'b0) ? 'b0 : id_reg;
// 仲裁完打包3個輸出給cpu

   generate 
     if(PLIC_ICB_RSP_FLOP == 1) begin: flop_icb_rsp
     sirv_gnrl_pipe_stage # (
      .CUT_READY(1),
      .DP(1),
      .DW(32)
     ) u_buf_icb_rsp_buf(
       .i_vld(icb_cmd_valid), 
       .i_rdy(icb_cmd_ready), 
       .i_dat(rsp_rdata),
       .o_vld(icb_rsp_valid), 
       .o_rdy(icb_rsp_ready), 
       .o_dat(icb_rsp_rdata),
     
       .clk  (clk  ),
       .rst_n(rst_n)  
      );
     end
     else begin: no_flop_icb_rsp
          // Directly connect the response channel with the command channel for handshake
       assign icb_rsp_valid = icb_cmd_valid;
       assign icb_cmd_ready = icb_rsp_ready;
       assign icb_rsp_rdata = rsp_rdata;
     end
   endgenerate


/// 控制 claim 和 complete 訊號

   generate 

   for(i=0; i<PLIC_IRQ_NUM;i=i+1) begin: claim_complete_gen

     always @* begin:claim_complete
         icb_claim_irq   [i] = 1'b0;
         icb_complete_irq[i] = 1'b0;

                                       // The read data (claimed ID) is equal to the interrupt source ID
         icb_claim_irq   [i] = icb_claim_irq[i] | ((icb_rsp_rdata == i) & icb_cmd_sel_clam & icb_cmd_rd_hsked);
                                       // The write data (complete ID) is equal to the interrupt source ID
         icb_complete_irq[i] = icb_complete_irq[i] | ((icb_cmd_wdata[PLIC_IRQ_NUM_LOG2-1:0] == i) & icb_cmd_sel_clam & icb_cmd_wr_hsked);

     end

   end
   endgenerate


endmodule
