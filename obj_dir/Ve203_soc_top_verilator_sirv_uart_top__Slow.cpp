// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Ve203_soc_top_verilator.h for the primary calling header

#include "Ve203_soc_top_verilator_sirv_uart_top.h"
#include "Ve203_soc_top_verilator__Syms.h"

//==========

VL_CTOR_IMP(Ve203_soc_top_verilator_sirv_uart_top) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Ve203_soc_top_verilator_sirv_uart_top::__Vconfigure(Ve203_soc_top_verilator__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Ve203_soc_top_verilator_sirv_uart_top::~Ve203_soc_top_verilator_sirv_uart_top() {
}

void Ve203_soc_top_verilator_sirv_uart_top::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__1(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_uart_top::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__1\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__pulse 
        = (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_54 
        = (0xffffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler) 
                      - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_24 
        = (0xfffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler) 
                     - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45 
        = (0x1fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer) 
                    - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_45 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_50 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__nstop)
             ? 0U : 0xaU) | ((IData)(this->__PVT__u_sirv_uart__DOT__nstop)
                              ? 0xbU : 0U));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_59 
        = (0xfU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter) 
                   - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_62 
        = (0x100U | (0xffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter) 
                              >> 1U)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_40 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27)));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_40 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_56 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler)) 
           & (0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__txen) 
           & (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter)));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27) 
           == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35 
        = (1U & (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                  & (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                      >> 1U) | ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                >> 2U))) | (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                             >> 1U) 
                                            & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                               >> 2U))));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_45 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50 
        = (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_60 
        = (3U & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce) 
                 - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_65 
        = (3U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68 
        = (1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_74 
        = (2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_78 
        = (0xfU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter) 
                   - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36 
        = ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)) 
           | (1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27) 
           == (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_57 
        = ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
            >> 0x10U) & (0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))
            ? ((0x10000U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg)
                ? (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)
                : ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))
                    ? 1U : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)))
            : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__T_2192 = (1U & (
                                                   (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                    & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                                   >> 0xcU));
    this->__PVT__u_sirv_uart__DOT__T_2202 = (1U & (
                                                   (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                    & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                                   >> 0xcU));
    this->__PVT__u_sirv_uart__DOT__T_2181 = (((IData)(1U) 
                                              << (7U 
                                                  & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                        >> 2U)))) 
                                             & (0x80U 
                                                | ((((0U 
                                                      == 
                                                      (0x3f8U 
                                                       & (6U 
                                                          ^ 
                                                          ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                              >> 2U))))) 
                                                     << 6U) 
                                                    | (((0U 
                                                         == 
                                                         (0x3f8U 
                                                          & (5U 
                                                             ^ 
                                                             ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                                 >> 2U))))) 
                                                        << 5U) 
                                                       | ((0U 
                                                           == 
                                                           (0x3f8U 
                                                            & (4U 
                                                               ^ 
                                                               ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                                   >> 2U))))) 
                                                          << 4U))) 
                                                   | ((((0U 
                                                         == 
                                                         (0x3f8U 
                                                          & (3U 
                                                             ^ 
                                                             ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                                 >> 2U))))) 
                                                        << 3U) 
                                                       | ((0U 
                                                           == 
                                                           (0x3f8U 
                                                            & (2U 
                                                               ^ 
                                                               ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                                   >> 2U))))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           == 
                                                           (0x3f8U 
                                                            & (1U 
                                                               ^ 
                                                               ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                                   >> 2U))))) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (0x3f8U 
                                                             & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                                   >> 2U)))))))));
    this->__PVT__u_sirv_uart__DOT__GEN_47 = ((6U == 
                                              (7U & 
                                               ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                 << 0x1eU) 
                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                   >> 2U))))
                                              ? (0U 
                                                 == 
                                                 (0x3f8U 
                                                  & (6U 
                                                     ^ 
                                                     ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                         >> 2U)))))
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                         >> 2U))))
                                                  ? 
                                                 (0U 
                                                  == 
                                                  (0x3f8U 
                                                   & (5U 
                                                      ^ 
                                                      ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                          >> 2U)))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                          >> 2U))))
                                                   ? 
                                                  (0U 
                                                   == 
                                                   (0x3f8U 
                                                    & (4U 
                                                       ^ 
                                                       ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                           >> 2U)))))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                           >> 2U))))
                                                    ? 
                                                   (0U 
                                                    == 
                                                    (0x3f8U 
                                                     & (3U 
                                                        ^ 
                                                        ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                            >> 2U)))))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                            >> 2U))))
                                                     ? 
                                                    (0U 
                                                     == 
                                                     (0x3f8U 
                                                      & (2U 
                                                         ^ 
                                                         ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                             >> 2U)))))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                             >> 2U))))
                                                      ? 
                                                     (0U 
                                                      == 
                                                      (0x3f8U 
                                                       & (1U 
                                                          ^ 
                                                          ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                              >> 2U)))))
                                                      : 
                                                     (0U 
                                                      == 
                                                      (0x3f8U 
                                                       & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                             >> 2U))))))))));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33 
        = ((~ ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match) 
               & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full))) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__valid));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__empty 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full)));
    this->__PVT__u_sirv_uart__DOT__T_917 = (((((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full) 
                                               & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match)) 
                                              << 3U) 
                                             | (7U 
                                                & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27) 
                                                   - (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29)))) 
                                            > (IData)(this->__PVT__u_sirv_uart__DOT__rxwm));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_85 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) 
            << 7U) | (0x7fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter) 
                               >> 1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler)) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__empty 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__full 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full));
    this->__PVT__u_sirv_uart__DOT__T_916 = (((((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full) 
                                               & (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match)) 
                                              << 3U) 
                                             | (7U 
                                                & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27) 
                                                   - (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29)))) 
                                            < (IData)(this->__PVT__u_sirv_uart__DOT__txwm));
    this->__PVT__u_sirv_uart__DOT__T_2193 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2192) 
                                             & (4U 
                                                == 
                                                ((0x1000U 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                  ? 4U
                                                  : 0U)));
    this->__PVT__u_sirv_uart__DOT__T_2199 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2192) 
                                             & (4U 
                                                != 
                                                ((0x1000U 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                  ? 4U
                                                  : 0U)));
    this->__PVT__u_sirv_uart__DOT__T_2203 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2202) 
                                             & (4U 
                                                == 
                                                ((0x1000U 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                  ? 4U
                                                  : 0U)));
    this->__PVT__u_sirv_uart__DOT__T_2209 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2202) 
                                             & (4U 
                                                != 
                                                ((0x1000U 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                  ? 4U
                                                  : 0U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer)) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_2 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse)
            ? (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                << 1U) | (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                                >> 0x10U))) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_25 
        = (((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)) 
            & ((~ (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                   >> 0x10U)) & (3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce)))) 
           | (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_34 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_34 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__GEN_55 = ((7U == 
                                              (7U & 
                                               ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                 << 0x1eU) 
                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                   >> 2U))))
                                              ? 0U : 
                                             ((6U == 
                                               (7U 
                                                & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                      >> 2U))))
                                               ? (IData)(this->__PVT__u_sirv_uart__DOT__div)
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                          >> 2U))))
                                                   ? 
                                                  (3U 
                                                   & ((IData)(this->__PVT__u_sirv_uart__DOT__T_916) 
                                                      | ((IData)(this->__PVT__u_sirv_uart__DOT__T_917) 
                                                         << 1U)))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                           >> 2U))))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(this->__PVT__u_sirv_uart__DOT__ie_txwm) 
                                                       | ((IData)(this->__PVT__u_sirv_uart__DOT__ie_rxwm) 
                                                          << 1U)))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                            >> 2U))))
                                                     ? 
                                                    (0xfffffU 
                                                     & ((IData)(this->__PVT__u_sirv_uart__DOT__rxen) 
                                                        | ((IData)(this->__PVT__u_sirv_uart__DOT__rxwm) 
                                                           << 0x10U)))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                             >> 2U))))
                                                      ? 
                                                     (0xfffffU 
                                                      & ((3U 
                                                          & ((IData)(this->__PVT__u_sirv_uart__DOT__txen) 
                                                             | ((IData)(this->__PVT__u_sirv_uart__DOT__nstop) 
                                                                << 1U))) 
                                                         | ((IData)(this->__PVT__u_sirv_uart__DOT__txwm) 
                                                            << 0x10U)))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xdU] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xcU] 
                                                              >> 2U))))
                                                       ? 
                                                      (this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ram
                                                       [this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29] 
                                                       | ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__empty) 
                                                          << 0x1fU))
                                                       : 
                                                      ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__full) 
                                                       << 0x1fU))))))));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__T_2203) 
            & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
               >> 1U)) & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__T_2251 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 2U));
    this->__PVT__u_sirv_uart__DOT__T_2271 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 3U));
    this->__PVT__u_sirv_uart__DOT__T_2291 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 4U));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33 
        = ((~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__full)) 
           & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
              & (IData)(this->__PVT__u_sirv_uart__DOT__T_2181)));
    if ((1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_26 
            = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                    ? (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter)
                    : 8U) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter));
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24 
            = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) 
               & 1U);
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_25 
            = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                    ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                        ? 0U : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14))
                    : 2U) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14));
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_26 
            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter;
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24 = 0U;
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_25 
            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_46 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33) 
           != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_46 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33) 
           != (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_34));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41 
        = ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))
            ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter)) 
                   | (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24))
                : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24))
            : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_4 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41)
            ? 0xfU : (0x1fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse)
                                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer) 
                                   - (IData)(1U)) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer))));
}

