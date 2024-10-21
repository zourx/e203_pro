// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Ve203_soc_top_verilator.h for the primary calling header

#ifndef _VE203_SOC_TOP_VERILATOR_SIRV_UART_TOP_H_
#define _VE203_SOC_TOP_VERILATOR_SIRV_UART_TOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Ve203_soc_top_verilator__Syms;
class Ve203_soc_top_verilator_VerilatedVcd;


//----------

VL_MODULE(Ve203_soc_top_verilator_sirv_uart_top) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(i_icb_cmd_valid,0,0);
    VL_OUT8(i_icb_cmd_ready,0,0);
    VL_IN8(i_icb_cmd_read,0,0);
    VL_OUT8(i_icb_rsp_valid,0,0);
    VL_IN8(i_icb_rsp_ready,0,0);
    VL_OUT8(io_interrupts_0_0,0,0);
    VL_OUT8(io_port_txd,0,0);
    VL_IN8(io_port_rxd,0,0);
    VL_IN(i_icb_cmd_addr,31,0);
    VL_IN(i_icb_cmd_wdata,31,0);
    VL_OUT(i_icb_rsp_rdata,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__txen;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__rxen;
        CData/*3:0*/ __PVT__u_sirv_uart__DOT__txwm;
        CData/*3:0*/ __PVT__u_sirv_uart__DOT__rxwm;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__nstop;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__ie_rxwm;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__ie_txwm;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__T_916;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__T_917;
        CData/*7:0*/ __PVT__u_sirv_uart__DOT__T_2181;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__T_2192;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__T_2193;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__T_2199;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__T_2202;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__T_2203;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__T_2209;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__T_2251;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__T_2271;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__T_2291;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__GEN_47;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__pulse;
        CData/*3:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__counter;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__out;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__T_33;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__T_34;
        CData/*3:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__T_50;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__T_56;
        CData/*3:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__T_59;
        CData/*2:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__T_27;
        CData/*2:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__T_29;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__empty;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__full;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__T_33;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__T_34;
        CData/*2:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__T_40;
        CData/*2:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__T_45;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__T_46;
        CData/*1:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_25;
        CData/*2:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__sample;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35;
        CData/*3:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_2;
        CData/*4:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__timer;
        CData/*3:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__counter;
        CData/*7:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__expire;
        CData/*4:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45;
        CData/*4:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_4;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__valid;
        CData/*1:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__state;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_57;
        CData/*1:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_60;
        CData/*1:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_65;
        CData/*1:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24;
        CData/*1:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_25;
        CData/*3:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_26;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_74;
        CData/*3:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_78;
    };
    struct {
        CData/*7:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_85;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41;
        CData/*2:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27;
        CData/*2:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__empty;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34;
        CData/*2:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_40;
        CData/*2:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_45;
        CData/*0:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_46;
        SData/*15:0*/ __PVT__u_sirv_uart__DOT__div;
        SData/*15:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler;
        SData/*8:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__shifter;
        SData/*15:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__T_54;
        SData/*8:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__T_62;
        SData/*11:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler;
        SData/*11:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_24;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__GEN_76;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__GEN_77;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__GEN_78;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__GEN_79;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__GEN_80;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__GEN_81;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__GEN_82;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__GEN_83;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__GEN_55;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__GEN_6;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__GEN_7;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__GEN_8;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_txm__DOT__GEN_9;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__GEN_0;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__GEN_1;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__GEN_2;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__GEN_3;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_7;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_20;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_23;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_28;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_43;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_44;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_45;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_46;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__GEN_0;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__GEN_1;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__GEN_2;
        IData/*31:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__GEN_3;
        CData/*7:0*/ __PVT__u_sirv_uart__DOT__u_txq__DOT__ram[8];
        CData/*7:0*/ __PVT__u_sirv_uart__DOT__u_rxq__DOT__ram[8];
    };
    
    // LOCAL VARIABLES
    CData/*2:0*/ __Vdlyvdim0__u_sirv_uart__DOT__u_txq__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__u_sirv_uart__DOT__u_txq__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__u_sirv_uart__DOT__u_txq__DOT__ram__v0;
    CData/*1:0*/ __Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce;
    CData/*3:0*/ __Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter;
    CData/*2:0*/ __Vdlyvdim0__u_sirv_uart__DOT__u_rxq__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__u_sirv_uart__DOT__u_rxq__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__u_sirv_uart__DOT__u_rxq__DOT__ram__v0;
    
    // INTERNAL VARIABLES
  private:
    Ve203_soc_top_verilator__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Ve203_soc_top_verilator_sirv_uart_top);  ///< Copying not allowed
  public:
    Ve203_soc_top_verilator_sirv_uart_top(const char* name = "TOP");
    ~Ve203_soc_top_verilator_sirv_uart_top();
    
    // INTERNAL METHODS
    void __Vconfigure(Ve203_soc_top_verilator__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__3(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__5(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__7(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__9(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__10(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__4(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__6(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__1(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__2(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
