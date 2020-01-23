// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vavalon_microphone_system__Syms.h"


//======================

void Vavalon_microphone_system::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vavalon_microphone_system::traceInit, &Vavalon_microphone_system::traceFull, &Vavalon_microphone_system::traceChg, this);
}
void Vavalon_microphone_system::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vavalon_microphone_system* t=(Vavalon_microphone_system*)userthis;
    Vavalon_microphone_system__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vavalon_microphone_system::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vavalon_microphone_system* t=(Vavalon_microphone_system*)userthis;
    Vavalon_microphone_system__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vavalon_microphone_system::traceInitThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vavalon_microphone_system::traceFullThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity[0U] = 0U;
    vlTOPp->__Vm_traceActivity[1U] = 0U;
    vlTOPp->__Vm_traceActivity[2U] = 0U;
    vlTOPp->__Vm_traceActivity[3U] = 0U;
    vlTOPp->__Vm_traceActivity[4U] = 0U;
    vlTOPp->__Vm_traceActivity[5U] = 0U;
    vlTOPp->__Vm_traceActivity[6U] = 0U;
    vlTOPp->__Vm_traceActivity[7U] = 0U;
    vlTOPp->__Vm_traceActivity[8U] = 0U;
    vlTOPp->__Vm_traceActivity[9U] = 0U;
    vlTOPp->__Vm_traceActivity[0xaU] = 0U;
    vlTOPp->__Vm_traceActivity[0xbU] = 0U;
    vlTOPp->__Vm_traceActivity[0xcU] = 0U;
    vlTOPp->__Vm_traceActivity[0xdU] = 0U;
    vlTOPp->__Vm_traceActivity[0xeU] = 0U;
    vlTOPp->__Vm_traceActivity[0xfU] = 0U;
    vlTOPp->__Vm_traceActivity[0x10U] = 0U;
    vlTOPp->__Vm_traceActivity[0x11U] = 0U;
    vlTOPp->__Vm_traceActivity[0x12U] = 0U;
    vlTOPp->__Vm_traceActivity[0x13U] = 0U;
    vlTOPp->__Vm_traceActivity[0x14U] = 0U;
    vlTOPp->__Vm_traceActivity[0x15U] = 0U;
    vlTOPp->__Vm_traceActivity[0x16U] = 0U;
    vlTOPp->__Vm_traceActivity[0x17U] = 0U;
    vlTOPp->__Vm_traceActivity[0x18U] = 0U;
    vlTOPp->__Vm_traceActivity[0x19U] = 0U;
    vlTOPp->__Vm_traceActivity[0x1aU] = 0U;
    vlTOPp->__Vm_traceActivity[0x1bU] = 0U;
    vlTOPp->__Vm_traceActivity[0x1cU] = 0U;
    vlTOPp->__Vm_traceActivity[0x1dU] = 0U;
    vlTOPp->__Vm_traceActivity[0x1eU] = 0U;
    vlTOPp->__Vm_traceActivity[0x1fU] = 0U;
    vlTOPp->__Vm_traceActivity[0x20U] = 0U;
    vlTOPp->__Vm_traceActivity[0x21U] = 0U;
    vlTOPp->__Vm_traceActivity[0x22U] = 0U;
}

