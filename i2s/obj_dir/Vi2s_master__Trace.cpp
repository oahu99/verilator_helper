// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vi2s_master__Syms.h"


//======================

void Vi2s_master::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vi2s_master* t=(Vi2s_master*)userthis;
    Vi2s_master__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vi2s_master::traceChgThis(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vi2s_master::traceChgThis__2(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1,(vlTOPp->i2s_master__DOT__wsd));
	vcdp->chgBit(c+2,(vlTOPp->i2s_master__DOT__wsp));
    }
}

void Vi2s_master::traceChgThis__3(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+3,(vlTOPp->i2s_master__DOT__counter),5);
    }
}

void Vi2s_master::traceChgThis__4(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+4,(vlTOPp->i2s_master__DOT__wsdd));
	vcdp->chgBus(c+5,(vlTOPp->i2s_master__DOT__shift),16);
    }
}

void Vi2s_master::traceChgThis__5(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+6,(vlTOPp->sck));
	vcdp->chgBit(c+7,(vlTOPp->ws));
	vcdp->chgBit(c+8,(vlTOPp->sd));
	vcdp->chgBus(c+9,(vlTOPp->data_left),16);
	vcdp->chgBus(c+10,(vlTOPp->data_right),16);
    }
}
