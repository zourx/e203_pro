// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Ve203_soc_top_verilator.h for the primary calling header

#ifndef _VE203_SOC_TOP_VERILATOR_SIRV_PWM16_TOP_H_
#define _VE203_SOC_TOP_VERILATOR_SIRV_PWM16_TOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Ve203_soc_top_verilator__Syms;
class Ve203_soc_top_verilator_VerilatedVcd;


//----------

VL_MODULE(Ve203_soc_top_verilator_sirv_pwm16_top) {
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
    VL_OUT8(io_interrupts_0_1,0,0);
    VL_OUT8(io_interrupts_0_2,0,0);
    VL_OUT8(io_interrupts_0_3,0,0);
    VL_OUT8(io_gpio_0,0,0);
    VL_OUT8(io_gpio_1,0,0);
    VL_OUT8(io_gpio_2,0,0);
    VL_OUT8(io_gpio_3,0,0);
    VL_IN(i_icb_cmd_addr,31,0);
    VL_IN(i_icb_cmd_wdata,31,0);
    VL_OUT(i_icb_rsp_rdata,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2150;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2151;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2157;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2160;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2161;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2167;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2169;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2209;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2329;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2349;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2369;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__T_2389;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__GEN_72;
        CData/*3:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__scale;
        CData/*4:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196;
        CData/*5:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197;
        CData/*3:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__center;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_216;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__elapsed_0;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_221;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_226;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_231;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__zerocmp;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_259;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_267;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_269;
        CData/*3:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_284;
        CData/*3:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__ip;
        CData/*3:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_288;
        CData/*3:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_301;
        CData/*3:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__gang;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_319;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_323;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot;
        CData/*0:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways;
        SData/*15:0*/ __PVT__u_sirv_pwm16__DOT__T_2130;
        SData/*15:0*/ __PVT__u_sirv_pwm16__DOT__T_2131;
        SData/*15:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_0;
        SData/*15:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_1;
        SData/*15:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_2;
        SData/*15:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_3;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__GEN_92;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__T_2589;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__GEN_103;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__GEN_104;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__GEN_105;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__GEN_106;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__GEN_107;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__GEN_108;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__GEN_109;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_22;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_23;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_24;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_25;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_26;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_27;
        IData/*25:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_28;
        IData/*30:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203;
        IData/*30:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_29;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_30;
        IData/*27:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_11;
    };
    struct {
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_31;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_32;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_33;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_34;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_35;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_36;
        IData/*31:0*/ __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_37;
    };
    
    // INTERNAL VARIABLES
  private:
    Ve203_soc_top_verilator__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Ve203_soc_top_verilator_sirv_pwm16_top);  ///< Copying not allowed
  public:
    Ve203_soc_top_verilator_sirv_pwm16_top(const char* name = "TOP");
    ~Ve203_soc_top_verilator_sirv_pwm16_top();
    
    // INTERNAL METHODS
    void __Vconfigure(Ve203_soc_top_verilator__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm1_top__3(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm1_top__5(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm2_top__4(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm2_top__6(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm1_top__1(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm2_top__2(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