void Vavalon_microphone_system::traceInitThis__1(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+87,"CLK",-1);
	vcdp->declBit(c+88,"RESET",-1);
	vcdp->declBus(c+89,"AM_ADDR",-1,31,0);
	vcdp->declBus(c+90,"AM_BURSTCOUNT",-1,2,0);
	vcdp->declBit(c+91,"AM_WRITE",-1);
	vcdp->declBus(c+92,"AM_WRITEDATA",-1,31,0);
	vcdp->declBus(c+93,"AM_BYTEENABLE",-1,3,0);
	vcdp->declBit(c+94,"AM_WAITREQUEST",-1);
	vcdp->declBit(c+95,"AVL_READ",-1);
	vcdp->declBit(c+96,"AVL_WRITE",-1);
	vcdp->declBit(c+97,"AVL_CS",-1);
	vcdp->declBus(c+98,"AVL_ADDR",-1,2,0);
	vcdp->declBus(c+99,"AVL_WRITEDATA",-1,31,0);
	vcdp->declBus(c+100,"AVL_READDATA",-1,31,0);
	vcdp->declBit(c+101,"AUD_BCLK",-1);
	vcdp->declBit(c+102,"AUD_ADCLRCK",-1);
	vcdp->declBit(c+103,"GPIO_DIN1",-1);
	vcdp->declBit(c+104,"GPIO_DIN2",-1);
	vcdp->declBit(c+105,"GPIO_DIN3",-1);
	vcdp->declBit(c+106,"GPIO_DIN4",-1);
	vcdp->declBus(c+107,"fir_left_data",-1,31,0);
	vcdp->declBus(c+108,"fir_right_data",-1,31,0);
	vcdp->declBus(c+109,"adc_data",-1,31,0);
	vcdp->declBus(c+110,"vol_1",-1,31,0);
	vcdp->declBus(c+111,"vol_2",-1,31,0);
	vcdp->declBus(c+112,"vol_3",-1,31,0);
	vcdp->declBus(c+113,"vol_4",-1,31,0);
	vcdp->declBus(c+114,"vol_5",-1,31,0);
	vcdp->declBus(c+115,"vol_6",-1,31,0);
	vcdp->declBus(c+116,"vol_7",-1,31,0);
	vcdp->declBus(c+117,"vol_8",-1,31,0);
	vcdp->declBus(c+118,"coef_data",-1,15,0);
	vcdp->declBit(c+119,"load_coef",-1);
	vcdp->declBit(c+120,"change_filter",-1);
	vcdp->declBit(c+121,"sample_ready",-1);
	vcdp->declBus(c+122,"codec_stream",-1,31,0);
	vcdp->declBit(c+87,"avalon_microphone_system CLK",-1);
	vcdp->declBit(c+88,"avalon_microphone_system RESET",-1);
	vcdp->declBus(c+89,"avalon_microphone_system AM_ADDR",-1,31,0);
	vcdp->declBus(c+90,"avalon_microphone_system AM_BURSTCOUNT",-1,2,0);
	vcdp->declBit(c+91,"avalon_microphone_system AM_WRITE",-1);
	vcdp->declBus(c+92,"avalon_microphone_system AM_WRITEDATA",-1,31,0);
	vcdp->declBus(c+93,"avalon_microphone_system AM_BYTEENABLE",-1,3,0);
	vcdp->declBit(c+94,"avalon_microphone_system AM_WAITREQUEST",-1);
	vcdp->declBit(c+95,"avalon_microphone_system AVL_READ",-1);
	vcdp->declBit(c+96,"avalon_microphone_system AVL_WRITE",-1);
	vcdp->declBit(c+97,"avalon_microphone_system AVL_CS",-1);
	vcdp->declBus(c+98,"avalon_microphone_system AVL_ADDR",-1,2,0);
	vcdp->declBus(c+99,"avalon_microphone_system AVL_WRITEDATA",-1,31,0);
	vcdp->declBus(c+100,"avalon_microphone_system AVL_READDATA",-1,31,0);
	vcdp->declBit(c+101,"avalon_microphone_system AUD_BCLK",-1);
	vcdp->declBit(c+102,"avalon_microphone_system AUD_ADCLRCK",-1);
	vcdp->declBit(c+103,"avalon_microphone_system GPIO_DIN1",-1);
	vcdp->declBit(c+104,"avalon_microphone_system GPIO_DIN2",-1);
	vcdp->declBit(c+105,"avalon_microphone_system GPIO_DIN3",-1);
	vcdp->declBit(c+106,"avalon_microphone_system GPIO_DIN4",-1);
	vcdp->declBus(c+107,"avalon_microphone_system fir_left_data",-1,31,0);
	vcdp->declBus(c+108,"avalon_microphone_system fir_right_data",-1,31,0);
	vcdp->declBus(c+109,"avalon_microphone_system adc_data",-1,31,0);
	vcdp->declBus(c+110,"avalon_microphone_system vol_1",-1,31,0);
	vcdp->declBus(c+111,"avalon_microphone_system vol_2",-1,31,0);
	vcdp->declBus(c+112,"avalon_microphone_system vol_3",-1,31,0);
	vcdp->declBus(c+113,"avalon_microphone_system vol_4",-1,31,0);
	vcdp->declBus(c+114,"avalon_microphone_system vol_5",-1,31,0);
	vcdp->declBus(c+115,"avalon_microphone_system vol_6",-1,31,0);
	vcdp->declBus(c+116,"avalon_microphone_system vol_7",-1,31,0);
	vcdp->declBus(c+117,"avalon_microphone_system vol_8",-1,31,0);
	vcdp->declBus(c+118,"avalon_microphone_system coef_data",-1,15,0);
	vcdp->declBit(c+119,"avalon_microphone_system load_coef",-1);
	vcdp->declBit(c+120,"avalon_microphone_system change_filter",-1);
	vcdp->declBit(c+121,"avalon_microphone_system sample_ready",-1);
	vcdp->declBus(c+122,"avalon_microphone_system codec_stream",-1,31,0);
	vcdp->declBus(c+64,"avalon_microphone_system p_vol_1",-1,31,0);
	vcdp->declBus(c+63,"avalon_microphone_system p_vol_2",-1,31,0);
	vcdp->declBus(c+62,"avalon_microphone_system p_vol_3",-1,31,0);
	vcdp->declBus(c+61,"avalon_microphone_system p_vol_4",-1,31,0);
	vcdp->declBus(c+60,"avalon_microphone_system p_vol_5",-1,31,0);
	vcdp->declBus(c+59,"avalon_microphone_system p_vol_6",-1,31,0);
	vcdp->declBus(c+58,"avalon_microphone_system p_vol_7",-1,31,0);
	vcdp->declBus(c+65,"avalon_microphone_system p_vol_8",-1,31,0);
	vcdp->declBus(c+57,"avalon_microphone_system p_coef_data",-1,15,0);
	vcdp->declBit(c+21,"avalon_microphone_system saw_rise",-1);
	vcdp->declBit(c+22,"avalon_microphone_system saw_fall",-1);
	vcdp->declBit(c+1,"avalon_microphone_system start",-1);
	vcdp->declBit(c+41,"avalon_microphone_system ready_read_now",-1);
	vcdp->declBus(c+18,"avalon_microphone_system counter",-1,2,0);
	vcdp->declBit(c+6,"avalon_microphone_system fin_signal",-1);
	vcdp->declBus(c+23,"avalon_microphone_system mic_sel",-1,2,0);
	vcdp->declBit(c+2,"avalon_microphone_system stream_control",-1);
	vcdp->declBit(c+19,"avalon_microphone_system restart_sig",-1);
	vcdp->declBit(c+5,"avalon_microphone_system half_way_latch",-1);
	vcdp->declBit(c+79,"avalon_microphone_system half_way_ack",-1);
	vcdp->declBit(c+4,"avalon_microphone_system end_latch",-1);
	vcdp->declBit(c+56,"avalon_microphone_system end_ack",-1);
	vcdp->declBus(c+42,"avalon_microphone_system start_addr",-1,31,0);
	vcdp->declBus(c+66,"avalon_microphone_system num_samps",-1,31,0);
	vcdp->declBus(c+73,"avalon_microphone_system mic_l",-1,15,0);
	vcdp->declBus(c+49,"avalon_microphone_system mic_r",-1,15,0);
	vcdp->declBus(c+50,"avalon_microphone_system mic_l2",-1,15,0);
	vcdp->declBus(c+51,"avalon_microphone_system mic_r2",-1,15,0);
	vcdp->declBus(c+52,"avalon_microphone_system mic_l3",-1,15,0);
	vcdp->declBus(c+53,"avalon_microphone_system mic_r3",-1,15,0);
	vcdp->declBus(c+54,"avalon_microphone_system mic_l4",-1,15,0);
	vcdp->declBus(c+55,"avalon_microphone_system mic_r4",-1,15,0);
	vcdp->declBus(c+45,"avalon_microphone_system ready_data_1",-1,31,0);
	vcdp->declBus(c+46,"avalon_microphone_system ready_data_2",-1,31,0);
	vcdp->declBus(c+47,"avalon_microphone_system ready_data_3",-1,31,0);
	vcdp->declBus(c+48,"avalon_microphone_system ready_data_4",-1,31,0);
	vcdp->declBus(c+123,"avalon_microphone_system ready_data_choice",-1,31,0);
	vcdp->declBus(c+124,"avalon_microphone_system dma_yo NUM_MIC_PAIRS",-1,31,0);
	vcdp->declBit(c+87,"avalon_microphone_system dma_yo CLK",-1);
	vcdp->declBit(c+20,"avalon_microphone_system dma_yo RESET",-1);
	vcdp->declBus(c+89,"avalon_microphone_system dma_yo AM_ADDR",-1,31,0);
	vcdp->declBus(c+90,"avalon_microphone_system dma_yo AM_BURSTCOUNT",-1,2,0);
	vcdp->declBit(c+91,"avalon_microphone_system dma_yo AM_WRITE",-1);
	vcdp->declBus(c+92,"avalon_microphone_system dma_yo AM_WRITEDATA",-1,31,0);
	vcdp->declBus(c+93,"avalon_microphone_system dma_yo AM_BYTEENABLE",-1,3,0);
	vcdp->declBit(c+94,"avalon_microphone_system dma_yo AM_WAITREQUEST",-1);
	vcdp->declBus(c+123,"avalon_microphone_system dma_yo mic_data",-1,31,0);
	vcdp->declBus(c+23,"avalon_microphone_system dma_yo select",-1,2,0);
	vcdp->declBit(c+1,"avalon_microphone_system dma_yo start",-1);
	vcdp->declBit(c+41,"avalon_microphone_system dma_yo read_ready",-1);
	vcdp->declBus(c+42,"avalon_microphone_system dma_yo start_address",-1,31,0);
	vcdp->declBus(c+66,"avalon_microphone_system dma_yo number_samples",-1,31,0);
	vcdp->declBit(c+79,"avalon_microphone_system dma_yo half_way_ack",-1);
	vcdp->declBit(c+56,"avalon_microphone_system dma_yo end_ack",-1);
	vcdp->declBit(c+5,"avalon_microphone_system dma_yo half_way_latch",-1);
	vcdp->declBit(c+4,"avalon_microphone_system dma_yo end_latch",-1);
	vcdp->declBit(c+6,"avalon_microphone_system dma_yo FINISHED",-1);
	vcdp->declBit(c+24,"avalon_microphone_system dma_yo done",-1);
	{int i; for (i=0; i<5; i++) {
		vcdp->declBus(c+25+i*1,"avalon_microphone_system dma_yo starting_address",(i+0),31,0);}}
	{int i; for (i=0; i<5; i++) {
		vcdp->declBus(c+82+i*1,"avalon_microphone_system dma_yo prev_starting_address",(i+0),31,0);}}
	vcdp->declBit(c+6,"avalon_microphone_system dma_yo finish_signal",-1);
	vcdp->declBus(c+23,"avalon_microphone_system dma_yo mic_count",-1,2,0);
	vcdp->declBus(c+37,"avalon_microphone_system dma_yo prev_mic_count",-1,2,0);
	vcdp->declBus(c+30,"avalon_microphone_system dma_yo num_samples",-1,31,0);
	vcdp->declBus(c+44,"avalon_microphone_system dma_yo prev_num_samples",-1,31,0);
	vcdp->declBus(c+31,"avalon_microphone_system dma_yo counter",-1,31,0);
	vcdp->declBus(c+3,"avalon_microphone_system dma_yo prev_counter",-1,31,0);
	vcdp->declBus(c+38,"avalon_microphone_system dma_yo prev_AM_ADDR",-1,31,0);
	vcdp->declBit(c+39,"avalon_microphone_system dma_yo prev_AM_WRITE",-1);
	vcdp->declBit(c+40,"avalon_microphone_system dma_yo prev_done",-1);
	vcdp->declBit(c+71,"avalon_microphone_system dma_yo prev_finish_signal",-1);
	vcdp->declBus(c+43,"avalon_microphone_system dma_yo state",-1,2,0);
	vcdp->declBus(c+32,"avalon_microphone_system dma_yo next_state",-1,2,0);
	vcdp->declBus(c+80,"avalon_microphone_system dma_yo unnamedblk1 i",-1,31,0);
	vcdp->declBus(c+81,"avalon_microphone_system dma_yo unnamedblk2 i",-1,31,0);
	vcdp->declBus(c+125,"avalon_microphone_system dma_yo unnamedblk3 i",-1,31,0);
	vcdp->declBus(c+9,"avalon_microphone_system dma_yo unnamedblk4 i",-1,31,0);
	vcdp->declBus(c+7,"avalon_microphone_system dma_yo unnamedblk5 i",-1,31,0);
	vcdp->declBit(c+87,"avalon_microphone_system detect clk",-1);
	vcdp->declBit(c+88,"avalon_microphone_system detect reset",-1);
	vcdp->declBit(c+102,"avalon_microphone_system detect test_clk",-1);
	vcdp->declBit(c+21,"avalon_microphone_system detect rising_edge",-1);
	vcdp->declBit(c+22,"avalon_microphone_system detect falling_edge",-1);
	vcdp->declBit(c+8,"avalon_microphone_system detect found_edge",-1);
	vcdp->declBit(c+74,"avalon_microphone_system detect cur_test_clk",-1);
	vcdp->declBit(c+72,"avalon_microphone_system detect last_test_clk",-1);
	vcdp->declBus(c+126,"avalon_microphone_system m1 width",-1,31,0);
	vcdp->declBit(c+101,"avalon_microphone_system m1 sck",-1);
	vcdp->declBit(c+102,"avalon_microphone_system m1 ws",-1);
	vcdp->declBit(c+103,"avalon_microphone_system m1 sd",-1);
	vcdp->declBus(c+73,"avalon_microphone_system m1 data_left",-1,15,0);
	vcdp->declBus(c+49,"avalon_microphone_system m1 data_right",-1,15,0);
	vcdp->declBit(c+10,"avalon_microphone_system m1 wsd",-1);
	vcdp->declBit(c+67,"avalon_microphone_system m1 wsdd",-1);
	vcdp->declBit(c+14,"avalon_microphone_system m1 wsp",-1);
	vcdp->declBus(c+33,"avalon_microphone_system m1 counter",-1,4,0);
	vcdp->declBus(c+75,"avalon_microphone_system m1 shift",-1,0,15);
	vcdp->declBus(c+126,"avalon_microphone_system m2 width",-1,31,0);
	vcdp->declBit(c+101,"avalon_microphone_system m2 sck",-1);
	vcdp->declBit(c+102,"avalon_microphone_system m2 ws",-1);
	vcdp->declBit(c+104,"avalon_microphone_system m2 sd",-1);
	vcdp->declBus(c+50,"avalon_microphone_system m2 data_left",-1,15,0);
	vcdp->declBus(c+51,"avalon_microphone_system m2 data_right",-1,15,0);
	vcdp->declBit(c+11,"avalon_microphone_system m2 wsd",-1);
	vcdp->declBit(c+68,"avalon_microphone_system m2 wsdd",-1);
	vcdp->declBit(c+15,"avalon_microphone_system m2 wsp",-1);
	vcdp->declBus(c+34,"avalon_microphone_system m2 counter",-1,4,0);
	vcdp->declBus(c+76,"avalon_microphone_system m2 shift",-1,0,15);
	vcdp->declBus(c+126,"avalon_microphone_system m3 width",-1,31,0);
	vcdp->declBit(c+101,"avalon_microphone_system m3 sck",-1);
	vcdp->declBit(c+102,"avalon_microphone_system m3 ws",-1);
	vcdp->declBit(c+105,"avalon_microphone_system m3 sd",-1);
	vcdp->declBus(c+52,"avalon_microphone_system m3 data_left",-1,15,0);
	vcdp->declBus(c+53,"avalon_microphone_system m3 data_right",-1,15,0);
	vcdp->declBit(c+12,"avalon_microphone_system m3 wsd",-1);
	vcdp->declBit(c+69,"avalon_microphone_system m3 wsdd",-1);
	vcdp->declBit(c+16,"avalon_microphone_system m3 wsp",-1);
	vcdp->declBus(c+35,"avalon_microphone_system m3 counter",-1,4,0);
	vcdp->declBus(c+77,"avalon_microphone_system m3 shift",-1,0,15);
	vcdp->declBus(c+126,"avalon_microphone_system m4 width",-1,31,0);
	vcdp->declBit(c+101,"avalon_microphone_system m4 sck",-1);
	vcdp->declBit(c+102,"avalon_microphone_system m4 ws",-1);
	vcdp->declBit(c+106,"avalon_microphone_system m4 sd",-1);
	vcdp->declBus(c+54,"avalon_microphone_system m4 data_left",-1,15,0);
	vcdp->declBus(c+55,"avalon_microphone_system m4 data_right",-1,15,0);
	vcdp->declBit(c+13,"avalon_microphone_system m4 wsd",-1);
	vcdp->declBit(c+70,"avalon_microphone_system m4 wsdd",-1);
	vcdp->declBit(c+17,"avalon_microphone_system m4 wsp",-1);
	vcdp->declBus(c+36,"avalon_microphone_system m4 counter",-1,4,0);
	vcdp->declBus(c+78,"avalon_microphone_system m4 shift",-1,0,15);
    }
}

