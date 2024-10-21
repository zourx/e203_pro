// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VE203_SOC_TOP_VERILATOR__SYMS_H_
#define _VE203_SOC_TOP_VERILATOR__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Ve203_soc_top_verilator.h"
#include "Ve203_soc_top_verilator_sirv_pwm16_top.h"
#include "Ve203_soc_top_verilator_sirv_uart_top.h"
#include "Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1.h"
#include "Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67.h"

// SYMS CLASS
class Ve203_soc_top_verilator__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Ve203_soc_top_verilator*       TOPp;
    Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1 TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_mems__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer;
    Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1 TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_expl_axi_icb2axi__DOT__u_sirv_gnrl_axi_buffer;
    Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67 TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_ieReg;
    Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67 TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_iofEnReg;
    Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67 TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_oeReg;
    Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67 TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_pueReg;
    Ve203_soc_top_verilator_sirv_pwm16_top TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm1_top;
    Ve203_soc_top_verilator_sirv_pwm16_top TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm2_top;
    Ve203_soc_top_verilator_sirv_uart_top TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top;
    Ve203_soc_top_verilator_sirv_uart_top TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top;
    
    // CREATORS
    Ve203_soc_top_verilator__Syms(Ve203_soc_top_verilator* topp, const char* namep);
    ~Ve203_soc_top_verilator__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
