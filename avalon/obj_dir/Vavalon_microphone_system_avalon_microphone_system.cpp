// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vavalon_microphone_system.h for the primary calling header

#include "Vavalon_microphone_system_avalon_microphone_system.h"
#include "Vavalon_microphone_system__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vavalon_microphone_system_avalon_microphone_system) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vavalon_microphone_system_avalon_microphone_system::__Vconfigure(Vavalon_microphone_system__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vavalon_microphone_system_avalon_microphone_system::~Vavalon_microphone_system_avalon_microphone_system() {
}

//--------------------
// Internal Methods

void Vavalon_microphone_system_avalon_microphone_system::_initial__TOP__avalon_microphone_system__1(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_initial__TOP__avalon_microphone_system__1\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.AVL_READDATA = 0U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__restart_sig = 0U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__start = 0U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__counter = 0U;
    vlSymsp->TOP__avalon_microphone_system.vol_1 = 0x14U;
    vlSymsp->TOP__avalon_microphone_system.vol_2 = 0x14U;
    vlSymsp->TOP__avalon_microphone_system.vol_3 = 0x14U;
    vlSymsp->TOP__avalon_microphone_system.vol_4 = 0x14U;
    vlSymsp->TOP__avalon_microphone_system.vol_5 = 0x14U;
    vlSymsp->TOP__avalon_microphone_system.vol_6 = 0x14U;
    vlSymsp->TOP__avalon_microphone_system.vol_7 = 0x14U;
    vlSymsp->TOP__avalon_microphone_system.vol_8 = 0x14U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__finish_signal = 0U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter = 0U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_counter = 0U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__half_way_latch = 0U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__end_latch = 0U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsd = 0U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsd = 0U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsd = 0U;
    vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsd = 0U;
}

void Vavalon_microphone_system_avalon_microphone_system::_settle__TOP__avalon_microphone_system__2(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_settle__TOP__avalon_microphone_system__2\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state)))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__unnamedblk5__DOT__i = 5U;
            }
        }
    }
    vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET 
        = ((IData)(vlTOPp->RESET) | (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__restart_sig));
    if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__start)))) {
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__unnamedblk4__DOT__i = 5U;
                }
            }
        }
    }
}

void Vavalon_microphone_system_avalon_microphone_system::_settle__TOP__avalon_microphone_system__3(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_settle__TOP__avalon_microphone_system__3\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__finish_signal 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_finish_signal;
    if ((4U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__finish_signal = 1U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__finish_signal = 0U;
            }
        }
    }
    vlSymsp->TOP__avalon_microphone_system.fin_signal 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__finish_signal;
}

void Vavalon_microphone_system_avalon_microphone_system::_settle__TOP__avalon_microphone_system__4(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_settle__TOP__avalon_microphone_system__4\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__next_state 
        = ((4U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
            ? ((2U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
                ? 0U : ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
                         ? ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__start)
                             ? 5U : 0U) : ((IData)(vlTOPp->AM_WAITREQUEST)
                                            ? 4U : 
                                           ((4U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)
                                             ? ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__done)
                                                 ? 5U
                                                 : 3U)
                                             : 3U))))
            : ((2U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
                ? ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
                    ? ((IData)(vlTOPp->AM_WAITREQUEST)
                        ? 3U : ((0U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)
                                 ? ((vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
                                     [4U] == ((IData)(0x249f000U) 
                                              + vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr))
                                     ? 2U : ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__ready_read_now)
                                              ? 4U : 3U))
                                 : 4U)) : 3U) : ((1U 
                                                  & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__start)
                                                   ? 1U
                                                   : 0U))));
    vlSymsp->TOP__avalon_microphone_system.AM_WRITE 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_AM_WRITE;
    vlSymsp->TOP__avalon_microphone_system.AM_ADDR 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_AM_ADDR;
    vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address
        [0U];
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[0U] 
        = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3;
    vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address
        [1U];
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[1U] 
        = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3;
    vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address
        [2U];
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[2U] 
        = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3;
    vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address
        [3U];
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[3U] 
        = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3;
    vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address
        [4U];
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[4U] 
        = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3;
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_num_samples;
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__done 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_done;
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_counter;
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__mic_count 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_mic_count;
    vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 1U;
    vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
    if ((4U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples 
                    = vlSymsp->TOP__avalon_microphone_system.__PVT__num_samps;
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter = 0U;
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__done = 0U;
                vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                vlSymsp->TOP__avalon_microphone_system.AM_ADDR 
                    = vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr;
            } else {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__mic_count 
                    = (7U & ((IData)(1U) + vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter));
                if ((1U & (~ (IData)(vlTOPp->AM_WAITREQUEST)))) {
                    if ((0U < vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples)) {
                        vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound6 
                            = ((IData)(4U) + ((4U >= 
                                               (7U 
                                                & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter))
                                               ? vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
                                              [(7U 
                                                & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)]
                                               : 0U));
                        vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                        if ((4U >= (7U & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter))) {
                            vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[(7U 
                                                                                & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)] 
                                = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound6;
                        }
                        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples 
                            = ((4U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)
                                ? (vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples 
                                   - (IData)(1U)) : vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_num_samples);
                    } else {
                        if ((0U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples)) {
                            vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__done = 1U;
                            vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                            vlSymsp->TOP__avalon_microphone_system.AM_ADDR = 0U;
                            vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                            vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 0U;
                        }
                    }
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter 
                        = ((4U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)
                            ? 0U : ((IData)(1U) + vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__mic_count 
                    = (7U & ((IData)(1U) + vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter));
                if ((0U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)) {
                    if (vlSymsp->TOP__avalon_microphone_system.__PVT__ready_read_now) {
                        if (vlTOPp->AM_WAITREQUEST) {
                            vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                            vlSymsp->TOP__avalon_microphone_system.AM_ADDR = 0U;
                            vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                            vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 0U;
                        } else {
                            vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 1U;
                            vlSymsp->TOP__avalon_microphone_system.AM_ADDR 
                                = ((4U >= (7U & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter))
                                    ? vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
                                   [(7U & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)]
                                    : 0U);
                            vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                            vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 1U;
                        }
                    } else {
                        vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                        vlSymsp->TOP__avalon_microphone_system.AM_ADDR = 0U;
                        vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                        vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 0U;
                    }
                } else {
                    if (vlTOPp->AM_WAITREQUEST) {
                        vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                        vlSymsp->TOP__avalon_microphone_system.AM_ADDR = 0U;
                        vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                        vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 0U;
                    } else {
                        vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 1U;
                        vlSymsp->TOP__avalon_microphone_system.AM_ADDR 
                            = ((4U >= (7U & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter))
                                ? vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
                               [(7U & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)]
                                : 0U);
                        vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                        vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 1U;
                    }
                }
            } else {
                vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5 
                    = vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr;
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[0U] 
                    = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5;
                vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x753000U) + vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr);
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[1U] 
                    = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5;
                vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5 
                    = ((IData)(0xea6000U) + vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr);
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[2U] 
                    = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5;
                vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x15f9000U) + vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr);
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[3U] 
                    = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5;
                vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x1d4c000U) + vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr);
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[4U] 
                    = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5;
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter = 0U;
            } else {
                if (vlSymsp->TOP__avalon_microphone_system.__PVT__start) {
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples 
                        = vlSymsp->TOP__avalon_microphone_system.__PVT__num_samps;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__mic_count = 2U;
                } else {
                    vlSymsp->TOP__avalon_microphone_system.AM_ADDR = 0U;
                    vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[0U] = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[1U] = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[2U] = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[3U] = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[4U] = 0U;
                }
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__done = 0U;
            }
        }
    }
    vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__found_edge 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__last_test_clk) 
           ^ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__cur_test_clk));
}

