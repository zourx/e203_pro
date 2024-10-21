// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Ve203_soc_top_verilator.h for the primary calling header

#include "Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1.h"
#include "Ve203_soc_top_verilator__Syms.h"

//==========

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__3(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__3\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = this->__PVT__i_axi_w_chnl;
    }
    if ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = this->__PVT__i_axi_w_chnl;
    }
    if ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r = 0U;
    }
    if ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r = 0U;
    }
    if ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r = 1ULL;
    }
    if ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r = 1ULL;
    }
    if ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = (2ULL | ((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[3U])) 
                       << 0x12U));
    }
    if ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = (2ULL | ((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[3U])) 
                       << 0x12U));
    }
    if ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = (2ULL | ((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[3U])) 
                       << 0x12U));
    }
    if ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = (2ULL | ((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[3U])) 
                       << 0x12U));
    }
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__5(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__5\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r))) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r))) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r 
                = (3U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_nxt));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r 
                = (3U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_nxt));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r 
                = (3U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_nxt));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r 
                = (3U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_nxt));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r 
                = (3U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_nxt));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = 1U;
    }
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
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
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
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
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren 
        = (1U & (((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & ((~ (IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__i_icb_rsp_read)) 
                            & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready 
                               >> 3U))));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren 
        = (3U & (((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__i_icb_rsp_read) 
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

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__7(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__7\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__i_axi_w_chnl = (((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[3U])) 
                                  << 5U) | (QData)((IData)(
                                                           (1U 
                                                            | (0x1eU 
                                                               & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wmask[1U] 
                                                                   << 0x15U) 
                                                                  | (0x1ffffeU 
                                                                     & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wmask[0U] 
                                                                        >> 0xbU))))))));
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__4(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__4\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = this->__PVT__i_axi_w_chnl;
    }
    if ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = this->__PVT__i_axi_w_chnl;
    }
    if ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r = 0U;
    }
    if ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r = 0U;
    }
    if ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r = 1ULL;
    }
    if ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r = 1ULL;
    }
    if ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = (2ULL | ((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_addr[3U])) 
                       << 0x12U));
    }
    if ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = (2ULL | ((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_addr[3U])) 
                       << 0x12U));
    }
    if ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = (2ULL | ((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_addr[3U])) 
                       << 0x12U));
    }
    if ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en))) {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r 
            = (2ULL | ((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_addr[3U])) 
                       << 0x12U));
    }
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r[1U] 
        = this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__6(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__6\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__i_axi_w_chnl = (((QData)((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_wdata[3U])) 
                                  << 5U) | (QData)((IData)(
                                                           (1U 
                                                            | (0x1eU 
                                                               & ((IData)(
                                                                          (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_cmd_wmask 
                                                                           >> 0xcU)) 
                                                                  << 1U))))));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r))) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r 
                = (1U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r))) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r 
                = (3U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_nxt));
        }
    } else {
        this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r 
                = (3U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_nxt));
        }
    } else {
        this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r 
                = (3U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_nxt));
        }
    } else {
        this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r 
                = (3U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_nxt));
        }
    } else {
        this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r 
                = (3U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                         >> 1U));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_en) {
            this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r 
                = (1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_nxt));
        }
    } else {
        this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r = 1U;
    }
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((1U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
              << 1U));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r 
        = ((6U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r)) 
           | (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r));
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
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
                          << 1U)));
    this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt 
        = ((2U & (IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r))
            ? 1U : (3U & ((IData)(this->__PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r) 
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
    this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren 
        = (1U & (((IData)(this->__PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & ((~ (IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__i_icb_rsp_read)) 
                            & ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_sirv_mem_fab__DOT__splt_bus_icb_rsp_ready) 
                               >> 3U))));
    this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren 
        = (3U & (((IData)(this->__PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r) 
                  >> 1U) & ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__i_icb_rsp_read) 
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
