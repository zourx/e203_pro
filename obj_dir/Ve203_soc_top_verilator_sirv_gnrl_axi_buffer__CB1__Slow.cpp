// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Ve203_soc_top_verilator.h for the primary calling header

#include "Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1.h"
#include "Ve203_soc_top_verilator__Syms.h"

//==========

VL_CTOR_IMP(Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::__Vconfigure(Ve203_soc_top_verilator__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::~Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1() {
}

void Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__1(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__1\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__i_axi_w_chnl = (((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[3U])) 
                                  << 5U) | (QData)((IData)(
                                                           (1U 
                                                            | (0x1eU 
                                                               & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wmask[1U] 
                                                                   << 0x15U) 
                                                                  | (0x1ffffeU 
                                                                     & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wmask[0U] 
                                                                        >> 0xbU))))))));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((- (QData)((IData)((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r))))) 
           & this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r
           [0U]);
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__mux_rdat 
           | ((- (QData)((IData)((1U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                                        >> 1U))))) 
              & this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r
              [1U]));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((- (QData)((IData)((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r))))) 
           & this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r
           [0U]);
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = (this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__mux_rdat 
           | ((- (QData)((IData)((1U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                                        >> 1U))))) 
              & this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r
              [1U]));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((- (QData)((IData)((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r))))) 
           & this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r
           [0U]);
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
           | ((- (QData)((IData)((1U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                                        >> 1U))))) 
              & this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r
              [1U]));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((- (IData)((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r)))) 
           & this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r
           [0U]);
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__mux_rdat) 
           | ((- (IData)((1U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                                >> 1U)))) & this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r
              [1U]));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((- (QData)((IData)((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r))))) 
           & this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r
           [0U]);
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
           | ((- (QData)((IData)((1U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                                        >> 1U))))) 
              & this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r
              [1U]));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren 
        = (3U & (((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__i_icb_rsp_read) 
                            & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready 
                               >> 3U))));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren 
        = (1U & (((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & ((~ (IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__i_icb_rsp_read)) 
                            & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready 
                               >> 3U))));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__ren 
        = (1U & (((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & (~ (1U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                     >> 2U)))));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen 
        = (1U & (((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & (~ (1U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                     >> 2U)))));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen 
        = (1U & (((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read) 
                  >> 3U) & (~ (1U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r) 
                                     >> 2U)))));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__ren 
        = (1U & (((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & (~ (1U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                                     >> 2U)))));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen 
        = (1U & (((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & (~ (1U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                                     >> 2U)))));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen 
        = (1U & (((((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                     >> 3U) & (~ (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read 
                                  >> 3U))) & (~ (1U 
                                                 & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                                    >> 2U)))) 
                  & (~ ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_rw_fifo__DOT__dp_gt0__DOT__vec_r) 
                        >> 1U))) & (~ (1U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 2U)))));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen 
        = (1U & (((((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                     >> 3U) & (~ (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read 
                                  >> 3U))) & (~ (1U 
                                                 & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r) 
                                                    >> 2U)))) 
                  & (~ ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_rw_fifo__DOT__dp_gt0__DOT__vec_r) 
                        >> 1U))) & (~ (1U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 2U)))));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (7U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | (6U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                 << 1U))) : ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 1U)));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen) 
              & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | (0xfffffffeU & (((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen) 
                              << 1U) & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (7U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | (6U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r) 
                                 << 1U))) : ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 1U)));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen) 
              & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r)));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | (0xfffffffeU & (((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen) 
                              << 1U) & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r))));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (7U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | (6U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                                 << 1U))) : ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 1U)));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen) 
              & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r)));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | (0xfffffffeU & (((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen) 
                              << 1U) & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r))));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_en 
        = (1U & ((3U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r) 
                        >> 1U)) ^ (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (7U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | (6U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r) 
                                 << 1U))) : ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 1U)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen) 
              & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | (0xfffffffeU & (((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen) 
                              << 1U) & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r))));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (7U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | (6U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                 << 1U))) : ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 1U)));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen) 
              & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | (0xfffffffeU & (((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen) 
                              << 1U) & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))));
}

void Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__2(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__2\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__i_axi_w_chnl = (((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_wdata[3U])) 
                                  << 5U) | (QData)((IData)(
                                                           (1U 
                                                            | (0x1eU 
                                                               & ((IData)(
                                                                          (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_wmask 
                                                                           >> 0xcU)) 
                                                                  << 1U))))));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((- (QData)((IData)((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r))))) 
           & this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r
           [0U]);
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__mux_rdat 
           | ((- (QData)((IData)((1U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                                        >> 1U))))) 
              & this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r
              [1U]));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((- (QData)((IData)((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r))))) 
           & this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r
           [0U]);
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = (this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__mux_rdat 
           | ((- (QData)((IData)((1U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                                        >> 1U))))) 
              & this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r
              [1U]));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((- (QData)((IData)((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r))))) 
           & this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r
           [0U]);
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
           | ((- (QData)((IData)((1U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                                        >> 1U))))) 
              & this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r
              [1U]));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((- (IData)((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r)))) 
           & this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r
           [0U]);
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__mux_rdat) 
           | ((- (IData)((1U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                                >> 1U)))) & this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r
              [1U]));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = ((- (QData)((IData)((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r))))) 
           & this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r
           [0U]);
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
        = (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__mux_rdat 
           | ((- (QData)((IData)((1U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r) 
                                        >> 1U))))) 
              & this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r
              [1U]));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren 
        = (3U & (((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__i_icb_rsp_read) 
                            & ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_rsp_ready) 
                               >> 3U))));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren 
        = (1U & (((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & ((~ (IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__i_icb_rsp_read)) 
                            & ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_rsp_ready) 
                               >> 3U))));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__ren 
        = (1U & (((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & (~ (1U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                     >> 2U)))));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen 
        = (1U & (((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & (~ (1U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                     >> 2U)))));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen 
        = (1U & ((((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_valid) 
                   & (IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_read)) 
                  >> 3U) & (~ (1U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r) 
                                     >> 2U)))));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__ren 
        = (1U & (((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & (~ (1U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                                     >> 2U)))));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen 
        = (1U & (((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & (~ (1U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                                     >> 2U)))));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen 
        = (1U & ((((((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_valid) 
                     >> 3U) & (~ ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_read) 
                                  >> 3U))) & (~ (1U 
                                                 & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                                    >> 2U)))) 
                  & (~ (1U & ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_rw_fifo__DOT__dp_gt0__DOT__vec_r) 
                              >> 4U)))) & (~ (1U & 
                                              ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r) 
                                               >> 2U)))));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen 
        = (1U & ((((((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_valid) 
                     >> 3U) & (~ ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_read) 
                                  >> 3U))) & (~ (1U 
                                                 & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r) 
                                                    >> 2U)))) 
                  & (~ (1U & ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_rw_fifo__DOT__dp_gt0__DOT__vec_r) 
                              >> 4U)))) & (~ (1U & 
                                              ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                               >> 2U)))));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (7U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | (6U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                 << 1U))) : ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 1U)));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen) 
              & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | (0xfffffffeU & (((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen) 
                              << 1U) & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (7U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | (6U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r) 
                                 << 1U))) : ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 1U)));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen) 
              & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r)));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | (0xfffffffeU & (((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen) 
                              << 1U) & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r))));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (7U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | (6U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                                 << 1U))) : ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 1U)));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen) 
              & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r)));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | (0xfffffffeU & (((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen) 
                              << 1U) & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r))));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_en 
        = (1U & ((3U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r) 
                        >> 1U)) ^ (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (7U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | (6U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r) 
                                 << 1U))) : ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 1U)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen) 
              & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | (0xfffffffeU & (((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen) 
                              << 1U) & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r))));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (7U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | (6U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                 << 1U))) : ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                                             >> 1U)));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen) 
              & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en)) 
           | (0xfffffffeU & (((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen) 
                              << 1U) & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))));
}

void Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_ctor_var_reset\n"); );
    // Body
    i_axi_arvalid = VL_RAND_RESET_I(1);
    i_axi_arready = VL_RAND_RESET_I(1);
    i_axi_araddr = VL_RAND_RESET_I(32);
    i_axi_arcache = VL_RAND_RESET_I(4);
    i_axi_arprot = VL_RAND_RESET_I(3);
    i_axi_arlock = VL_RAND_RESET_I(2);
    i_axi_arburst = VL_RAND_RESET_I(2);
    i_axi_arlen = VL_RAND_RESET_I(4);
    i_axi_arsize = VL_RAND_RESET_I(3);
    i_axi_awvalid = VL_RAND_RESET_I(1);
    i_axi_awready = VL_RAND_RESET_I(1);
    i_axi_awaddr = VL_RAND_RESET_I(32);
    i_axi_awcache = VL_RAND_RESET_I(4);
    i_axi_awprot = VL_RAND_RESET_I(3);
    i_axi_awlock = VL_RAND_RESET_I(2);
    i_axi_awburst = VL_RAND_RESET_I(2);
    i_axi_awlen = VL_RAND_RESET_I(4);
    i_axi_awsize = VL_RAND_RESET_I(3);
    i_axi_rvalid = VL_RAND_RESET_I(1);
    i_axi_rready = VL_RAND_RESET_I(1);
    i_axi_rdata = VL_RAND_RESET_I(32);
    i_axi_rresp = VL_RAND_RESET_I(2);
    i_axi_rlast = VL_RAND_RESET_I(1);
    i_axi_wvalid = VL_RAND_RESET_I(1);
    i_axi_wready = VL_RAND_RESET_I(1);
    i_axi_wdata = VL_RAND_RESET_I(32);
    i_axi_wstrb = VL_RAND_RESET_I(4);
    i_axi_wlast = VL_RAND_RESET_I(1);
    i_axi_bvalid = VL_RAND_RESET_I(1);
    i_axi_bready = VL_RAND_RESET_I(1);
    i_axi_bresp = VL_RAND_RESET_I(2);
    o_axi_arvalid = VL_RAND_RESET_I(1);
    o_axi_arready = VL_RAND_RESET_I(1);
    o_axi_araddr = VL_RAND_RESET_I(32);
    o_axi_arcache = VL_RAND_RESET_I(4);
    o_axi_arprot = VL_RAND_RESET_I(3);
    o_axi_arlock = VL_RAND_RESET_I(2);
    o_axi_arburst = VL_RAND_RESET_I(2);
    o_axi_arlen = VL_RAND_RESET_I(4);
    o_axi_arsize = VL_RAND_RESET_I(3);
    o_axi_awvalid = VL_RAND_RESET_I(1);
    o_axi_awready = VL_RAND_RESET_I(1);
    o_axi_awaddr = VL_RAND_RESET_I(32);
    o_axi_awcache = VL_RAND_RESET_I(4);
    o_axi_awprot = VL_RAND_RESET_I(3);
    o_axi_awlock = VL_RAND_RESET_I(2);
    o_axi_awburst = VL_RAND_RESET_I(2);
    o_axi_awlen = VL_RAND_RESET_I(4);
    o_axi_awsize = VL_RAND_RESET_I(3);
    o_axi_rvalid = VL_RAND_RESET_I(1);
    o_axi_rready = VL_RAND_RESET_I(1);
    o_axi_rdata = VL_RAND_RESET_I(32);
    o_axi_rresp = VL_RAND_RESET_I(2);
    o_axi_rlast = VL_RAND_RESET_I(1);
    o_axi_wvalid = VL_RAND_RESET_I(1);
    o_axi_wready = VL_RAND_RESET_I(1);
    o_axi_wdata = VL_RAND_RESET_I(32);
    o_axi_wstrb = VL_RAND_RESET_I(4);
    o_axi_wlast = VL_RAND_RESET_I(1);
    o_axi_bvalid = VL_RAND_RESET_I(1);
    o_axi_bready = VL_RAND_RESET_I(1);
    o_axi_bresp = VL_RAND_RESET_I(2);
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    __PVT__i_axi_w_chnl = VL_RAND_RESET_Q(37);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r[__Vi0] = VL_RAND_RESET_Q(50);
    }}
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en = VL_RAND_RESET_I(2);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen = VL_RAND_RESET_I(1);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__ren = VL_RAND_RESET_I(1);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt = VL_RAND_RESET_I(2);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt = VL_RAND_RESET_I(2);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_nxt = VL_RAND_RESET_I(3);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r = VL_RAND_RESET_I(3);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_en = VL_RAND_RESET_I(1);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__mux_rdat = VL_RAND_RESET_Q(50);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r = VL_RAND_RESET_Q(50);
    __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r = VL_RAND_RESET_Q(50);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r[__Vi0] = VL_RAND_RESET_Q(50);
    }}
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en = VL_RAND_RESET_I(2);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen = VL_RAND_RESET_I(1);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt = VL_RAND_RESET_I(2);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt = VL_RAND_RESET_I(2);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_nxt = VL_RAND_RESET_I(3);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r = VL_RAND_RESET_I(3);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_en = VL_RAND_RESET_I(1);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__mux_rdat = VL_RAND_RESET_Q(50);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r = VL_RAND_RESET_Q(50);
    __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r = VL_RAND_RESET_Q(50);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[__Vi0] = VL_RAND_RESET_Q(37);
    }}
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en = VL_RAND_RESET_I(2);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen = VL_RAND_RESET_I(1);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__ren = VL_RAND_RESET_I(1);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt = VL_RAND_RESET_I(2);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt = VL_RAND_RESET_I(2);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_nxt = VL_RAND_RESET_I(3);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r = VL_RAND_RESET_I(3);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_en = VL_RAND_RESET_I(1);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__mux_rdat = VL_RAND_RESET_Q(37);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r = VL_RAND_RESET_Q(37);
    __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r = VL_RAND_RESET_Q(37);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[__Vi0] = VL_RAND_RESET_Q(35);
    }}
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en = VL_RAND_RESET_I(2);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen = VL_RAND_RESET_I(1);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren = VL_RAND_RESET_I(1);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt = VL_RAND_RESET_I(2);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt = VL_RAND_RESET_I(2);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_nxt = VL_RAND_RESET_I(3);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r = VL_RAND_RESET_I(3);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_en = VL_RAND_RESET_I(1);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__mux_rdat = VL_RAND_RESET_Q(35);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r = VL_RAND_RESET_Q(35);
    __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r = VL_RAND_RESET_Q(35);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[__Vi0] = VL_RAND_RESET_I(2);
    }}
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en = VL_RAND_RESET_I(2);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen = VL_RAND_RESET_I(1);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren = VL_RAND_RESET_I(1);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt = VL_RAND_RESET_I(2);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt = VL_RAND_RESET_I(2);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_nxt = VL_RAND_RESET_I(3);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r = VL_RAND_RESET_I(3);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_en = VL_RAND_RESET_I(1);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__mux_rdat = VL_RAND_RESET_I(2);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r = VL_RAND_RESET_I(2);
    __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r = VL_RAND_RESET_I(2);
}
