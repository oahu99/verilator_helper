// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vavalon_microphone_system__Syms.h"


//======================

void Vavalon_microphone_system::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vavalon_microphone_system* t = (Vavalon_microphone_system*)userthis;
    Vavalon_microphone_system__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vavalon_microphone_system::traceChgThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vilp;
    // Body
    {
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [8U]))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x10U]))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x12U]))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x14U]))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x15U]))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x17U]))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x1dU]))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x1eU]))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x1fU]))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x20U]))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x36U]))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x37U]))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x38U]))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x39U]))) {
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x3eU]))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x3fU]))) {
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x40U]))) {
            vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x41U]))) {
            vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x42U]))) {
            vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x43U]))) {
            vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x44U]))) {
            vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0U] | vlTOPp->__Vm_traceActivity
                         [0x45U]))) {
            vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            vlTOPp->traceChgThis__31(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            vlTOPp->traceChgThis__32(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            vlTOPp->traceChgThis__33(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            vlTOPp->traceChgThis__34(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            vlTOPp->traceChgThis__35(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            vlTOPp->traceChgThis__36(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
            vlTOPp->traceChgThis__37(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            vlTOPp->traceChgThis__38(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x13U])) {
            vlTOPp->traceChgThis__39(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x16U])) {
            vlTOPp->traceChgThis__40(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x18U])) {
            vlTOPp->traceChgThis__41(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x19U])) {
            vlTOPp->traceChgThis__42(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1aU])) {
            vlTOPp->traceChgThis__43(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1bU])) {
            vlTOPp->traceChgThis__44(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1cU])) {
            vlTOPp->traceChgThis__45(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x21U])) {
            vlTOPp->traceChgThis__46(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x22U])) {
            vlTOPp->traceChgThis__47(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x23U])) {
            vlTOPp->traceChgThis__48(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x24U])) {
            vlTOPp->traceChgThis__49(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x25U])) {
            vlTOPp->traceChgThis__50(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x26U])) {
            vlTOPp->traceChgThis__51(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x27U])) {
            vlTOPp->traceChgThis__52(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x28U])) {
            vlTOPp->traceChgThis__53(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x29U])) {
            vlTOPp->traceChgThis__54(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2aU])) {
            vlTOPp->traceChgThis__55(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2bU])) {
            vlTOPp->traceChgThis__56(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2cU])) {
            vlTOPp->traceChgThis__57(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2dU])) {
            vlTOPp->traceChgThis__58(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2eU])) {
            vlTOPp->traceChgThis__59(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2fU])) {
            vlTOPp->traceChgThis__60(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x30U])) {
            vlTOPp->traceChgThis__61(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x31U])) {
            vlTOPp->traceChgThis__62(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x32U])) {
            vlTOPp->traceChgThis__63(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x33U])) {
            vlTOPp->traceChgThis__64(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x34U])) {
            vlTOPp->traceChgThis__65(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x35U])) {
            vlTOPp->traceChgThis__66(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3aU])) {
            vlTOPp->traceChgThis__67(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3bU])) {
            vlTOPp->traceChgThis__68(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3cU])) {
            vlTOPp->traceChgThis__69(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3dU])) {
            vlTOPp->traceChgThis__70(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__71(vlSymsp, vcdp, code);
    }
    // Final
    __Vilp = 0U;
    while ((__Vilp <= 0x45U)) {
        vlTOPp->__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

void Vavalon_microphone_system::traceChgThis__2(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->avalon_microphone_system__DOT__restart_sig));
    }
}

void Vavalon_microphone_system::traceChgThis__3(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,(vlTOPp->avalon_microphone_system__DOT__start));
        vcdp->chgBit(c+17,((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT__start)))));
    }
}

void Vavalon_microphone_system::traceChgThis__4(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25,(vlTOPp->avalon_microphone_system__DOT__end_latch));
    }
}

void Vavalon_microphone_system::traceChgThis__5(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+33,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_counter),32);
    }
}

void Vavalon_microphone_system::traceChgThis__6(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+41,(vlTOPp->avalon_microphone_system__DOT__half_way_latch));
    }
}