void Vavalon_microphone_system_avalon_microphone_system::_settle__TOP__avalon_microphone_system__5(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_settle__TOP__avalon_microphone_system__5\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__saw_rise 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__found_edge) 
           & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__cur_test_clk));
    vlSymsp->TOP__avalon_microphone_system.__PVT__saw_fall 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__found_edge) 
           & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__last_test_clk));
    vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsp 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsd) 
           ^ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsdd));
    vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsp 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsd) 
           ^ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsdd));
    vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsp 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsd) 
           ^ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsdd));
    vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsp 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsd) 
           ^ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsdd));
    vlSymsp->TOP__avalon_microphone_system.AVL_READDATA 
        = (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_READ))
            ? ((0U == (IData)(vlTOPp->AVL_ADDR)) ? 
               (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__saw_rise) 
                 << 1U) | (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__saw_fall))
                : ((1U == (IData)(vlTOPp->AVL_ADDR))
                    ? (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_l) 
                        << 0x10U) | (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_r))
                    : ((2U == (IData)(vlTOPp->AVL_ADDR))
                        ? (IData)(vlSymsp->TOP__avalon_microphone_system.fin_signal)
                        : ((3U == (IData)(vlTOPp->AVL_ADDR))
                            ? (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__half_way_latch)
                            : ((4U == (IData)(vlTOPp->AVL_ADDR))
                                ? (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__end_latch)
                                : 0U))))) : 0U);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__65(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__65\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET)))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__unnamedblk2__DOT__i = 5U;
    }
    if (vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__unnamedblk1__DOT__i = 5U;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__66(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__66\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__m4__DOT__counter 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__counter;
    vlSymsp->TOP__avalon_microphone_system.__Vdly__m3__DOT__counter 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__counter;
    vlSymsp->TOP__avalon_microphone_system.__Vdly__m2__DOT__counter 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__counter;
    vlSymsp->TOP__avalon_microphone_system.__Vdly__m1__DOT__counter 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__70(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__70\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_coef_data 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__p_coef_data;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__71(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__71\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_8 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_8;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__72(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__72\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_7 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_7;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__73(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__73\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_6 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_6;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__74(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__74\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_5 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_5;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__75(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__75\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_1 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_1;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__76(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__76\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_2 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_2;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__77(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__77\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_3;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__78(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__78\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_4 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_4;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__79(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__79\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__counter 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__89(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__89\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_3;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__90(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__90\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_2 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_2;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__91(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__91\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_4 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_4;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__92(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__92\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_1 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_1;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__98(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__98\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v0 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__99(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__99\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v5 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__100(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__100\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v6 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__101(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__101\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v7 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__102(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__102\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v8 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__103(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__103\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v9 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__104(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__104\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsp) {
        vlSymsp->TOP__avalon_microphone_system.__Vdly__m1__DOT__counter = 0U;
    } else {
        if ((0x10U > (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__counter))) {
            vlSymsp->TOP__avalon_microphone_system.__Vdly__m1__DOT__counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__counter)));
        }
    }
    vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__counter 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__m1__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__105(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__105\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsp) {
        vlSymsp->TOP__avalon_microphone_system.__Vdly__m2__DOT__counter = 0U;
    } else {
        if ((0x10U > (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__counter))) {
            vlSymsp->TOP__avalon_microphone_system.__Vdly__m2__DOT__counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__counter)));
        }
    }
    vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__counter 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__m2__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__106(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__106\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsp) {
        vlSymsp->TOP__avalon_microphone_system.__Vdly__m3__DOT__counter = 0U;
    } else {
        if ((0x10U > (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__counter))) {
            vlSymsp->TOP__avalon_microphone_system.__Vdly__m3__DOT__counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__counter)));
        }
    }
    vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__counter 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__m3__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__107(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__107\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsp) {
        vlSymsp->TOP__avalon_microphone_system.__Vdly__m4__DOT__counter = 0U;
    } else {
        if ((0x10U > (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__counter))) {
            vlSymsp->TOP__avalon_microphone_system.__Vdly__m4__DOT__counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__counter)));
        }
    }
    vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__counter 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__m4__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__108(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__108\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsdd 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsd;
    vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsdd 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsd;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__109(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__109\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsdd 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsd;
    vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsdd 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsd;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__110(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__110\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.change_filter = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U != (IData)(vlTOPp->AVL_ADDR))) {
                                if ((5U != (IData)(vlTOPp->AVL_ADDR))) {
                                    if ((6U == (IData)(vlTOPp->AVL_ADDR))) {
                                        vlSymsp->TOP__avalon_microphone_system.change_filter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlSymsp->TOP__avalon_microphone_system.change_filter = 0U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__111(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__111\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.load_coef = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U != (IData)(vlTOPp->AVL_ADDR))) {
                                if ((5U == (IData)(vlTOPp->AVL_ADDR))) {
                                    vlSymsp->TOP__avalon_microphone_system.load_coef = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlSymsp->TOP__avalon_microphone_system.load_coef = 0U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__112(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__112\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__restart_sig = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U == (IData)(vlTOPp->AVL_ADDR))) {
                            vlSymsp->TOP__avalon_microphone_system.__PVT__restart_sig 
                                = (1U & vlTOPp->AVL_WRITEDATA);
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__113(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__113\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_coef_data 
        = ((IData)(vlTOPp->RESET) ? 0U : (IData)(vlSymsp->TOP__avalon_microphone_system.coef_data));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__114(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__114\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_4 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlSymsp->TOP__avalon_microphone_system.vol_4);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__115(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__115\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_3 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlSymsp->TOP__avalon_microphone_system.vol_3);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__116(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__116\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_2 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlSymsp->TOP__avalon_microphone_system.vol_2);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__117(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__117\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_1 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlSymsp->TOP__avalon_microphone_system.vol_1);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__118(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__118\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_5 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlSymsp->TOP__avalon_microphone_system.vol_5);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__119(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__119\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_6 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlSymsp->TOP__avalon_microphone_system.vol_6);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__120(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__120\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_7 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlSymsp->TOP__avalon_microphone_system.vol_7);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__121(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__121\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_8 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlSymsp->TOP__avalon_microphone_system.vol_8);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__122(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__122\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U == (IData)(vlTOPp->AVL_ADDR))) {
                    vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr 
                        = vlTOPp->AVL_WRITEDATA;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__123(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__123\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__start = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U == (IData)(vlTOPp->AVL_ADDR))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__start 
                    = (1U & vlTOPp->AVL_WRITEDATA);
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__124(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__124\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_AM_ADDR 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET)
            ? 0U : vlSymsp->TOP__avalon_microphone_system.AM_ADDR);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__125(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__125\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_done 
        = ((~ (IData)(vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET)) 
           & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__done));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__126(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__126\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_AM_WRITE 
        = ((~ (IData)(vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET)) 
           & (IData)(vlSymsp->TOP__avalon_microphone_system.AM_WRITE));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__127(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__127\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_mic_count 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET)
            ? 0U : (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__mic_count));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__128(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__128\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_num_samples 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET)
            ? 0U : vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__129(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__129\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__saw_rise) {
        vlSymsp->TOP__avalon_microphone_system.__Vdly__counter 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__counter)));
    } else {
        if (vlSymsp->TOP__avalon_microphone_system.__PVT__saw_fall) {
            vlSymsp->TOP__avalon_microphone_system.__Vdly__counter 
                = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__counter)));
        }
    }
    if ((3U == (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__counter))) {
        vlSymsp->TOP__avalon_microphone_system.__Vdly__counter = 1U;
        vlSymsp->TOP__avalon_microphone_system.__PVT__ready_read_now = 1U;
    } else {
        vlSymsp->TOP__avalon_microphone_system.__PVT__ready_read_now = 0U;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__130(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__130\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__end_ack) 
         | (IData)(vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__end_latch = 0U;
    } else {
        if ((0U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples)) {
            vlSymsp->TOP__avalon_microphone_system.__PVT__end_latch = 1U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__131(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__131\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__saw_fall) {
        vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_4 
            = (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_l4) 
                << 0x10U) | (0xffffU & vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_4));
    } else {
        if (vlSymsp->TOP__avalon_microphone_system.__PVT__saw_rise) {
            vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_4 
                = ((0xffff0000U & vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_4) 
                   | (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_r4));
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__132(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__132\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__saw_fall) {
        vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_2 
            = (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_l2) 
                << 0x10U) | (0xffffU & vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_2));
    } else {
        if (vlSymsp->TOP__avalon_microphone_system.__PVT__saw_rise) {
            vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_2 
                = ((0xffff0000U & vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_2) 
                   | (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_r2));
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__133(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__133\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__saw_fall) {
        vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_3 
            = (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_l3) 
                << 0x10U) | (0xffffU & vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_3));
    } else {
        if (vlSymsp->TOP__avalon_microphone_system.__PVT__saw_rise) {
            vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_3 
                = ((0xffff0000U & vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_3) 
                   | (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_r3));
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__134(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__134\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET)
            ? 0U : (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__next_state));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__135(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__135\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__saw_fall) {
        vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_1 
            = (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_l) 
                << 0x10U) | (0xffffU & vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_1));
    } else {
        if (vlSymsp->TOP__avalon_microphone_system.__PVT__saw_rise) {
            vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_1 
                = ((0xffff0000U & vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_1) 
                   | (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_r));
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__136(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__136\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_counter 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET)
            ? 0U : vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter);
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__137(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__137\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_finish_signal 
        = ((~ (IData)(vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET)) 
           & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__finish_signal));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__138(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__138\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__half_way_ack) 
         | (IData)(vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__half_way_latch = 0U;
    } else {
        if ((vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples 
             <= (vlSymsp->TOP__avalon_microphone_system.__PVT__num_samps 
                 >> 1U))) {
            vlSymsp->TOP__avalon_microphone_system.__PVT__half_way_latch = 1U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__139(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__139\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__last_test_clk 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__cur_test_clk;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__140(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__140\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET) {
        vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v0 = 1U;
    } else {
        vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound2 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
            [0U];
        vlSymsp->TOP__avalon_microphone_system.__Vdlyvval__dma_yo__DOT__prev_starting_address__v5 
            = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound2;
        vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v5 = 1U;
        vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound2 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
            [1U];
        vlSymsp->TOP__avalon_microphone_system.__Vdlyvval__dma_yo__DOT__prev_starting_address__v6 
            = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound2;
        vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v6 = 1U;
        vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound2 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
            [2U];
        vlSymsp->TOP__avalon_microphone_system.__Vdlyvval__dma_yo__DOT__prev_starting_address__v7 
            = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound2;
        vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v7 = 1U;
        vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound2 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
            [3U];
        vlSymsp->TOP__avalon_microphone_system.__Vdlyvval__dma_yo__DOT__prev_starting_address__v8 
            = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound2;
        vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v8 = 1U;
        vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound2 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
            [4U];
        vlSymsp->TOP__avalon_microphone_system.__Vdlyvval__dma_yo__DOT__prev_starting_address__v9 
            = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound2;
        vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v9 = 1U;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__141(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__141\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__counter 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__145(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__145\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_1 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_1;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__146(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__146\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_3 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_3;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__147(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__147\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_2 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_2;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__148(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__148\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__ready_data_4 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__ready_data_4;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__168(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__168\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v0) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address[0U] = 0U;
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address[1U] = 0U;
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address[2U] = 0U;
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address[3U] = 0U;
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address[4U] = 0U;
    }
    if (vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v5) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address[0U] 
            = vlSymsp->TOP__avalon_microphone_system.__Vdlyvval__dma_yo__DOT__prev_starting_address__v5;
    }
    if (vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v6) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address[1U] 
            = vlSymsp->TOP__avalon_microphone_system.__Vdlyvval__dma_yo__DOT__prev_starting_address__v6;
    }
    if (vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v7) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address[2U] 
            = vlSymsp->TOP__avalon_microphone_system.__Vdlyvval__dma_yo__DOT__prev_starting_address__v7;
    }
    if (vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v8) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address[3U] 
            = vlSymsp->TOP__avalon_microphone_system.__Vdlyvval__dma_yo__DOT__prev_starting_address__v8;
    }
    if (vlSymsp->TOP__avalon_microphone_system.__Vdlyvset__dma_yo__DOT__prev_starting_address__v9) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address[4U] 
            = vlSymsp->TOP__avalon_microphone_system.__Vdlyvval__dma_yo__DOT__prev_starting_address__v9;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__185(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__185\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state)))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__unnamedblk5__DOT__i = 5U;
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_combo__TOP__avalon_microphone_system__186(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_combo__TOP__avalon_microphone_system__186\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__Vcellinp__dma_yo__RESET 
        = ((IData)(vlTOPp->RESET) | (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__restart_sig));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__187(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__187\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__start)))) {
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__unnamedblk4__DOT__i = 5U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__188(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__188\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__finish_signal 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_finish_signal;
    if ((4U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__finish_signal = 1U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__finish_signal = 0U;
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__189(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__189\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsd) 
         & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsp))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__mic_l2 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__190(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__190\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsd)) 
         & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsp))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__mic_r2 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__191(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__191\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsd) 
         & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsp))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__mic_l3 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__192(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__192\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsd)) 
         & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsp))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__mic_r3 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__193(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__193\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsd) 
         & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsp))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__mic_l4 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__194(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__194\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsd)) 
         & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsp))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__mic_r4 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__195(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__195\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->RESET)))) {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U != (IData)(vlTOPp->AVL_ADDR))) {
                                if ((5U != (IData)(vlTOPp->AVL_ADDR))) {
                                    if ((6U != (IData)(vlTOPp->AVL_ADDR))) {
                                        if ((7U == (IData)(vlTOPp->AVL_ADDR))) {
                                            if ((1U 
                                                 & (~ vlTOPp->AVL_WRITEDATA))) {
                                                vlSymsp->TOP__avalon_microphone_system.__PVT__half_way_ack = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlSymsp->TOP__avalon_microphone_system.__PVT__half_way_ack = 0U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__196(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__196\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->RESET)))) {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U != (IData)(vlTOPp->AVL_ADDR))) {
                                if ((5U != (IData)(vlTOPp->AVL_ADDR))) {
                                    if ((6U != (IData)(vlTOPp->AVL_ADDR))) {
                                        if ((7U == (IData)(vlTOPp->AVL_ADDR))) {
                                            if ((1U 
                                                 & vlTOPp->AVL_WRITEDATA)) {
                                                if (
                                                    (1U 
                                                     & vlTOPp->AVL_WRITEDATA)) {
                                                    vlSymsp->TOP__avalon_microphone_system.__PVT__end_ack = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlSymsp->TOP__avalon_microphone_system.__PVT__end_ack = 0U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__197(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__197\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.coef_data = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U != (IData)(vlTOPp->AVL_ADDR))) {
                                if ((5U == (IData)(vlTOPp->AVL_ADDR))) {
                                    vlSymsp->TOP__avalon_microphone_system.coef_data 
                                        = (0xffffU 
                                           & vlTOPp->AVL_WRITEDATA);
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlSymsp->TOP__avalon_microphone_system.coef_data 
                = vlSymsp->TOP__avalon_microphone_system.__PVT__p_coef_data;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__198(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__198\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsd) 
         & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsp))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__mic_l 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__199(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__199\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsd)) 
         & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsp))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__mic_r 
            = vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__200(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__200\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.vol_8 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlSymsp->TOP__avalon_microphone_system.vol_8 
                                    = ((7U == (7U & 
                                               (vlTOPp->AVL_WRITEDATA 
                                                >> 8U)))
                                        ? vlTOPp->AVL_WRITEDATA
                                        : vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_8);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__201(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__201\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.vol_7 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlSymsp->TOP__avalon_microphone_system.vol_7 
                                    = ((6U == (7U & 
                                               (vlTOPp->AVL_WRITEDATA 
                                                >> 8U)))
                                        ? vlTOPp->AVL_WRITEDATA
                                        : vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_7);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__202(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__202\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.vol_1 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlSymsp->TOP__avalon_microphone_system.vol_1 
                                    = ((0U == (7U & 
                                               (vlTOPp->AVL_WRITEDATA 
                                                >> 8U)))
                                        ? vlTOPp->AVL_WRITEDATA
                                        : vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_1);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__203(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__203\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.vol_2 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlSymsp->TOP__avalon_microphone_system.vol_2 
                                    = ((1U == (7U & 
                                               (vlTOPp->AVL_WRITEDATA 
                                                >> 8U)))
                                        ? vlTOPp->AVL_WRITEDATA
                                        : vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_2);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__204(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__204\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.vol_3 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlSymsp->TOP__avalon_microphone_system.vol_3 
                                    = ((2U == (7U & 
                                               (vlTOPp->AVL_WRITEDATA 
                                                >> 8U)))
                                        ? vlTOPp->AVL_WRITEDATA
                                        : vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_3);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__205(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__205\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.vol_4 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlSymsp->TOP__avalon_microphone_system.vol_4 
                                    = ((3U == (7U & 
                                               (vlTOPp->AVL_WRITEDATA 
                                                >> 8U)))
                                        ? vlTOPp->AVL_WRITEDATA
                                        : vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_4);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__206(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__206\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.vol_5 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlSymsp->TOP__avalon_microphone_system.vol_5 
                                    = ((4U == (7U & 
                                               (vlTOPp->AVL_WRITEDATA 
                                                >> 8U)))
                                        ? vlTOPp->AVL_WRITEDATA
                                        : vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_5);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__207(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__207\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.vol_6 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlSymsp->TOP__avalon_microphone_system.vol_6 
                                    = ((5U == (7U & 
                                               (vlTOPp->AVL_WRITEDATA 
                                                >> 8U)))
                                        ? vlTOPp->AVL_WRITEDATA
                                        : vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_6);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__208(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__208\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__num_samps = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U == (IData)(vlTOPp->AVL_ADDR))) {
                        vlSymsp->TOP__avalon_microphone_system.__PVT__num_samps 
                            = vlTOPp->AVL_WRITEDATA;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__209(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__209\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__cur_test_clk 
        = vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__217(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__217\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__p_coef_data 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__p_coef_data;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__218(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__218\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_8 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_8;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__219(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__219\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_7 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_7;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__220(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__220\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_6 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_6;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__221(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__221\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_5 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_5;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__222(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__222\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_1 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_1;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__223(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__223\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_2 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_2;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__224(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__224\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_3 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_3;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__225(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__225\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__p_vol_4 
        = vlSymsp->TOP__avalon_microphone_system.__Vdly__p_vol_4;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__239(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__239\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.fin_signal 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__finish_signal;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__244(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__244\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsd 
        = vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__245(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__245\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsd 
        = vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__246(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__246\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsd 
        = vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__247(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__247\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsd 
        = vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__248(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__248\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsp) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__shift = 0U;
    }
    if ((0x10U > (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__counter))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__shift 
            = (((~ ((IData)(1U) << (0xfU & ((IData)(0xfU) 
                                            - (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__counter))))) 
                & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__shift)) 
               | ((IData)(vlTOPp->GPIO_DIN1) << (0xfU 
                                                 & ((IData)(0xfU) 
                                                    - (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__counter)))));
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__249(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__249\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsp) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__shift = 0U;
    }
    if ((0x10U > (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__counter))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__shift 
            = (((~ ((IData)(1U) << (0xfU & ((IData)(0xfU) 
                                            - (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__counter))))) 
                & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__shift)) 
               | ((IData)(vlTOPp->GPIO_DIN2) << (0xfU 
                                                 & ((IData)(0xfU) 
                                                    - (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__counter)))));
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__250(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__250\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsp) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__shift = 0U;
    }
    if ((0x10U > (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__counter))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__shift 
            = (((~ ((IData)(1U) << (0xfU & ((IData)(0xfU) 
                                            - (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__counter))))) 
                & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__shift)) 
               | ((IData)(vlTOPp->GPIO_DIN3) << (0xfU 
                                                 & ((IData)(0xfU) 
                                                    - (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__counter)))));
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__251(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__251\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsp) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__shift = 0U;
    }
    if ((0x10U > (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__counter))) {
        vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__shift 
            = (((~ ((IData)(1U) << (0xfU & ((IData)(0xfU) 
                                            - (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__counter))))) 
                & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__shift)) 
               | ((IData)(vlTOPp->GPIO_DIN4) << (0xfU 
                                                 & ((IData)(0xfU) 
                                                    - (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__counter)))));
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_combo__TOP__avalon_microphone_system__252(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_combo__TOP__avalon_microphone_system__252\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__next_state 
        = ((4U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
            ? ((2U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
                ? 0U : ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
                         ? ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__start)
                             ? 5U : 0U) : ((IData)(vlTOPp->AM_WAITREQUEST)
                                            ? 4U : 
                                           ((4U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)
                                             ? ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__done)
                                                 ? 5U
                                                 : 3U)
                                             : 3U))))
            : ((2U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
                ? ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
                    ? ((IData)(vlTOPp->AM_WAITREQUEST)
                        ? 3U : ((0U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)
                                 ? ((vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
                                     [4U] == ((IData)(0x249f000U) 
                                              + vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr))
                                     ? 2U : ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__ready_read_now)
                                              ? 4U : 3U))
                                 : 4U)) : 3U) : ((1U 
                                                  & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__start)
                                                   ? 1U
                                                   : 0U))));
    vlSymsp->TOP__avalon_microphone_system.AM_WRITE 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_AM_WRITE;
    vlSymsp->TOP__avalon_microphone_system.AM_ADDR 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_AM_ADDR;
    vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address
        [0U];
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[0U] 
        = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3;
    vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address
        [1U];
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[1U] 
        = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3;
    vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address
        [2U];
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[2U] 
        = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3;
    vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address
        [3U];
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[3U] 
        = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3;
    vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_starting_address
        [4U];
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[4U] 
        = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound3;
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_num_samples;
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__done 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_done;
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_counter;
    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__mic_count 
        = vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_mic_count;
    vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 1U;
    vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
    if ((4U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples 
                    = vlSymsp->TOP__avalon_microphone_system.__PVT__num_samps;
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter = 0U;
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__done = 0U;
                vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                vlSymsp->TOP__avalon_microphone_system.AM_ADDR 
                    = vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr;
            } else {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__mic_count 
                    = (7U & ((IData)(1U) + vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter));
                if ((1U & (~ (IData)(vlTOPp->AM_WAITREQUEST)))) {
                    if ((0U < vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples)) {
                        vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound6 
                            = ((IData)(4U) + ((4U >= 
                                               (7U 
                                                & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter))
                                               ? vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
                                              [(7U 
                                                & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)]
                                               : 0U));
                        vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                        if ((4U >= (7U & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter))) {
                            vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[(7U 
                                                                                & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)] 
                                = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound6;
                        }
                        vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples 
                            = ((4U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)
                                ? (vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples 
                                   - (IData)(1U)) : vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__prev_num_samples);
                    } else {
                        if ((0U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples)) {
                            vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__done = 1U;
                            vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                            vlSymsp->TOP__avalon_microphone_system.AM_ADDR = 0U;
                            vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                            vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 0U;
                        }
                    }
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter 
                        = ((4U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)
                            ? 0U : ((IData)(1U) + vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__mic_count 
                    = (7U & ((IData)(1U) + vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter));
                if ((0U == vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)) {
                    if (vlSymsp->TOP__avalon_microphone_system.__PVT__ready_read_now) {
                        if (vlTOPp->AM_WAITREQUEST) {
                            vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                            vlSymsp->TOP__avalon_microphone_system.AM_ADDR = 0U;
                            vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                            vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 0U;
                        } else {
                            vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 1U;
                            vlSymsp->TOP__avalon_microphone_system.AM_ADDR 
                                = ((4U >= (7U & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter))
                                    ? vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
                                   [(7U & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)]
                                    : 0U);
                            vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                            vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 1U;
                        }
                    } else {
                        vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                        vlSymsp->TOP__avalon_microphone_system.AM_ADDR = 0U;
                        vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                        vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 0U;
                    }
                } else {
                    if (vlTOPp->AM_WAITREQUEST) {
                        vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                        vlSymsp->TOP__avalon_microphone_system.AM_ADDR = 0U;
                        vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                        vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 0U;
                    } else {
                        vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 1U;
                        vlSymsp->TOP__avalon_microphone_system.AM_ADDR 
                            = ((4U >= (7U & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter))
                                ? vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address
                               [(7U & vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter)]
                                : 0U);
                        vlSymsp->TOP__avalon_microphone_system.AM_BYTEENABLE = 0xfU;
                        vlSymsp->TOP__avalon_microphone_system.AM_BURSTCOUNT = 1U;
                    }
                }
            } else {
                vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5 
                    = vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr;
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[0U] 
                    = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5;
                vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x753000U) + vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr);
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[1U] 
                    = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5;
                vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5 
                    = ((IData)(0xea6000U) + vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr);
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[2U] 
                    = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5;
                vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x15f9000U) + vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr);
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[3U] 
                    = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5;
                vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x1d4c000U) + vlSymsp->TOP__avalon_microphone_system.__PVT__start_addr);
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[4U] 
                    = vlSymsp->TOP__avalon_microphone_system.dma_yo__DOT____Vlvbound5;
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__state))) {
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__counter = 0U;
            } else {
                if (vlSymsp->TOP__avalon_microphone_system.__PVT__start) {
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples 
                        = vlSymsp->TOP__avalon_microphone_system.__PVT__num_samps;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__mic_count = 2U;
                } else {
                    vlSymsp->TOP__avalon_microphone_system.AM_ADDR = 0U;
                    vlSymsp->TOP__avalon_microphone_system.AM_WRITE = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__num_samples = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[0U] = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[1U] = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[2U] = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[3U] = 0U;
                    vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__starting_address[4U] = 0U;
                }
                vlSymsp->TOP__avalon_microphone_system.__PVT__dma_yo__DOT__done = 0U;
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__253(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__253\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__found_edge 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__last_test_clk) 
           ^ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__cur_test_clk));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__258(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__258\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__saw_rise 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__found_edge) 
           & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__cur_test_clk));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__259(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__259\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__saw_fall 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__found_edge) 
           & (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__detect__DOT__last_test_clk));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__260(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__260\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsp 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsd) 
           ^ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m1__DOT__wsdd));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__261(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__261\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsp 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsd) 
           ^ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m2__DOT__wsdd));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__262(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__262\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsp 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsd) 
           ^ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m3__DOT__wsdd));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__263(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_sequent__TOP__avalon_microphone_system__263\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsp 
        = ((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsd) 
           ^ (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__m4__DOT__wsdd));
}

VL_INLINE_OPT void Vavalon_microphone_system_avalon_microphone_system::_combo__TOP__avalon_microphone_system__264(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_combo__TOP__avalon_microphone_system__264\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__avalon_microphone_system.AVL_READDATA 
        = (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_READ))
            ? ((0U == (IData)(vlTOPp->AVL_ADDR)) ? 
               (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__saw_rise) 
                 << 1U) | (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__saw_fall))
                : ((1U == (IData)(vlTOPp->AVL_ADDR))
                    ? (((IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_l) 
                        << 0x10U) | (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__mic_r))
                    : ((2U == (IData)(vlTOPp->AVL_ADDR))
                        ? (IData)(vlSymsp->TOP__avalon_microphone_system.fin_signal)
                        : ((3U == (IData)(vlTOPp->AVL_ADDR))
                            ? (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__half_way_latch)
                            : ((4U == (IData)(vlTOPp->AVL_ADDR))
                                ? (IData)(vlSymsp->TOP__avalon_microphone_system.__PVT__end_latch)
                                : 0U))))) : 0U);
}

