// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Ve203_soc_top_verilator.h for the primary calling header

#ifndef _VE203_SOC_TOP_VERILATOR_SIRV_GNRL_AXI_BUFFER__CB1_H_
#define _VE203_SOC_TOP_VERILATOR_SIRV_GNRL_AXI_BUFFER__CB1_H_  // guard

#include "verilated_heavy.h"

//==========

class Ve203_soc_top_verilator__Syms;
class Ve203_soc_top_verilator_VerilatedVcd;


//----------

VL_MODULE(Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(i_axi_arvalid,0,0);
    VL_OUT8(i_axi_arready,0,0);
    VL_IN8(i_axi_arcache,3,0);
    VL_IN8(i_axi_arprot,2,0);
    VL_IN8(i_axi_arlock,1,0);
    VL_IN8(i_axi_arburst,1,0);
    VL_IN8(i_axi_arlen,3,0);
    VL_IN8(i_axi_arsize,2,0);
    VL_IN8(i_axi_awvalid,0,0);
    VL_OUT8(i_axi_awready,0,0);
    VL_IN8(i_axi_awcache,3,0);
    VL_IN8(i_axi_awprot,2,0);
    VL_IN8(i_axi_awlock,1,0);
    VL_IN8(i_axi_awburst,1,0);
    VL_IN8(i_axi_awlen,3,0);
    VL_IN8(i_axi_awsize,2,0);
    VL_OUT8(i_axi_rvalid,0,0);
    VL_IN8(i_axi_rready,0,0);
    VL_OUT8(i_axi_rresp,1,0);
    VL_OUT8(i_axi_rlast,0,0);
    VL_IN8(i_axi_wvalid,0,0);
    VL_OUT8(i_axi_wready,0,0);
    VL_IN8(i_axi_wstrb,3,0);
    VL_IN8(i_axi_wlast,0,0);
    VL_OUT8(i_axi_bvalid,0,0);
    VL_IN8(i_axi_bready,0,0);
    VL_OUT8(i_axi_bresp,1,0);
    VL_OUT8(o_axi_arvalid,0,0);
    VL_IN8(o_axi_arready,0,0);
    VL_OUT8(o_axi_arcache,3,0);
    VL_OUT8(o_axi_arprot,2,0);
    VL_OUT8(o_axi_arlock,1,0);
    VL_OUT8(o_axi_arburst,1,0);
    VL_OUT8(o_axi_arlen,3,0);
    VL_OUT8(o_axi_arsize,2,0);
    VL_OUT8(o_axi_awvalid,0,0);
    VL_IN8(o_axi_awready,0,0);
    VL_OUT8(o_axi_awcache,3,0);
    VL_OUT8(o_axi_awprot,2,0);
    VL_OUT8(o_axi_awlock,1,0);
    VL_OUT8(o_axi_awburst,1,0);
    VL_OUT8(o_axi_awlen,3,0);
    VL_OUT8(o_axi_awsize,2,0);
    VL_IN8(o_axi_rvalid,0,0);
    VL_OUT8(o_axi_rready,0,0);
    VL_IN8(o_axi_rresp,1,0);
    VL_IN8(o_axi_rlast,0,0);
    VL_OUT8(o_axi_wvalid,0,0);
    VL_IN8(o_axi_wready,0,0);
    VL_OUT8(o_axi_wstrb,3,0);
    VL_OUT8(o_axi_wlast,0,0);
    VL_IN8(o_axi_bvalid,0,0);
    VL_OUT8(o_axi_bready,0,0);
    VL_IN8(o_axi_bresp,1,0);
    VL_IN(i_axi_araddr,31,0);
    VL_IN(i_axi_awaddr,31,0);
    VL_OUT(i_axi_rdata,31,0);
    VL_IN(i_axi_wdata,31,0);
    VL_OUT(o_axi_araddr,31,0);
    VL_OUT(o_axi_awaddr,31,0);
    VL_IN(o_axi_rdata,31,0);
    VL_OUT(o_axi_wdata,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_en;
        CData/*0:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wen;
        CData/*0:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__ren;
        CData/*1:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt;
        CData/*1:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_r;
        CData/*1:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt;
        CData/*1:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_r;
        CData/*2:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_nxt;
        CData/*2:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_r;
        CData/*0:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_en;
        CData/*0:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r;
        CData/*1:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r;
        CData/*1:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_en;
        CData/*0:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wen;
        CData/*1:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt;
        CData/*1:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_r;
        CData/*1:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt;
        CData/*1:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_r;
        CData/*2:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_nxt;
        CData/*2:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_r;
        CData/*0:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_en;
        CData/*0:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r;
        CData/*1:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r;
        CData/*1:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en;
        CData/*0:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wen;
        CData/*0:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__ren;
        CData/*1:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt;
        CData/*1:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r;
        CData/*1:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt;
        CData/*1:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r;
        CData/*2:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_nxt;
        CData/*2:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_r;
        CData/*0:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_en;
        CData/*0:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r;
        CData/*1:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r;
        CData/*1:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_en;
        CData/*0:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wen;
        CData/*0:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__ren;
        CData/*1:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt;
        CData/*1:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_r;
        CData/*1:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt;
        CData/*1:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_r;
        CData/*2:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_nxt;
        CData/*2:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_r;
        CData/*0:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_en;
        CData/*0:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r;
        CData/*1:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r;
        CData/*1:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_en;
    };
    struct {
        CData/*0:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wen;
        CData/*0:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__ren;
        CData/*1:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_nxt;
        CData/*1:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_r;
        CData/*1:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_nxt;
        CData/*1:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_r;
        CData/*2:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_nxt;
        CData/*2:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_r;
        CData/*0:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_en;
        CData/*1:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__mux_rdat;
        CData/*0:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__rptr_vec_31_dfflr__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__dp_gt1__DOT__wptr_vec_31_dfflr__DOT__qout_r;
        CData/*0:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r;
        CData/*1:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r;
        CData/*1:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
        CData/*1:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
        QData/*36:0*/ __PVT__i_axi_w_chnl;
        QData/*49:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__mux_rdat;
        QData/*49:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
        QData/*49:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
        QData/*49:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__mux_rdat;
        QData/*49:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
        QData/*49:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
        QData/*36:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__mux_rdat;
        QData/*36:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
        QData/*36:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
        QData/*34:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__mux_rdat;
        QData/*34:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
        QData/*34:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__1__KET____DOT__fifo_rf_dffl__DOT__qout_r;
        QData/*49:0*/ __PVT__o_axi_ar_fifo__DOT__dp_gt0__DOT__fifo_rf_r[2];
        QData/*49:0*/ __PVT__o_axi_aw_fifo__DOT__dp_gt0__DOT__fifo_rf_r[2];
        QData/*36:0*/ __PVT__o_axi_wdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[2];
        QData/*34:0*/ __PVT__o_axi_rdata_fifo__DOT__dp_gt0__DOT__fifo_rf_r[2];
        CData/*1:0*/ __PVT__o_axi_bresp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[2];
    };
    
    // INTERNAL VARIABLES
  private:
    Ve203_soc_top_verilator__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1);  ///< Copying not allowed
  public:
    Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1(const char* name = "TOP");
    ~Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1();
    
    // INTERNAL METHODS
    void __Vconfigure(Ve203_soc_top_verilator__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__4(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__6(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__3(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__5(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__7(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__2(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer__1(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