void Vavalon_microphone_system::traceChgThis__7(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+49,(vlTOPp->avalon_microphone_system__DOT__counter),3);
    }
}

void Vavalon_microphone_system::traceChgThis__8(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+57,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk5__DOT__i),32);
    }
}

void Vavalon_microphone_system::traceChgThis__9(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+65,(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET));
    }
}

void Vavalon_microphone_system::traceChgThis__10(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+73,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk4__DOT__i),32);
    }
}

void Vavalon_microphone_system::traceChgThis__11(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+81,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal));
    }
}

void Vavalon_microphone_system::traceChgThis__12(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+89,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd));
    }
}

void Vavalon_microphone_system::traceChgThis__13(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+97,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd));
    }
}

void Vavalon_microphone_system::traceChgThis__14(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+105,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd));
    }
}

void Vavalon_microphone_system::traceChgThis__15(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+113,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd));
    }
}

void Vavalon_microphone_system::traceChgThis__16(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+121,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count),3);
        vcdp->chgBit(c+129,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done));
        vcdp->chgBus(c+137,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[0]),32);
        vcdp->chgBus(c+138,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[1]),32);
        vcdp->chgBus(c+139,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[2]),32);
        vcdp->chgBus(c+140,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[3]),32);
        vcdp->chgBus(c+141,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[4]),32);
        vcdp->chgBus(c+177,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples),32);
        vcdp->chgBus(c+185,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter),32);
        vcdp->chgBus(c+193,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__next_state),3);
    }
}

void Vavalon_microphone_system::traceChgThis__17(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+201,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge));
    }
}

void Vavalon_microphone_system::traceChgThis__18(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+209,(vlTOPp->avalon_microphone_system__DOT__saw_rise));
    }
}

void Vavalon_microphone_system::traceChgThis__19(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+217,(vlTOPp->avalon_microphone_system__DOT__saw_fall));
    }
}

void Vavalon_microphone_system::traceChgThis__20(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+225,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp));
    }
}

void Vavalon_microphone_system::traceChgThis__21(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+233,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp));
    }
}

void Vavalon_microphone_system::traceChgThis__22(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+241,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp));
    }
}

void Vavalon_microphone_system::traceChgThis__23(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+249,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp));
    }
}

void Vavalon_microphone_system::traceChgThis__24(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+257,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk1__DOT__i),32);
        vcdp->chgBus(c+265,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk2__DOT__i),32);
    }
}

void Vavalon_microphone_system::traceChgThis__25(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+273,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter),5);
    }
}

void Vavalon_microphone_system::traceChgThis__26(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+281,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter),5);
    }
}

void Vavalon_microphone_system::traceChgThis__27(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+289,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter),5);
    }
}

void Vavalon_microphone_system::traceChgThis__28(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+297,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter),5);
    }
}

void Vavalon_microphone_system::traceChgThis__29(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+305,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsdd));
        vcdp->chgBit(c+313,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsdd));
    }
}

void Vavalon_microphone_system::traceChgThis__30(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+321,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsdd));
        vcdp->chgBit(c+329,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsdd));
    }
}

void Vavalon_microphone_system::traceChgThis__31(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+337,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR),32);
    }
}

void Vavalon_microphone_system::traceChgThis__32(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+345,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_done));
    }
}

void Vavalon_microphone_system::traceChgThis__33(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+353,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE));
    }
}

void Vavalon_microphone_system::traceChgThis__34(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+361,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count),3);
    }
}

void Vavalon_microphone_system::traceChgThis__35(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+369,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples),32);
    }
}

void Vavalon_microphone_system::traceChgThis__36(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+377,(vlTOPp->avalon_microphone_system__DOT__ready_read_now));
    }
}

void Vavalon_microphone_system::traceChgThis__37(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+385,(vlTOPp->avalon_microphone_system__DOT__start_addr),32);
    }
}

void Vavalon_microphone_system::traceChgThis__38(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+393,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state),3);
    }
}

void Vavalon_microphone_system::traceChgThis__39(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+401,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal));
    }
}

