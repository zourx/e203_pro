// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Ve203_soc_top_verilator.h for the primary calling header

#include "Ve203_soc_top_verilator_sirv_uart_top.h"
#include "Ve203_soc_top_verilator__Syms.h"

//==========

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__3(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__3\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__u_sirv_uart__DOT__u_txq__DOT__ram__v0 = 0U;
    this->__Vdlyvset__u_sirv_uart__DOT__u_rxq__DOT__ram__v0 = 0U;
    if (this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33) {
        this->__Vdlyvval__u_sirv_uart__DOT__u_txq__DOT__ram__v0 
            = (0xffU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xcU]);
        this->__Vdlyvset__u_sirv_uart__DOT__u_txq__DOT__ram__v0 = 1U;
        this->__Vdlyvdim0__u_sirv_uart__DOT__u_txq__DOT__ram__v0 
            = this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27;
    }
    if (this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33) {
        this->__Vdlyvval__u_sirv_uart__DOT__u_rxq__DOT__ram__v0 
            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter;
        this->__Vdlyvset__u_sirv_uart__DOT__u_rxq__DOT__ram__v0 = 1U;
        this->__Vdlyvdim0__u_sirv_uart__DOT__u_rxq__DOT__ram__v0 
            = this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27;
    }
    if (this->__Vdlyvset__u_sirv_uart__DOT__u_rxq__DOT__ram__v0) {
        this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ram[this->__Vdlyvdim0__u_sirv_uart__DOT__u_rxq__DOT__ram__v0] 
            = this->__Vdlyvval__u_sirv_uart__DOT__u_rxq__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__5(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__5\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__u_sirv_uart__DOT__T_2192 = (1U & (
                                                   (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                    & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                                   >> 0xcU));
    this->__PVT__u_sirv_uart__DOT__T_2202 = (1U & (
                                                   (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                    & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                                   >> 0xcU));
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
    this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter 
        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter;
    this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce 
        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce;
    if (VL_UNLIKELY(((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_34) 
                     & (IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n)))) {
        VL_FWRITEF(0x80000002U,"%c",8,this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ram
                   [this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29]);
    }
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
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample 
        = ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n)
            ? (7U & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_2))
            : 0U);
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                if ((0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter))) {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter 
                        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_85;
                }
            }
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__valid 
        = ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) 
           & ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)) 
              & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) 
                 & (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter)))));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter 
                    = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_78;
            } else {
                if ((1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                        if ((1U & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)))) {
                            this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter = 8U;
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                    if ((1U & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)))) {
                        this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter = 8U;
                    }
                }
            }
        }
    } else {
        this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
            if ((0x10000U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg)) {
                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41) {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer = 0xfU;
                } else {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse) {
                        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer 
                            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45;
                    }
                }
            } else {
                if ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))) {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer = 8U;
                } else {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41) {
                        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer = 0xfU;
                    } else {
                        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse) {
                            this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer 
                                = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45;
                        }
                    }
                }
            }
        } else {
            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41) {
                this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer = 0xfU;
            } else {
                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse) {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer 
                        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45;
                }
            }
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2251) {
            this->__PVT__u_sirv_uart__DOT__nstop = 
                (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xcU] 
                       >> 1U));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__nstop = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2251) {
            this->__PVT__u_sirv_uart__DOT__txen = (1U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xcU]);
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__txen = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter))) {
            this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler 
                = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__pulse)
                    ? (IData)(this->__PVT__u_sirv_uart__DOT__div)
                    : (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_54));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_25) {
            this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler 
                = (0xfffU & ((IData)(this->__PVT__u_sirv_uart__DOT__div) 
                             >> 4U));
        } else {
            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36) {
                this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler 
                    = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_24;
            }
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__rxen) {
            if ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
                if ((0x10000U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg)) {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_57) {
                        this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce 
                            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_60;
                    }
                } else {
                    this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce 
                        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_65;
                }
            }
        } else {
            this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce = 0U;
        }
    } else {
        this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2291) {
            this->__PVT__u_sirv_uart__DOT__ie_txwm 
                = (1U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xcU]);
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__ie_txwm = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2291) {
            this->__PVT__u_sirv_uart__DOT__ie_rxwm 
                = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xcU] 
                         >> 1U));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__ie_rxwm = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2271) {
            this->__PVT__u_sirv_uart__DOT__rxwm = (0xfU 
                                                   & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xcU] 
                                                         >> 0x10U)));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__rxwm = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2251) {
            this->__PVT__u_sirv_uart__DOT__txwm = (0xfU 
                                                   & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xcU] 
                                                         >> 0x10U)));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__txwm = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_46) {
            this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full 
                = this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_46) {
            this->__PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full 
                = this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33) {
            this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27 
                = this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_40;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33) {
            this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27 
                = this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_40;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_56) {
            this->__PVT__u_sirv_uart__DOT__u_txm__DOT__out 
                = (1U & (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txm__DOT__out = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34) {
            this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29 
                = this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_45;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29 = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45 
        = (0x1fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer) 
                    - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__pulse 
        = (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_54 
        = (0xffffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler) 
                      - (IData)(1U)));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_56) {
            this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter 
                = this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_59;
        } else {
            if (this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_34) {
                this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter 
                    = this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_50;
            }
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_24 
        = (0xfffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler) 
                     - (IData)(1U)));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                >> 6U))) {
            this->__PVT__u_sirv_uart__DOT__div = (0xffffU 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xcU]);
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__div = 0x21eU;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2271) {
            this->__PVT__u_sirv_uart__DOT__rxen = (1U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xcU]);
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__rxen = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_74) {
            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                if ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter))) {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 0U;
                } else {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68) {
                        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) {
                                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) {
                                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 0U;
                                } else {
                                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50) {
                                        if ((1U & (~ 
                                                   (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                                                    >> 0x10U)))) {
                                            if ((3U 
                                                 == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))) {
                                                this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 1U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 2U;
                            }
                        } else {
                            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50) {
                                if ((1U & (~ (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                                              >> 0x10U)))) {
                                    if ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))) {
                                        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50) {
                            if ((1U & (~ (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                                          >> 0x10U)))) {
                                if ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))) {
                                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68) {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) {
                            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) {
                                this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 0U;
                            } else {
                                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50) {
                                    if ((1U & (~ (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                                                  >> 0x10U)))) {
                                        if ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))) {
                                            this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 1U;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 2U;
                        }
                    } else {
                        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state 
                            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14;
                    }
                } else {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state 
                        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14;
                }
            }
        } else {
            this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state 
                = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68)
                    ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                        ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                            ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                                ? 0U : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14))
                            : 2U) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14))
                    : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_40 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_40 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27)));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_56) {
            this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter 
                = this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_62;
        } else {
            if (this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_34) {
                this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter 
                    = (this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ram
                       [this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29] 
                       << 1U);
            }
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_45 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29)));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27) 
           == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_50 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__nstop)
             ? 0U : 0xaU) | ((IData)(this->__PVT__u_sirv_uart__DOT__nstop)
                              ? 0xbU : 0U));
    this->__PVT__u_sirv_uart__DOT__T_2209 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2202) 
                                             & (4U 
                                                != 
                                                ((0x1000U 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                  ? 4U
                                                  : 0U)));
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
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter 
        = this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter;
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35 
        = (1U & (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                  & (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                      >> 1U) | ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                >> 2U))) | (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                             >> 1U) 
                                            & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                               >> 2U))));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce 
        = this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce;
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
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_59 
        = (0xfU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter) 
                   - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_56 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler)) 
           & (0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__txen) 
           & (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter)));
    this->__PVT__u_sirv_uart__DOT__T_2251 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 2U));
    this->__PVT__u_sirv_uart__DOT__T_2271 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 3U));
    this->__PVT__u_sirv_uart__DOT__T_2291 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 4U));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_78 
        = (0xfU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter) 
                   - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_85 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) 
            << 7U) | (0x7fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter) 
                               >> 1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_60 
        = (3U & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce) 
                 - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_65 
        = (3U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50 
        = (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68 
        = (1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_74 
        = (2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36 
        = ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)) 
           | (1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_62 
        = (0x100U | (0xffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter) 
                              >> 1U)));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_34) {
            this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29 
                = this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_45;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29 = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__T_2203) 
            & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
               >> 1U)) & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler)) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_46 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33) 
           != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer)) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_45 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27) 
           == (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29));
    if ((1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_26 
            = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                    ? (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter)
                    : 8U) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter));
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24 
            = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) 
               & 1U);
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_26 
            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter;
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24 = 0U;
    }
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
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41 
        = ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))
            ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter)) 
                   | (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24))
                : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24))
            : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_34 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_34 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33 
        = ((~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__full)) 
           & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
              & (IData)(this->__PVT__u_sirv_uart__DOT__T_2181)));
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
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_4 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41)
            ? 0xfU : (0x1fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse)
                                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer) 
                                   - (IData)(1U)) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer))));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_46 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33) 
           != (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_34));
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__7(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__7\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (this->__Vdlyvset__u_sirv_uart__DOT__u_txq__DOT__ram__v0) {
        this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ram[this->__Vdlyvdim0__u_sirv_uart__DOT__u_txq__DOT__ram__v0] 
            = this->__Vdlyvval__u_sirv_uart__DOT__u_txq__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__9(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart0_top__9\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_57 
        = ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
            >> 0x10U) & (0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce)));
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
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))
            ? ((0x10000U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg)
                ? (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)
                : ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))
                    ? 1U : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)))
            : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_25 
        = ((1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))
            ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                    ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                        ? 0U : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14))
                    : 2U) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14))
            : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14));
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__4(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__4\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__u_sirv_uart__DOT__u_txq__DOT__ram__v0 = 0U;
    this->__Vdlyvset__u_sirv_uart__DOT__u_rxq__DOT__ram__v0 = 0U;
    if (this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33) {
        this->__Vdlyvval__u_sirv_uart__DOT__u_txq__DOT__ram__v0 
            = (0xffU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[9U]);
        this->__Vdlyvset__u_sirv_uart__DOT__u_txq__DOT__ram__v0 = 1U;
        this->__Vdlyvdim0__u_sirv_uart__DOT__u_txq__DOT__ram__v0 
            = this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27;
    }
    if (this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33) {
        this->__Vdlyvval__u_sirv_uart__DOT__u_rxq__DOT__ram__v0 
            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter;
        this->__Vdlyvset__u_sirv_uart__DOT__u_rxq__DOT__ram__v0 = 1U;
        this->__Vdlyvdim0__u_sirv_uart__DOT__u_rxq__DOT__ram__v0 
            = this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27;
    }
    if (this->__Vdlyvset__u_sirv_uart__DOT__u_rxq__DOT__ram__v0) {
        this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ram[this->__Vdlyvdim0__u_sirv_uart__DOT__u_rxq__DOT__ram__v0] 
            = this->__Vdlyvval__u_sirv_uart__DOT__u_rxq__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__6(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__6\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__u_sirv_uart__DOT__T_2192 = (1U & (
                                                   (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                    & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                                   >> 9U));
    this->__PVT__u_sirv_uart__DOT__T_2202 = (1U & (
                                                   (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                    & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                                   >> 9U));
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
    this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter 
        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter;
    this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce 
        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce;
    if (VL_UNLIKELY(((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_34) 
                     & (IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n)))) {
        VL_FWRITEF(0x80000002U,"%c",8,this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ram
                   [this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29]);
    }
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
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample 
        = ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n)
            ? (7U & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_2))
            : 0U);
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                if ((0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter))) {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter 
                        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_85;
                }
            }
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__valid 
        = ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) 
           & ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)) 
              & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) 
                 & (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter)))));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter 
                    = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_78;
            } else {
                if ((1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                        if ((1U & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)))) {
                            this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter = 8U;
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                    if ((1U & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)))) {
                        this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter = 8U;
                    }
                }
            }
        }
    } else {
        this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
            if ((0x1000000U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg)) {
                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41) {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer = 0xfU;
                } else {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse) {
                        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer 
                            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45;
                    }
                }
            } else {
                if ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))) {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer = 8U;
                } else {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41) {
                        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer = 0xfU;
                    } else {
                        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse) {
                            this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer 
                                = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45;
                        }
                    }
                }
            }
        } else {
            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41) {
                this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer = 0xfU;
            } else {
                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse) {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer 
                        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45;
                }
            }
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2251) {
            this->__PVT__u_sirv_uart__DOT__nstop = 
                (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[9U] 
                       >> 1U));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__nstop = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2251) {
            this->__PVT__u_sirv_uart__DOT__txen = (1U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[9U]);
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__txen = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if ((0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter))) {
            this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler 
                = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__pulse)
                    ? (IData)(this->__PVT__u_sirv_uart__DOT__div)
                    : (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_54));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_25) {
            this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler 
                = (0xfffU & ((IData)(this->__PVT__u_sirv_uart__DOT__div) 
                             >> 4U));
        } else {
            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36) {
                this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler 
                    = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_24;
            }
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__rxen) {
            if ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
                if ((0x1000000U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg)) {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_57) {
                        this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce 
                            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_60;
                    }
                } else {
                    this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce 
                        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_65;
                }
            }
        } else {
            this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce = 0U;
        }
    } else {
        this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2291) {
            this->__PVT__u_sirv_uart__DOT__ie_txwm 
                = (1U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[9U]);
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__ie_txwm = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2291) {
            this->__PVT__u_sirv_uart__DOT__ie_rxwm 
                = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[9U] 
                         >> 1U));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__ie_rxwm = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2271) {
            this->__PVT__u_sirv_uart__DOT__rxwm = (0xfU 
                                                   & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xaU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[9U] 
                                                         >> 0x10U)));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__rxwm = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2251) {
            this->__PVT__u_sirv_uart__DOT__txwm = (0xfU 
                                                   & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xaU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[9U] 
                                                         >> 0x10U)));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__txwm = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_46) {
            this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full 
                = this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__maybe_full = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_46) {
            this->__PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full 
                = this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txq__DOT__maybe_full = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33) {
            this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27 
                = this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_40;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33) {
            this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27 
                = this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_40;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_56) {
            this->__PVT__u_sirv_uart__DOT__u_txm__DOT__out 
                = (1U & (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txm__DOT__out = 1U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34) {
            this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29 
                = this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_45;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29 = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_45 
        = (0x1fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer) 
                    - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__pulse 
        = (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_54 
        = (0xffffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler) 
                      - (IData)(1U)));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_56) {
            this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter 
                = this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_59;
        } else {
            if (this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_34) {
                this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter 
                    = this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_50;
            }
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_24 
        = (0xfffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler) 
                     - (IData)(1U)));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                >> 6U))) {
            this->__PVT__u_sirv_uart__DOT__div = (0xffffU 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[9U]);
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__div = 0x21eU;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__T_2271) {
            this->__PVT__u_sirv_uart__DOT__rxen = (1U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[9U]);
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__rxen = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_74) {
            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                if ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter))) {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 0U;
                } else {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68) {
                        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) {
                                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) {
                                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 0U;
                                } else {
                                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50) {
                                        if ((1U & (~ 
                                                   (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                                                    >> 0x18U)))) {
                                            if ((3U 
                                                 == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))) {
                                                this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 1U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 2U;
                            }
                        } else {
                            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50) {
                                if ((1U & (~ (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                                              >> 0x18U)))) {
                                    if ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))) {
                                        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50) {
                            if ((1U & (~ (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                                          >> 0x18U)))) {
                                if ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))) {
                                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68) {
                    if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) {
                        if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) {
                            if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) {
                                this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 0U;
                            } else {
                                if (this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50) {
                                    if ((1U & (~ (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
                                                  >> 0x18U)))) {
                                        if ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))) {
                                            this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 1U;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 2U;
                        }
                    } else {
                        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state 
                            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14;
                    }
                } else {
                    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state 
                        = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14;
                }
            }
        } else {
            this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state 
                = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68)
                    ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                        ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                            ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                                ? 0U : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14))
                            : 2U) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14))
                    : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14));
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_40 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_40 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27)));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_56) {
            this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter 
                = this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_62;
        } else {
            if (this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_34) {
                this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter 
                    = (this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ram
                       [this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29] 
                       << 1U);
            }
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_45 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29)));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__ptr_match 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_27) 
           == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_29));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_50 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__nstop)
             ? 0U : 0xaU) | ((IData)(this->__PVT__u_sirv_uart__DOT__nstop)
                              ? 0xbU : 0U));
    this->__PVT__u_sirv_uart__DOT__T_2209 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2202) 
                                             & (4U 
                                                != 
                                                ((0x200U 
                                                  & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                  ? 4U
                                                  : 0U)));
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
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter 
        = this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__counter;
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35 
        = (1U & (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                  & (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                      >> 1U) | ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                >> 2U))) | (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                             >> 1U) 
                                            & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__sample) 
                                               >> 2U))));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce 
        = this->__Vdly__u_sirv_uart__DOT__u_rxm__DOT__debounce;
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
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_59 
        = (0xfU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter) 
                   - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_56 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__prescaler)) 
           & (0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__txen) 
           & (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__counter)));
    this->__PVT__u_sirv_uart__DOT__T_2251 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 2U));
    this->__PVT__u_sirv_uart__DOT__T_2271 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 3U));
    this->__PVT__u_sirv_uart__DOT__T_2291 = ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
                                             & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
                                                >> 4U));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_78 
        = (0xfU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter) 
                   - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_85 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35) 
            << 7U) | (0x7fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__shifter) 
                               >> 1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_60 
        = (3U & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce) 
                 - (IData)(1U)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_65 
        = (3U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_50 
        = (0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_68 
        = (1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_74 
        = (2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36 
        = ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)) 
           | (1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_62 
        = (0x100U | (0xffU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__shifter) 
                              >> 1U)));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_34) {
            this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29 
                = this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_45;
        }
    } else {
        this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29 = 0U;
    }
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34 
        = (((IData)(this->__PVT__u_sirv_uart__DOT__T_2203) 
            & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2181) 
               >> 1U)) & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__prescaler)) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_36));
    this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_46 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_33) 
           != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxq__DOT__T_34));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer)) 
           & (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_45 
        = (7U & ((IData)(1U) + (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__ptr_match 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_27) 
           == (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_29));
    if ((1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))) {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_26 
            = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                    ? (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter)
                    : 8U) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter));
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24 
            = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire) 
               & 1U);
    } else {
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_26 
            = this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter;
        this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24 = 0U;
    }
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
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41 
        = ((2U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))
            ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__counter)) 
                   | (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24))
                : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24))
            : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_24));
    this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_34 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_34 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txm__DOT__T_33) 
           & (~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__empty)));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33 
        = ((~ (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__full)) 
           & ((IData)(this->__PVT__u_sirv_uart__DOT__T_2209) 
              & (IData)(this->__PVT__u_sirv_uart__DOT__T_2181)));
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
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_4 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_41)
            ? 0xfU : (0x1fU & ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__pulse)
                                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer) 
                                   - (IData)(1U)) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__timer))));
    this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_46 
        = ((IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_33) 
           != (IData)(this->__PVT__u_sirv_uart__DOT__u_txq__DOT__T_34));
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__10(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_uart_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_uart1_top__10\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_57 
        = ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg 
            >> 0x18U) & (0U != (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce)));
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
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14 
        = ((0U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))
            ? ((0x1000000U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__inSyncReg)
                ? (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)
                : ((3U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__debounce))
                    ? 1U : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state)))
            : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state));
    this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_25 
        = ((1U == (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__state))
            ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__expire)
                ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                    ? ((IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__T_35)
                        ? 0U : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14))
                    : 2U) : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14))
            : (IData)(this->__PVT__u_sirv_uart__DOT__u_rxm__DOT__GEN_14));
}