void Vavalon_microphone_system::traceFullThis__1(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit(c+1,(vlTOPp->avalon_microphone_system__DOT__start));
	vcdp->fullBit(c+2,((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT__start)))));
	vcdp->fullBus(c+3,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_counter),32);
	vcdp->fullBit(c+4,(vlTOPp->avalon_microphone_system__DOT__end_latch));
	vcdp->fullBit(c+5,(vlTOPp->avalon_microphone_system__DOT__half_way_latch));
	vcdp->fullBit(c+6,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal));
	vcdp->fullBus(c+7,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk5__DOT__i),32);
	vcdp->fullBit(c+8,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge));
	vcdp->fullBus(c+9,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk4__DOT__i),32);
	vcdp->fullBit(c+10,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd));
	vcdp->fullBit(c+11,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd));
	vcdp->fullBit(c+12,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd));
	vcdp->fullBit(c+13,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd));
	vcdp->fullBit(c+14,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp));
	vcdp->fullBit(c+15,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp));
	vcdp->fullBit(c+16,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp));
	vcdp->fullBit(c+17,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp));
	vcdp->fullBus(c+18,(vlTOPp->avalon_microphone_system__DOT__counter),3);
	vcdp->fullBit(c+19,(vlTOPp->avalon_microphone_system__DOT__restart_sig));
	vcdp->fullBit(c+20,(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET));
	vcdp->fullBit(c+21,(vlTOPp->avalon_microphone_system__DOT__saw_rise));
	vcdp->fullBit(c+22,(vlTOPp->avalon_microphone_system__DOT__saw_fall));
	vcdp->fullBus(c+23,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count),3);
	vcdp->fullBit(c+24,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done));
	vcdp->fullBus(c+25,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[0]),32);
	vcdp->fullBus(c+26,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[1]),32);
	vcdp->fullBus(c+27,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[2]),32);
	vcdp->fullBus(c+28,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[3]),32);
	vcdp->fullBus(c+29,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[4]),32);
	vcdp->fullBus(c+30,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples),32);
	vcdp->fullBus(c+31,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter),32);
	vcdp->fullBus(c+32,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__next_state),3);
	vcdp->fullBus(c+33,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter),5);
	vcdp->fullBus(c+34,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter),5);
	vcdp->fullBus(c+35,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter),5);
	vcdp->fullBus(c+36,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter),5);
	vcdp->fullBus(c+37,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count),3);
	vcdp->fullBus(c+38,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR),32);
	vcdp->fullBit(c+39,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE));
	vcdp->fullBit(c+40,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_done));
	vcdp->fullBit(c+41,(vlTOPp->avalon_microphone_system__DOT__ready_read_now));
	vcdp->fullBus(c+42,(vlTOPp->avalon_microphone_system__DOT__start_addr),32);
	vcdp->fullBus(c+43,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state),3);
	vcdp->fullBus(c+44,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples),32);
	vcdp->fullBus(c+45,(vlTOPp->avalon_microphone_system__DOT__ready_data_1),32);
	vcdp->fullBus(c+46,(vlTOPp->avalon_microphone_system__DOT__ready_data_2),32);
	vcdp->fullBus(c+47,(vlTOPp->avalon_microphone_system__DOT__ready_data_3),32);
	vcdp->fullBus(c+48,(vlTOPp->avalon_microphone_system__DOT__ready_data_4),32);
	vcdp->fullBus(c+49,(vlTOPp->avalon_microphone_system__DOT__mic_r),16);
	vcdp->fullBus(c+50,(vlTOPp->avalon_microphone_system__DOT__mic_l2),16);
	vcdp->fullBus(c+51,(vlTOPp->avalon_microphone_system__DOT__mic_r2),16);
	vcdp->fullBus(c+52,(vlTOPp->avalon_microphone_system__DOT__mic_l3),16);
	vcdp->fullBus(c+53,(vlTOPp->avalon_microphone_system__DOT__mic_r3),16);
	vcdp->fullBus(c+54,(vlTOPp->avalon_microphone_system__DOT__mic_l4),16);
	vcdp->fullBus(c+55,(vlTOPp->avalon_microphone_system__DOT__mic_r4),16);
	vcdp->fullBit(c+56,(vlTOPp->avalon_microphone_system__DOT__end_ack));
	vcdp->fullBus(c+57,(vlTOPp->avalon_microphone_system__DOT__p_coef_data),16);
	vcdp->fullBus(c+58,(vlTOPp->avalon_microphone_system__DOT__p_vol_7),32);
	vcdp->fullBus(c+59,(vlTOPp->avalon_microphone_system__DOT__p_vol_6),32);
	vcdp->fullBus(c+60,(vlTOPp->avalon_microphone_system__DOT__p_vol_5),32);
	vcdp->fullBus(c+61,(vlTOPp->avalon_microphone_system__DOT__p_vol_4),32);
	vcdp->fullBus(c+62,(vlTOPp->avalon_microphone_system__DOT__p_vol_3),32);
	vcdp->fullBus(c+63,(vlTOPp->avalon_microphone_system__DOT__p_vol_2),32);
	vcdp->fullBus(c+64,(vlTOPp->avalon_microphone_system__DOT__p_vol_1),32);
	vcdp->fullBus(c+65,(vlTOPp->avalon_microphone_system__DOT__p_vol_8),32);
	vcdp->fullBus(c+66,(vlTOPp->avalon_microphone_system__DOT__num_samps),32);
	vcdp->fullBit(c+67,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsdd));
	vcdp->fullBit(c+68,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsdd));
	vcdp->fullBit(c+69,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsdd));
	vcdp->fullBit(c+70,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsdd));
	vcdp->fullBit(c+71,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal));
	vcdp->fullBit(c+72,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk));
	vcdp->fullBus(c+73,(vlTOPp->avalon_microphone_system__DOT__mic_l),16);
	vcdp->fullBit(c+74,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk));
	vcdp->fullBus(c+75,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__shift),16);
	vcdp->fullBus(c+76,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__shift),16);
	vcdp->fullBus(c+77,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__shift),16);
	vcdp->fullBus(c+78,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__shift),16);
	vcdp->fullBit(c+79,(vlTOPp->avalon_microphone_system__DOT__half_way_ack));
	vcdp->fullBus(c+80,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk1__DOT__i),32);
	vcdp->fullBus(c+81,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk2__DOT__i),32);
	vcdp->fullBus(c+82,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[0]),32);
	vcdp->fullBus(c+83,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[1]),32);
	vcdp->fullBus(c+84,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[2]),32);
	vcdp->fullBus(c+85,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[3]),32);
	vcdp->fullBus(c+86,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[4]),32);
	vcdp->fullBit(c+87,(vlTOPp->CLK));
	vcdp->fullBit(c+88,(vlTOPp->RESET));
	vcdp->fullBus(c+89,(vlTOPp->AM_ADDR),32);
	vcdp->fullBus(c+90,(vlTOPp->AM_BURSTCOUNT),3);
	vcdp->fullBit(c+91,(vlTOPp->AM_WRITE));
	vcdp->fullBus(c+92,(vlTOPp->AM_WRITEDATA),32);
	vcdp->fullBus(c+93,(vlTOPp->AM_BYTEENABLE),4);
	vcdp->fullBit(c+94,(vlTOPp->AM_WAITREQUEST));
	vcdp->fullBit(c+95,(vlTOPp->AVL_READ));
	vcdp->fullBit(c+96,(vlTOPp->AVL_WRITE));
	vcdp->fullBit(c+97,(vlTOPp->AVL_CS));
	vcdp->fullBus(c+98,(vlTOPp->AVL_ADDR),3);
	vcdp->fullBus(c+99,(vlTOPp->AVL_WRITEDATA),32);
	vcdp->fullBus(c+100,(vlTOPp->AVL_READDATA),32);
	vcdp->fullBit(c+101,(vlTOPp->AUD_BCLK));
	vcdp->fullBit(c+102,(vlTOPp->AUD_ADCLRCK));
	vcdp->fullBit(c+103,(vlTOPp->GPIO_DIN1));
	vcdp->fullBit(c+104,(vlTOPp->GPIO_DIN2));
	vcdp->fullBit(c+105,(vlTOPp->GPIO_DIN3));
	vcdp->fullBit(c+106,(vlTOPp->GPIO_DIN4));
	vcdp->fullBus(c+107,(vlTOPp->fir_left_data),32);
	vcdp->fullBus(c+108,(vlTOPp->fir_right_data),32);
	vcdp->fullBus(c+109,(vlTOPp->adc_data),32);
	vcdp->fullBus(c+110,(vlTOPp->vol_1),32);
	vcdp->fullBus(c+111,(vlTOPp->vol_2),32);
	vcdp->fullBus(c+112,(vlTOPp->vol_3),32);
	vcdp->fullBus(c+113,(vlTOPp->vol_4),32);
	vcdp->fullBus(c+114,(vlTOPp->vol_5),32);
	vcdp->fullBus(c+115,(vlTOPp->vol_6),32);
	vcdp->fullBus(c+116,(vlTOPp->vol_7),32);
	vcdp->fullBus(c+117,(vlTOPp->vol_8),32);
	vcdp->fullBus(c+118,(vlTOPp->coef_data),16);
	vcdp->fullBit(c+119,(vlTOPp->load_coef));
	vcdp->fullBit(c+120,(vlTOPp->change_filter));
	vcdp->fullBit(c+121,(vlTOPp->sample_ready));
	vcdp->fullBus(c+122,(vlTOPp->codec_stream),32);
	vcdp->fullBus(c+123,(((1U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
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
	vcdp->fullBus(c+124,(5U),32);
	vcdp->fullBus(c+125,(5U),32);
	vcdp->fullBus(c+126,(0x10U),32);
    }
}