void Ve203_soc_top_verilator_sirv_uart_top::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__2(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_uart_top::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__2\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__pulse 
        = (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_54 
        = (0xffffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler) 
                      - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_24 
        = (0xfffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler) 
                     - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45 
        = (0x1fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer) 
                    - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_45 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_50 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__nstop)
             ? 0U : 0xaU) | ((IData)(this->__PVT__u_sirv_uart__DOT__nstop)
                              ? 0xbU : 0U));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_59 
        = (0xfU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter) 
                   - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_62 
        = (0x100U | (0xffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter) 
                              >> 1U)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_40 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27)));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_40 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_56 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler)) 
           & (0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__txen) 
           & (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter)));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27) 
           == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35 
        = (1U & (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                  & (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                      >> 1U) | ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                >> 2U))) | (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                             >> 1U) 
                                            & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                               >> 2U))));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_45 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50 
        = (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_60 
        = (3U & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce) 
                 - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_65 
        = (3U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68 
        = (1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_74 
        = (2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_78 
        = (0xfU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter) 
                   - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36 
        = ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)) 
           | (1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27) 
           == (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_57 
        = ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
            >> 0x18U) & (0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))
            ? ((0x1000000U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg)
                ? (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)
                : ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))
                    ? 1U : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)))
            : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__T_2192 = (1U & (
                                                   (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                    & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                                   >> 9U));
    this->__PVT__u_sirv_uart__DOT__T_2202 = (1U & (
                                                   (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                    & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                                   >> 9U));
    this->__PVT__u_sirv_uart__DOT__T_2181 = (((IData)(1U) 
                                              << (7U 
                                                  & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                        >> 2U)))) 
                                             & (0x80U 
                                                | ((((0U 
                                                      == 
                                                      (0x3f8U 
                                                       & (6U 
                                                          ^ 
                                                          ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                              >> 2U))))) 
                                                     << 6U) 
                                                    | (((0U 
                                                         == 
                                                         (0x3f8U 
                                                          & (5U 
                                                             ^ 
                                                             ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                                 >> 2U))))) 
                                                        << 5U) 
                                                       | ((0U 
                                                           == 
                                                           (0x3f8U 
                                                            & (4U 
                                                               ^ 
                                                               ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                                   >> 2U))))) 
                                                          << 4U))) 
                                                   | ((((0U 
                                                         == 
                                                         (0x3f8U 
                                                          & (3U 
                                                             ^ 
                                                             ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                                 >> 2U))))) 
                                                        << 3U) 
                                                       | ((0U 
                                                           == 
                                                           (0x3f8U 
                                                            & (2U 
                                                               ^ 
                                                               ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                                   >> 2U))))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           == 
                                                           (0x3f8U 
                                                            & (1U 
                                                               ^ 
                                                               ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                                   >> 2U))))) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (0x3f8U 
                                                             & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                                   >> 2U)))))))));
    this->__PVT__u_sirv_uart__DOT__GEN_47 = ((6U == 
                                              (7U & 
                                               ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                 << 0x1eU) 
                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                   >> 2U))))
                                              ? (0U 
                                                 == 
                                                 (0x3f8U 
                                                  & (6U 
                                                     ^ 
                                                     ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                         >> 2U)))))
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                         >> 2U))))
                                                  ? 
                                                 (0U 
                                                  == 
                                                  (0x3f8U 
                                                   & (5U 
                                                      ^ 
                                                      ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                          >> 2U)))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                          >> 2U))))
                                                   ? 
                                                  (0U 
                                                   == 
                                                   (0x3f8U 
                                                    & (4U 
                                                       ^ 
                                                       ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                           >> 2U)))))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                           >> 2U))))
                                                    ? 
                                                   (0U 
                                                    == 
                                                    (0x3f8U 
                                                     & (3U 
                                                        ^ 
                                                        ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                            >> 2U)))))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                            >> 2U))))
                                                     ? 
                                                    (0U 
                                                     == 
                                                     (0x3f8U 
                                                      & (2U 
                                                         ^ 
                                                         ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                             >> 2U)))))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                             >> 2U))))
                                                      ? 
                                                     (0U 
                                                      == 
                                                      (0x3f8U 
                                                       & (1U 
                                                          ^ 
                                                          ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                              >> 2U)))))
                                                      : 
                                                     (0U 
                                                      == 
                                                      (0x3f8U 
                                                       & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                             >> 2U))))))))));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33 
        = ((~ ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match) 
               & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full))) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__valid));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__empty 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full)));
    this->__PVT__u_sirv_uart__DOT__T_917 = (((((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full) 
                                               & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match)) 
                                              << 3U) 
                                             | (7U 
                                                & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27) 
                                                   - (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29)))) 
                                            > (IData)(this->__PVT__u_sirv_uart__DOT__rxwm));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_85 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) 
            << 7U) | (0x7fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter) 
                               >> 1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler)) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__empty 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__full 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full));
    this->__PVT__u_sirv_uart__DOT__T_916 = (((((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full) 
                                               & (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match)) 
                                              << 3U) 
                                             | (7U 
                                                & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27) 
                                                   - (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29)))) 
                                            < (IData)(this->__PVT__u_sirv_uart__DOT__txwm));
    this->__PVT__u_sirv_uart__DOT__T_2193 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2192) 
                                             & (4U 
                                                == 
                                                ((0x200U 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                  ? 4U
                                                  : 0U)));
    this->__PVT__u_sirv_uart__DOT__T_2199 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2192) 
                                             & (4U 
                                                != 
                                                ((0x200U 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                  ? 4U
                                                  : 0U)));
    this->__PVT__u_sirv_uart__DOT__T_2203 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2202) 
                                             & (4U 
                                                == 
                                                ((0x200U 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                  ? 4U
                                                  : 0U)));
    this->__PVT__u_sirv_uart__DOT__T_2209 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2202) 
                                             & (4U 
                                                != 
                                                ((0x200U 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                  ? 4U
                                                  : 0U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer)) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_2 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse)
            ? (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                << 1U) | (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                                >> 0x18U))) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_25 
        = (((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)) 
            & ((~ (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                   >> 0x18U)) & (3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce)))) 
           | (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_34 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_34 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__GEN_55 = ((7U == 
                                              (7U & 
                                               ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                 << 0x1eU) 
                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                   >> 2U))))
                                              ? 0U : 
                                             ((6U == 
                                               (7U 
                                                & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                      >> 2U))))
                                               ? (IData)(this->__PVT__u_sirv_uart__DOT__div)
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                          >> 2U))))
                                                   ? 
                                                  (3U 
                                                   & ((IData)(this->__PVT__u_sirv_uart__DOT__T_916) 
                                                      | ((IData)(this->__PVT__u_sirv_uart__DOT__T_917) 
                                                         << 1U)))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                           >> 2U))))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(this->__PVT__u_sirv_uart__DOT__ie_txwm) 
                                                       | ((IData)(this->__PVT__u_sirv_uart__DOT__ie_rxwm) 
                                                          << 1U)))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                            >> 2U))))
                                                     ? 
                                                    (0xfffffU 
                                                     & ((IData)(this->__PVT__u_sirv_uart__DOT__rxen) 
                                                        | ((IData)(this->__PVT__u_sirv_uart__DOT__rxwm) 
                                                           << 0x10U)))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                             >> 2U))))
                                                      ? 
                                                     (0xfffffU 
                                                      & ((3U 
                                                          & ((IData)(this->__PVT__u_sirv_uart__DOT__txen) 
                                                             | ((IData)(this->__PVT__u_sirv_uart__DOT__nstop) 
                                                                << 1U))) 
                                                         | ((IData)(this->__PVT__u_sirv_uart__DOT__txwm) 
                                                            << 0x10U)))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[0xaU] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[9U] 
                                                              >> 2U))))
                                                       ? 
                                                      (this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ram
                                                       [this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29] 
                                                       | ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__empty) 
                                                          << 0x1fU))
                                                       : 
                                                      ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__full) 
                                                       << 0x1fU))))))));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__T_2203) 
            & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
               >> 1U)) & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__T_2251 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 2U));
    this->__PVT__u_sirv_uart__DOT__T_2271 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 3U));
    this->__PVT__u_sirv_uart__DOT__T_2291 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 4U));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33 
        = ((~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__full)) 
           & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
              & (IData)(this->__PVT__u_sirv_uart__DOT__T_2181)));
    if ((1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_26 
            = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                    ? (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter)
                    : 8U) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter));
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24 
            = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) 
               & 1U);
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_25 
            = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                    ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                        ? 0U : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14))
                    : 2U) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14));
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_26 
            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter;
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24 = 0U;
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_25 
            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_46 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33) 
           != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_46 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33) 
           != (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_34));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41 
        = ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))
            ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter)) 
                   | (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24))
                : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24))
            : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_4 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41)
            ? 0xfU : (0x1fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse)
                                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer) 
                                   - (IData)(1U)) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer))));
}