void Vavalon_microphone_system::traceChgThis__40(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+409,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk));
    }
}

void Vavalon_microphone_system::traceChgThis__41(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+417,(vlTOPp->avalon_microphone_system__DOT__ready_data_1),32);
    }
}

void Vavalon_microphone_system::traceChgThis__42(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+425,(vlTOPp->avalon_microphone_system__DOT__ready_data_3),32);
    }
}

void Vavalon_microphone_system::traceChgThis__43(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+433,(vlTOPp->avalon_microphone_system__DOT__ready_data_2),32);
    }
}

void Vavalon_microphone_system::traceChgThis__44(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+441,(vlTOPp->avalon_microphone_system__DOT__ready_data_4),32);
    }
}

void Vavalon_microphone_system::traceChgThis__45(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+449,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[0]),32);
        vcdp->chgBus(c+450,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[1]),32);
        vcdp->chgBus(c+451,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[2]),32);
        vcdp->chgBus(c+452,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[3]),32);
        vcdp->chgBus(c+453,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[4]),32);
    }
}

void Vavalon_microphone_system::traceChgThis__46(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+489,(vlTOPp->avalon_microphone_system__DOT__mic_l2),16);
    }
}

void Vavalon_microphone_system::traceChgThis__47(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+497,(vlTOPp->avalon_microphone_system__DOT__mic_r2),16);
    }
}

void Vavalon_microphone_system::traceChgThis__48(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+505,(vlTOPp->avalon_microphone_system__DOT__mic_l3),16);
    }
}

void Vavalon_microphone_system::traceChgThis__49(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+513,(vlTOPp->avalon_microphone_system__DOT__mic_r3),16);
    }
}

void Vavalon_microphone_system::traceChgThis__50(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+521,(vlTOPp->avalon_microphone_system__DOT__mic_l4),16);
    }
}

void Vavalon_microphone_system::traceChgThis__51(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+529,(vlTOPp->avalon_microphone_system__DOT__mic_r4),16);
    }
}

void Vavalon_microphone_system::traceChgThis__52(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+537,(vlTOPp->avalon_microphone_system__DOT__mic_l),16);
    }
}

void Vavalon_microphone_system::traceChgThis__53(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+545,(vlTOPp->avalon_microphone_system__DOT__mic_r),16);
    }
}

void Vavalon_microphone_system::traceChgThis__54(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+553,(vlTOPp->avalon_microphone_system__DOT__half_way_ack));
    }
}

void Vavalon_microphone_system::traceChgThis__55(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+561,(vlTOPp->avalon_microphone_system__DOT__end_ack));
    }
}

void Vavalon_microphone_system::traceChgThis__56(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+569,(vlTOPp->avalon_microphone_system__DOT__num_samps),32);
    }
}

void Vavalon_microphone_system::traceChgThis__57(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+577,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk));
    }
}

void Vavalon_microphone_system::traceChgThis__58(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+585,(vlTOPp->avalon_microphone_system__DOT__p_coef_data),16);
    }
}

void Vavalon_microphone_system::traceChgThis__59(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+593,(vlTOPp->avalon_microphone_system__DOT__p_vol_8),32);
    }
}

void Vavalon_microphone_system::traceChgThis__60(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+601,(vlTOPp->avalon_microphone_system__DOT__p_vol_7),32);
    }
}

void Vavalon_microphone_system::traceChgThis__61(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+609,(vlTOPp->avalon_microphone_system__DOT__p_vol_6),32);
    }
}

void Vavalon_microphone_system::traceChgThis__62(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+617,(vlTOPp->avalon_microphone_system__DOT__p_vol_5),32);
    }
}

void Vavalon_microphone_system::traceChgThis__63(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+625,(vlTOPp->avalon_microphone_system__DOT__p_vol_1),32);
    }
}

void Vavalon_microphone_system::traceChgThis__64(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+633,(vlTOPp->avalon_microphone_system__DOT__p_vol_2),32);
    }
}

void Vavalon_microphone_system::traceChgThis__65(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+641,(vlTOPp->avalon_microphone_system__DOT__p_vol_3),32);
    }
}

