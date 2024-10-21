// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Ve203_soc_top_verilator.h for the primary calling header

#ifndef _VE203_SOC_TOP_VERILATOR_SIRV_ASYNCRESETREGVEC_67_H_
#define _VE203_SOC_TOP_VERILATOR_SIRV_ASYNCRESETREGVEC_67_H_  // guard

#include "verilated_heavy.h"

//==========

class Ve203_soc_top_verilator__Syms;
class Ve203_soc_top_verilator_VerilatedVcd;


//----------

VL_MODULE(Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67) {
  public:
    
    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_en,0,0);
    VL_IN(io_d,31,0);
    VL_OUT(io_q,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__reg_0_q;
    CData/*0:0*/ __PVT__reg_1_q;
    CData/*0:0*/ __PVT__reg_2_q;
    CData/*0:0*/ __PVT__reg_3_q;
    CData/*0:0*/ __PVT__reg_4_q;
    CData/*0:0*/ __PVT__reg_5_q;
    CData/*0:0*/ __PVT__reg_6_q;
    CData/*0:0*/ __PVT__reg_7_q;
    CData/*0:0*/ __PVT__reg_8_q;
    CData/*0:0*/ __PVT__reg_9_q;
    CData/*0:0*/ __PVT__reg_10_q;
    CData/*0:0*/ __PVT__reg_11_q;
    CData/*0:0*/ __PVT__reg_12_q;
    CData/*0:0*/ __PVT__reg_13_q;
    CData/*0:0*/ __PVT__reg_14_q;
    CData/*0:0*/ __PVT__reg_15_q;
    CData/*0:0*/ __PVT__reg_16_q;
    CData/*0:0*/ __PVT__reg_17_q;
    CData/*0:0*/ __PVT__reg_18_q;
    CData/*0:0*/ __PVT__reg_19_q;
    CData/*0:0*/ __PVT__reg_20_q;
    CData/*0:0*/ __PVT__reg_21_q;
    CData/*0:0*/ __PVT__reg_22_q;
    CData/*0:0*/ __PVT__reg_23_q;
    CData/*0:0*/ __PVT__reg_24_q;
    CData/*0:0*/ __PVT__reg_25_q;
    CData/*0:0*/ __PVT__reg_26_q;
    CData/*0:0*/ __PVT__reg_27_q;
    CData/*0:0*/ __PVT__reg_28_q;
    CData/*0:0*/ __PVT__reg_29_q;
    CData/*0:0*/ __PVT__reg_30_q;
    CData/*0:0*/ __PVT__reg_31_q;
    IData/*31:0*/ __PVT__T_70;
    
    // INTERNAL VARIABLES
  private:
    Ve203_soc_top_verilator__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67);  ///< Copying not allowed
  public:
    Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67(const char* name = "TOP");
    ~Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67();
    
    // INTERNAL METHODS
    void __Vconfigure(Ve203_soc_top_verilator__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_ieReg__6(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_iofEnReg__3(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_oeReg__4(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_pueReg__5(Ve203_soc_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_ieReg__2(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