void Ve203_soc_top_verilator_sirv_uart_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_uart_top::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    i_icb_cmd_valid = VL_RAND_RESET_I(1);
    i_icb_cmd_ready = VL_RAND_RESET_I(1);
    i_icb_cmd_addr = VL_RAND_RESET_I(32);
    i_icb_cmd_read = VL_RAND_RESET_I(1);
    i_icb_cmd_wdata = VL_RAND_RESET_I(32);
    i_icb_rsp_valid = VL_RAND_RESET_I(1);
    i_icb_rsp_ready = VL_RAND_RESET_I(1);
    i_icb_rsp_rdata = VL_RAND_RESET_I(32);
    io_interrupts_0_0 = VL_RAND_RESET_I(1);
    io_port_txd = VL_RAND_RESET_I(1);
    io_port_rxd = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__div = VL_RAND_RESET_I(16);
    __PVT__u_sirv_uart__DOT__GEN_76 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__txen = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__GEN_77 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__rxen = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__GEN_78 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__txwm = VL_RAND_RESET_I(4);
    __PVT__u_sirv_uart__DOT__GEN_79 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__rxwm = VL_RAND_RESET_I(4);
    __PVT__u_sirv_uart__DOT__GEN_80 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__nstop = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__GEN_81 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__ie_rxwm = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__GEN_82 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__ie_txwm = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__GEN_83 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__T_916 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__T_917 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__T_2181 = VL_RAND_RESET_I(8);
    __PVT__u_sirv_uart__DOT__T_2192 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__T_2193 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__T_2199 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__T_2202 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__T_2203 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__T_2209 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__T_2251 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__T_2271 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__T_2291 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__GEN_47 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__GEN_55 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler = VL_RAND_RESET_I(16);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__GEN_6 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__pulse = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__counter = VL_RAND_RESET_I(4);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__GEN_7 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__shifter = VL_RAND_RESET_I(9);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__GEN_8 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__out = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__GEN_9 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__T_33 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__T_34 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__T_50 = VL_RAND_RESET_I(4);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__T_54 = VL_RAND_RESET_I(16);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__T_56 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__T_59 = VL_RAND_RESET_I(4);
    __PVT__u_sirv_uart__DOT__u_txm__DOT__T_62 = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            __PVT__u_sirv_uart__DOT__u_txq__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__u_sirv_uart__DOT__u_txq__DOT__GEN_0 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__T_27 = VL_RAND_RESET_I(3);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__GEN_1 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__T_29 = VL_RAND_RESET_I(3);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__GEN_2 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__GEN_3 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__empty = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__full = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__T_33 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__T_34 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__T_40 = VL_RAND_RESET_I(3);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__T_45 = VL_RAND_RESET_I(3);
    __PVT__u_sirv_uart__DOT__u_txq__DOT__T_46 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce = VL_RAND_RESET_I(2);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_7 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler = VL_RAND_RESET_I(12);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_20 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_24 = VL_RAND_RESET_I(12);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_25 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__sample = VL_RAND_RESET_I(3);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_23 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_2 = VL_RAND_RESET_I(4);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__timer = VL_RAND_RESET_I(5);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_28 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__counter = VL_RAND_RESET_I(4);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_43 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter = VL_RAND_RESET_I(8);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_44 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__expire = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45 = VL_RAND_RESET_I(5);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_4 = VL_RAND_RESET_I(5);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__valid = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_45 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__state = VL_RAND_RESET_I(2);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_46 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_57 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_60 = VL_RAND_RESET_I(2);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_65 = VL_RAND_RESET_I(2);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14 = VL_RAND_RESET_I(2);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_25 = VL_RAND_RESET_I(2);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_26 = VL_RAND_RESET_I(4);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_74 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_78 = VL_RAND_RESET_I(4);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__T_85 = VL_RAND_RESET_I(8);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            __PVT__u_sirv_uart__DOT__u_rxq__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__GEN_0 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27 = VL_RAND_RESET_I(3);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__GEN_1 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29 = VL_RAND_RESET_I(3);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__GEN_2 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__GEN_3 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__empty = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_40 = VL_RAND_RESET_I(3);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_45 = VL_RAND_RESET_I(3);
    __PVT__u_sirv_uart__DOT__u_rxq__DOT__T_46 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__u_sirv_uart__DOT__u_txq__DOT__ram__v0 = 0;
    __Vdlyvval__u_sirv_uart__DOT__u_txq__DOT__ram__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__u_sirv_uart__DOT__u_txq__DOT__ram__v0 = 0;
    __Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce = VL_RAND_RESET_I(2);
    __Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter = VL_RAND_RESET_I(4);
    __Vdlyvdim0__u_sirv_uart__DOT__u_rxq__DOT__ram__v0 = 0;
    __Vdlyvval__u_sirv_uart__DOT__u_rxq__DOT__ram__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__u_sirv_uart__DOT__u_rxq__DOT__ram__v0 = 0;
}