void Vavalon_microphone_system::traceChgThis__66(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+649,(vlTOPp->avalon_microphone_system__DOT__p_vol_4),32);
    }
}

void Vavalon_microphone_system::traceChgThis__67(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+657,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__shift),16);
    }
}

void Vavalon_microphone_system::traceChgThis__68(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+665,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__shift),16);
    }
}

void Vavalon_microphone_system::traceChgThis__69(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+673,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__shift),16);
    }
}

void Vavalon_microphone_system::traceChgThis__70(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+681,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__shift),16);
    }
}

void Vavalon_microphone_system::traceChgThis__71(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+689,(vlTOPp->CLK));
        vcdp->chgBit(c+697,(vlTOPp->RESET));
        vcdp->chgBus(c+705,(vlTOPp->AM_ADDR),32);
        vcdp->chgBus(c+713,(vlTOPp->AM_BURSTCOUNT),3);
        vcdp->chgBit(c+721,(vlTOPp->AM_WRITE));
        vcdp->chgBus(c+729,(vlTOPp->AM_WRITEDATA),32);
        vcdp->chgBus(c+737,(vlTOPp->AM_BYTEENABLE),4);
        vcdp->chgBit(c+745,(vlTOPp->AM_WAITREQUEST));
        vcdp->chgBit(c+753,(vlTOPp->AVL_READ));
        vcdp->chgBit(c+761,(vlTOPp->AVL_WRITE));
        vcdp->chgBit(c+769,(vlTOPp->AVL_CS));
        vcdp->chgBus(c+777,(vlTOPp->AVL_ADDR),3);
        vcdp->chgBus(c+785,(vlTOPp->AVL_WRITEDATA),32);
        vcdp->chgBus(c+793,(vlTOPp->AVL_READDATA),32);
        vcdp->chgBit(c+801,(vlTOPp->AUD_BCLK));
        vcdp->chgBit(c+809,(vlTOPp->AUD_ADCLRCK));
        vcdp->chgBit(c+817,(vlTOPp->GPIO_DIN1));
        vcdp->chgBit(c+825,(vlTOPp->GPIO_DIN2));
        vcdp->chgBit(c+833,(vlTOPp->GPIO_DIN3));
        vcdp->chgBit(c+841,(vlTOPp->GPIO_DIN4));
        vcdp->chgBus(c+849,(vlTOPp->fir_left_data),32);
        vcdp->chgBus(c+857,(vlTOPp->fir_right_data),32);
        vcdp->chgBus(c+865,(vlTOPp->adc_data),32);
        vcdp->chgBus(c+873,(vlTOPp->vol_1),32);
        vcdp->chgBus(c+881,(vlTOPp->vol_2),32);
        vcdp->chgBus(c+889,(vlTOPp->vol_3),32);
        vcdp->chgBus(c+897,(vlTOPp->vol_4),32);
        vcdp->chgBus(c+905,(vlTOPp->vol_5),32);
        vcdp->chgBus(c+913,(vlTOPp->vol_6),32);
        vcdp->chgBus(c+921,(vlTOPp->vol_7),32);
        vcdp->chgBus(c+929,(vlTOPp->vol_8),32);
        vcdp->chgBus(c+937,(vlTOPp->coef_data),16);
        vcdp->chgBit(c+945,(vlTOPp->load_coef));
        vcdp->chgBit(c+953,(vlTOPp->change_filter));
        vcdp->chgBit(c+961,(vlTOPp->sample_ready));
        vcdp->chgBus(c+969,(vlTOPp->codec_stream),32);
        vcdp->chgBus(c+977,(((1U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                              ? vlTOPp->avalon_microphone_system__DOT__ready_data_1
                              : ((2U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                  ? vlTOPp->avalon_microphone_system__DOT__ready_data_2
                                  : ((3U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                      ? vlTOPp->avalon_microphone_system__DOT__ready_data_3
                                      : ((4U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                          ? vlTOPp->avalon_microphone_system__DOT__ready_data_4
                                          : ((5U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                              ? vlTOPp->adc_data
                                              : 0U)))))),32);
    }
}