void Vavalon_microphone_system_avalon_microphone_system::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vavalon_microphone_system_avalon_microphone_system::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    RESET = VL_RAND_RESET_I(1);
    AM_ADDR = VL_RAND_RESET_I(32);
    AM_BURSTCOUNT = VL_RAND_RESET_I(3);
    AM_WRITE = VL_RAND_RESET_I(1);
    AM_WRITEDATA = VL_RAND_RESET_I(32);
    AM_BYTEENABLE = VL_RAND_RESET_I(4);
    AM_WAITREQUEST = VL_RAND_RESET_I(1);
    AVL_READ = VL_RAND_RESET_I(1);
    AVL_WRITE = VL_RAND_RESET_I(1);
    AVL_CS = VL_RAND_RESET_I(1);
    AVL_ADDR = VL_RAND_RESET_I(3);
    AVL_WRITEDATA = VL_RAND_RESET_I(32);
    AVL_READDATA = VL_RAND_RESET_I(32);
    AUD_BCLK = VL_RAND_RESET_I(1);
    AUD_ADCLRCK = VL_RAND_RESET_I(1);
    GPIO_DIN1 = VL_RAND_RESET_I(1);
    GPIO_DIN2 = VL_RAND_RESET_I(1);
    GPIO_DIN3 = VL_RAND_RESET_I(1);
    GPIO_DIN4 = VL_RAND_RESET_I(1);
    fir_left_data = VL_RAND_RESET_I(32);
    fir_right_data = VL_RAND_RESET_I(32);
    adc_data = VL_RAND_RESET_I(32);
    vol_1 = VL_RAND_RESET_I(32);
    vol_2 = VL_RAND_RESET_I(32);
    vol_3 = VL_RAND_RESET_I(32);
    vol_4 = VL_RAND_RESET_I(32);
    vol_5 = VL_RAND_RESET_I(32);
    vol_6 = VL_RAND_RESET_I(32);
    vol_7 = VL_RAND_RESET_I(32);
    vol_8 = VL_RAND_RESET_I(32);
    coef_data = VL_RAND_RESET_I(16);
    load_coef = VL_RAND_RESET_I(1);
    change_filter = VL_RAND_RESET_I(1);
    sample_ready = VL_RAND_RESET_I(1);
    codec_stream = VL_RAND_RESET_I(32);
    __PVT__p_vol_1 = VL_RAND_RESET_I(32);
    __PVT__p_vol_2 = VL_RAND_RESET_I(32);
    __PVT__p_vol_3 = VL_RAND_RESET_I(32);
    __PVT__p_vol_4 = VL_RAND_RESET_I(32);
    __PVT__p_vol_5 = VL_RAND_RESET_I(32);
    __PVT__p_vol_6 = VL_RAND_RESET_I(32);
    __PVT__p_vol_7 = VL_RAND_RESET_I(32);
    __PVT__p_vol_8 = VL_RAND_RESET_I(32);
    __PVT__p_coef_data = VL_RAND_RESET_I(16);
    __PVT__saw_rise = VL_RAND_RESET_I(1);
    __PVT__saw_fall = VL_RAND_RESET_I(1);
    __PVT__start = VL_RAND_RESET_I(1);
    __PVT__ready_read_now = VL_RAND_RESET_I(1);
    __PVT__counter = VL_RAND_RESET_I(3);
    fin_signal = VL_RAND_RESET_I(1);
    __PVT__restart_sig = VL_RAND_RESET_I(1);
    __PVT__half_way_latch = VL_RAND_RESET_I(1);
    __PVT__half_way_ack = VL_RAND_RESET_I(1);
    __PVT__end_latch = VL_RAND_RESET_I(1);
    __PVT__end_ack = VL_RAND_RESET_I(1);
    __PVT__start_addr = VL_RAND_RESET_I(32);
    __PVT__num_samps = VL_RAND_RESET_I(32);
    __Vcellinp__dma_yo__RESET = VL_RAND_RESET_I(1);
    __PVT__mic_l = VL_RAND_RESET_I(16);
    __PVT__mic_r = VL_RAND_RESET_I(16);
    __PVT__mic_l2 = VL_RAND_RESET_I(16);
    __PVT__mic_r2 = VL_RAND_RESET_I(16);
    __PVT__mic_l3 = VL_RAND_RESET_I(16);
    __PVT__mic_r3 = VL_RAND_RESET_I(16);
    __PVT__mic_l4 = VL_RAND_RESET_I(16);
    __PVT__mic_r4 = VL_RAND_RESET_I(16);
    __PVT__ready_data_1 = VL_RAND_RESET_I(32);
    __PVT__ready_data_2 = VL_RAND_RESET_I(32);
    __PVT__ready_data_3 = VL_RAND_RESET_I(32);
    __PVT__ready_data_4 = VL_RAND_RESET_I(32);
    __PVT__dma_yo__DOT__done = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __PVT__dma_yo__DOT__starting_address[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __PVT__dma_yo__DOT__prev_starting_address[__Vi0] = 0;
    }}
    __PVT__dma_yo__DOT__finish_signal = VL_RAND_RESET_I(1);
    __PVT__dma_yo__DOT__mic_count = VL_RAND_RESET_I(3);
    __PVT__dma_yo__DOT__prev_mic_count = VL_RAND_RESET_I(3);
    __PVT__dma_yo__DOT__num_samples = 0;
    __PVT__dma_yo__DOT__prev_num_samples = 0;
    __PVT__dma_yo__DOT__counter = 0;
    __PVT__dma_yo__DOT__prev_counter = 0;
    __PVT__dma_yo__DOT__prev_AM_ADDR = VL_RAND_RESET_I(32);
    __PVT__dma_yo__DOT__prev_AM_WRITE = VL_RAND_RESET_I(1);
    __PVT__dma_yo__DOT__prev_done = VL_RAND_RESET_I(1);
    __PVT__dma_yo__DOT__prev_finish_signal = VL_RAND_RESET_I(1);
    __PVT__dma_yo__DOT__state = VL_RAND_RESET_I(3);
    __PVT__dma_yo__DOT__next_state = VL_RAND_RESET_I(3);
    __PVT__dma_yo__DOT__unnamedblk1__DOT__i = 0;
    __PVT__dma_yo__DOT__unnamedblk2__DOT__i = 0;
    __PVT__dma_yo__DOT__unnamedblk4__DOT__i = 0;
    __PVT__dma_yo__DOT__unnamedblk5__DOT__i = 0;
    dma_yo__DOT____Vlvbound2 = 0;
    dma_yo__DOT____Vlvbound3 = 0;
    dma_yo__DOT____Vlvbound5 = 0;
    dma_yo__DOT____Vlvbound6 = 0;
    __PVT__detect__DOT__found_edge = VL_RAND_RESET_I(1);
    __PVT__detect__DOT__cur_test_clk = VL_RAND_RESET_I(1);
    __PVT__detect__DOT__last_test_clk = VL_RAND_RESET_I(1);
    __PVT__m1__DOT__wsd = VL_RAND_RESET_I(1);
    __PVT__m1__DOT__wsdd = VL_RAND_RESET_I(1);
    __PVT__m1__DOT__wsp = VL_RAND_RESET_I(1);
    __PVT__m1__DOT__counter = VL_RAND_RESET_I(5);
    __PVT__m1__DOT__shift = VL_RAND_RESET_I(16);
    __PVT__m2__DOT__wsd = VL_RAND_RESET_I(1);
    __PVT__m2__DOT__wsdd = VL_RAND_RESET_I(1);
    __PVT__m2__DOT__wsp = VL_RAND_RESET_I(1);
    __PVT__m2__DOT__counter = VL_RAND_RESET_I(5);
    __PVT__m2__DOT__shift = VL_RAND_RESET_I(16);
    __PVT__m3__DOT__wsd = VL_RAND_RESET_I(1);
    __PVT__m3__DOT__wsdd = VL_RAND_RESET_I(1);
    __PVT__m3__DOT__wsp = VL_RAND_RESET_I(1);
    __PVT__m3__DOT__counter = VL_RAND_RESET_I(5);
    __PVT__m3__DOT__shift = VL_RAND_RESET_I(16);
    __PVT__m4__DOT__wsd = VL_RAND_RESET_I(1);
    __PVT__m4__DOT__wsdd = VL_RAND_RESET_I(1);
    __PVT__m4__DOT__wsp = VL_RAND_RESET_I(1);
    __PVT__m4__DOT__counter = VL_RAND_RESET_I(5);
    __PVT__m4__DOT__shift = VL_RAND_RESET_I(16);
    __Vdly__p_vol_4 = VL_RAND_RESET_I(32);
    __Vdly__p_vol_3 = VL_RAND_RESET_I(32);
    __Vdly__p_vol_2 = VL_RAND_RESET_I(32);
    __Vdly__p_vol_1 = VL_RAND_RESET_I(32);
    __Vdly__p_vol_5 = VL_RAND_RESET_I(32);
    __Vdly__p_vol_6 = VL_RAND_RESET_I(32);
    __Vdly__p_vol_7 = VL_RAND_RESET_I(32);
    __Vdly__p_vol_8 = VL_RAND_RESET_I(32);
    __Vdly__p_coef_data = VL_RAND_RESET_I(16);
    __Vdly__counter = VL_RAND_RESET_I(3);
    __Vdly__ready_data_4 = VL_RAND_RESET_I(32);
    __Vdly__ready_data_2 = VL_RAND_RESET_I(32);
    __Vdly__ready_data_3 = VL_RAND_RESET_I(32);
    __Vdly__ready_data_1 = VL_RAND_RESET_I(32);
    __Vdlyvset__dma_yo__DOT__prev_starting_address__v0 = 0;
    __Vdlyvval__dma_yo__DOT__prev_starting_address__v5 = 0;
    __Vdlyvset__dma_yo__DOT__prev_starting_address__v5 = 0;
    __Vdlyvval__dma_yo__DOT__prev_starting_address__v6 = 0;
    __Vdlyvset__dma_yo__DOT__prev_starting_address__v6 = 0;
    __Vdlyvval__dma_yo__DOT__prev_starting_address__v7 = 0;
    __Vdlyvset__dma_yo__DOT__prev_starting_address__v7 = 0;
    __Vdlyvval__dma_yo__DOT__prev_starting_address__v8 = 0;
    __Vdlyvset__dma_yo__DOT__prev_starting_address__v8 = 0;
    __Vdlyvval__dma_yo__DOT__prev_starting_address__v9 = 0;
    __Vdlyvset__dma_yo__DOT__prev_starting_address__v9 = 0;
    __Vdly__m1__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__m2__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__m3__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__m4__DOT__counter = VL_RAND_RESET_I(5);
}
