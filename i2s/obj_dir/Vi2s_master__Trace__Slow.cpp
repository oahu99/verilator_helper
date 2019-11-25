// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vi2s_master__Syms.h"


//======================

void Vi2s_master::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vi2s_master::traceInit, &Vi2s_master::traceFull, &Vi2s_master::traceChg, this);
}
void Vi2s_master::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vi2s_master* t=(Vi2s_master*)userthis;
    Vi2s_master__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vi2s_master::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vi2s_master* t=(Vi2s_master*)userthis;
    Vi2s_master__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vi2s_master::traceInitThis(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vi2s_master::traceFullThis(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vi2s_master::traceInitThis__1(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+6,"sck",-1);
	vcdp->declBit(c+7,"ws",-1);
	vcdp->declBit(c+8,"sd",-1);
	vcdp->declBus(c+9,"data_left",-1,15,0);
	vcdp->declBus(c+10,"data_right",-1,15,0);
	vcdp->declBus(c+11,"i2s_master width",-1,31,0);
	vcdp->declBit(c+6,"i2s_master sck",-1);
	vcdp->declBit(c+7,"i2s_master ws",-1);
	vcdp->declBit(c+8,"i2s_master sd",-1);
	vcdp->declBus(c+9,"i2s_master data_left",-1,15,0);
	vcdp->declBus(c+10,"i2s_master data_right",-1,15,0);
	vcdp->declBit(c+1,"i2s_master wsd",-1);
	vcdp->declBit(c+4,"i2s_master wsdd",-1);
	vcdp->declBit(c+2,"i2s_master wsp",-1);
	vcdp->declBus(c+3,"i2s_master counter",-1,4,0);
	vcdp->declBus(c+5,"i2s_master shift",-1,0,15);
    }
}

void Vi2s_master::traceFullThis__1(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit(c+1,(vlTOPp->i2s_master__DOT__wsd));
	vcdp->fullBit(c+2,(vlTOPp->i2s_master__DOT__wsp));
	vcdp->fullBus(c+3,(vlTOPp->i2s_master__DOT__counter),5);
	vcdp->fullBit(c+4,(vlTOPp->i2s_master__DOT__wsdd));
	vcdp->fullBus(c+5,(vlTOPp->i2s_master__DOT__shift),16);
	vcdp->fullBit(c+6,(vlTOPp->sck));
	vcdp->fullBit(c+7,(vlTOPp->ws));
	vcdp->fullBit(c+8,(vlTOPp->sd));
	vcdp->fullBus(c+9,(vlTOPp->data_left),16);
	vcdp->fullBus(c+10,(vlTOPp->data_right),16);
	vcdp->fullBus(c+11,(0x10U),32);
    }
}
