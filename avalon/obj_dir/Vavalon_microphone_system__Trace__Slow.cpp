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
    Vavalon_microphone_system* t = (Vavalon_microphone_system*)userthis;
    Vavalon_microphone_system__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vavalon_microphone_system::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vavalon_microphone_system* t = (Vavalon_microphone_system*)userthis;
    Vavalon_microphone_system__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vavalon_microphone_system::traceInitThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vavalon_microphone_system::traceFullThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vilp;
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    __Vilp = 0U;
    while ((__Vilp <= 0x45U)) {
        vlTOPp->__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

void Vavalon_microphone_system::traceInitThis__1(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+689,"CLK", false,-1);
        vcdp->declBit(c+697,"RESET", false,-1);
        vcdp->declBus(c+705,"AM_ADDR", false,-1, 31,0);
        vcdp->declBus(c+713,"AM_BURSTCOUNT", false,-1, 2,0);
        vcdp->declBit(c+721,"AM_WRITE", false,-1);
        vcdp->declBus(c+729,"AM_WRITEDATA", false,-1, 31,0);
        vcdp->declBus(c+737,"AM_BYTEENABLE", false,-1, 3,0);
        vcdp->declBit(c+745,"AM_WAITREQUEST", false,-1);
        vcdp->declBit(c+753,"AVL_READ", false,-1);
        vcdp->declBit(c+761,"AVL_WRITE", false,-1);
        vcdp->declBit(c+769,"AVL_CS", false,-1);
        vcdp->declBus(c+777,"AVL_ADDR", false,-1, 2,0);
        vcdp->declBus(c+785,"AVL_WRITEDATA", false,-1, 31,0);
        vcdp->declBus(c+793,"AVL_READDATA", false,-1, 31,0);
        vcdp->declBit(c+801,"AUD_BCLK", false,-1);
        vcdp->declBit(c+809,"AUD_ADCLRCK", false,-1);
        vcdp->declBit(c+817,"GPIO_DIN1", false,-1);
        vcdp->declBit(c+825,"GPIO_DIN2", false,-1);
        vcdp->declBit(c+833,"GPIO_DIN3", false,-1);
        vcdp->declBit(c+841,"GPIO_DIN4", false,-1);
        vcdp->declBus(c+849,"fir_left_data", false,-1, 31,0);
        vcdp->declBus(c+857,"fir_right_data", false,-1, 31,0);
        vcdp->declBus(c+865,"adc_data", false,-1, 31,0);
        vcdp->declBus(c+873,"vol_1", false,-1, 31,0);
        vcdp->declBus(c+881,"vol_2", false,-1, 31,0);
        vcdp->declBus(c+889,"vol_3", false,-1, 31,0);
        vcdp->declBus(c+897,"vol_4", false,-1, 31,0);
        vcdp->declBus(c+905,"vol_5", false,-1, 31,0);
        vcdp->declBus(c+913,"vol_6", false,-1, 31,0);
        vcdp->declBus(c+921,"vol_7", false,-1, 31,0);
        vcdp->declBus(c+929,"vol_8", false,-1, 31,0);
        vcdp->declBus(c+937,"coef_data", false,-1, 15,0);
        vcdp->declBit(c+945,"load_coef", false,-1);
        vcdp->declBit(c+953,"change_filter", false,-1);
        vcdp->declBit(c+961,"sample_ready", false,-1);
        vcdp->declBus(c+969,"codec_stream", false,-1, 31,0);
        vcdp->declBit(c+689,"avalon_microphone_system CLK", false,-1);
        vcdp->declBit(c+697,"avalon_microphone_system RESET", false,-1);
        vcdp->declBus(c+705,"avalon_microphone_system AM_ADDR", false,-1, 31,0);
        vcdp->declBus(c+713,"avalon_microphone_system AM_BURSTCOUNT", false,-1, 2,0);
        vcdp->declBit(c+721,"avalon_microphone_system AM_WRITE", false,-1);
        vcdp->declBus(c+729,"avalon_microphone_system AM_WRITEDATA", false,-1, 31,0);
        vcdp->declBus(c+737,"avalon_microphone_system AM_BYTEENABLE", false,-1, 3,0);
        vcdp->declBit(c+745,"avalon_microphone_system AM_WAITREQUEST", false,-1);
        vcdp->declBit(c+753,"avalon_microphone_system AVL_READ", false,-1);
        vcdp->declBit(c+761,"avalon_microphone_system AVL_WRITE", false,-1);
        vcdp->declBit(c+769,"avalon_microphone_system AVL_CS", false,-1);
        vcdp->declBus(c+777,"avalon_microphone_system AVL_ADDR", false,-1, 2,0);
        vcdp->declBus(c+785,"avalon_microphone_system AVL_WRITEDATA", false,-1, 31,0);
        vcdp->declBus(c+793,"avalon_microphone_system AVL_READDATA", false,-1, 31,0);
        vcdp->declBit(c+801,"avalon_microphone_system AUD_BCLK", false,-1);
        vcdp->declBit(c+809,"avalon_microphone_system AUD_ADCLRCK", false,-1);
        vcdp->declBit(c+817,"avalon_microphone_system GPIO_DIN1", false,-1);
        vcdp->declBit(c+825,"avalon_microphone_system GPIO_DIN2", false,-1);
        vcdp->declBit(c+833,"avalon_microphone_system GPIO_DIN3", false,-1);
        vcdp->declBit(c+841,"avalon_microphone_system GPIO_DIN4", false,-1);
        vcdp->declBus(c+849,"avalon_microphone_system fir_left_data", false,-1, 31,0);
        vcdp->declBus(c+857,"avalon_microphone_system fir_right_data", false,-1, 31,0);
        vcdp->declBus(c+865,"avalon_microphone_system adc_data", false,-1, 31,0);
        vcdp->declBus(c+873,"avalon_microphone_system vol_1", false,-1, 31,0);
        vcdp->declBus(c+881,"avalon_microphone_system vol_2", false,-1, 31,0);
        vcdp->declBus(c+889,"avalon_microphone_system vol_3", false,-1, 31,0);
        vcdp->declBus(c+897,"avalon_microphone_system vol_4", false,-1, 31,0);
        vcdp->declBus(c+905,"avalon_microphone_system vol_5", false,-1, 31,0);
        vcdp->declBus(c+913,"avalon_microphone_system vol_6", false,-1, 31,0);
        vcdp->declBus(c+921,"avalon_microphone_system vol_7", false,-1, 31,0);
        vcdp->declBus(c+929,"avalon_microphone_system vol_8", false,-1, 31,0);
        vcdp->declBus(c+937,"avalon_microphone_system coef_data", false,-1, 15,0);
        vcdp->declBit(c+945,"avalon_microphone_system load_coef", false,-1);
        vcdp->declBit(c+953,"avalon_microphone_system change_filter", false,-1);
        vcdp->declBit(c+961,"avalon_microphone_system sample_ready", false,-1);
        vcdp->declBus(c+969,"avalon_microphone_system codec_stream", false,-1, 31,0);
        vcdp->declBus(c+625,"avalon_microphone_system p_vol_1", false,-1, 31,0);
        vcdp->declBus(c+633,"avalon_microphone_system p_vol_2", false,-1, 31,0);
        vcdp->declBus(c+641,"avalon_microphone_system p_vol_3", false,-1, 31,0);
        vcdp->declBus(c+649,"avalon_microphone_system p_vol_4", false,-1, 31,0);
        vcdp->declBus(c+617,"avalon_microphone_system p_vol_5", false,-1, 31,0);
        vcdp->declBus(c+609,"avalon_microphone_system p_vol_6", false,-1, 31,0);
        vcdp->declBus(c+601,"avalon_microphone_system p_vol_7", false,-1, 31,0);
        vcdp->declBus(c+593,"avalon_microphone_system p_vol_8", false,-1, 31,0);
        vcdp->declBus(c+585,"avalon_microphone_system p_coef_data", false,-1, 15,0);
        vcdp->declBit(c+209,"avalon_microphone_system saw_rise", false,-1);
        vcdp->declBit(c+217,"avalon_microphone_system saw_fall", false,-1);
        vcdp->declBit(c+9,"avalon_microphone_system start", false,-1);
        vcdp->declBit(c+377,"avalon_microphone_system ready_read_now", false,-1);
        vcdp->declBus(c+49,"avalon_microphone_system counter", false,-1, 2,0);
        vcdp->declBit(c+81,"avalon_microphone_system fin_signal", false,-1);
        vcdp->declBus(c+121,"avalon_microphone_system mic_sel", false,-1, 2,0);
        vcdp->declBit(c+17,"avalon_microphone_system stream_control", false,-1);
        vcdp->declBit(c+1,"avalon_microphone_system restart_sig", false,-1);
        vcdp->declBit(c+41,"avalon_microphone_system half_way_latch", false,-1);
        vcdp->declBit(c+553,"avalon_microphone_system half_way_ack", false,-1);
        vcdp->declBit(c+25,"avalon_microphone_system end_latch", false,-1);
        vcdp->declBit(c+561,"avalon_microphone_system end_ack", false,-1);
        vcdp->declBus(c+385,"avalon_microphone_system start_addr", false,-1, 31,0);
        vcdp->declBus(c+569,"avalon_microphone_system num_samps", false,-1, 31,0);
        vcdp->declBus(c+537,"avalon_microphone_system mic_l", false,-1, 15,0);
        vcdp->declBus(c+545,"avalon_microphone_system mic_r", false,-1, 15,0);
        vcdp->declBus(c+489,"avalon_microphone_system mic_l2", false,-1, 15,0);
        vcdp->declBus(c+497,"avalon_microphone_system mic_r2", false,-1, 15,0);
        vcdp->declBus(c+505,"avalon_microphone_system mic_l3", false,-1, 15,0);
        vcdp->declBus(c+513,"avalon_microphone_system mic_r3", false,-1, 15,0);
        vcdp->declBus(c+521,"avalon_microphone_system mic_l4", false,-1, 15,0);
        vcdp->declBus(c+529,"avalon_microphone_system mic_r4", false,-1, 15,0);
        vcdp->declBus(c+417,"avalon_microphone_system ready_data_1", false,-1, 31,0);
        vcdp->declBus(c+433,"avalon_microphone_system ready_data_2", false,-1, 31,0);
        vcdp->declBus(c+425,"avalon_microphone_system ready_data_3", false,-1, 31,0);
        vcdp->declBus(c+441,"avalon_microphone_system ready_data_4", false,-1, 31,0);
        vcdp->declBus(c+977,"avalon_microphone_system ready_data_choice", false,-1, 31,0);
        vcdp->declBus(c+985,"avalon_microphone_system dma_yo NUM_MIC_PAIRS", false,-1, 31,0);
        vcdp->declBit(c+689,"avalon_microphone_system dma_yo CLK", false,-1);
        vcdp->declBit(c+65,"avalon_microphone_system dma_yo RESET", false,-1);
        vcdp->declBus(c+705,"avalon_microphone_system dma_yo AM_ADDR", false,-1, 31,0);
        vcdp->declBus(c+713,"avalon_microphone_system dma_yo AM_BURSTCOUNT", false,-1, 2,0);
        vcdp->declBit(c+721,"avalon_microphone_system dma_yo AM_WRITE", false,-1);
        vcdp->declBus(c+729,"avalon_microphone_system dma_yo AM_WRITEDATA", false,-1, 31,0);
        vcdp->declBus(c+737,"avalon_microphone_system dma_yo AM_BYTEENABLE", false,-1, 3,0);
        vcdp->declBit(c+745,"avalon_microphone_system dma_yo AM_WAITREQUEST", false,-1);
        vcdp->declBus(c+977,"avalon_microphone_system dma_yo mic_data", false,-1, 31,0);
        vcdp->declBus(c+121,"avalon_microphone_system dma_yo select", false,-1, 2,0);
        vcdp->declBit(c+9,"avalon_microphone_system dma_yo start", false,-1);
        vcdp->declBit(c+377,"avalon_microphone_system dma_yo read_ready", false,-1);
        vcdp->declBus(c+385,"avalon_microphone_system dma_yo start_address", false,-1, 31,0);
        vcdp->declBus(c+569,"avalon_microphone_system dma_yo number_samples", false,-1, 31,0);
        vcdp->declBit(c+553,"avalon_microphone_system dma_yo half_way_ack", false,-1);
        vcdp->declBit(c+561,"avalon_microphone_system dma_yo end_ack", false,-1);
        vcdp->declBit(c+41,"avalon_microphone_system dma_yo half_way_latch", false,-1);
        vcdp->declBit(c+25,"avalon_microphone_system dma_yo end_latch", false,-1);
        vcdp->declBit(c+81,"avalon_microphone_system dma_yo FINISHED", false,-1);
        vcdp->declBit(c+129,"avalon_microphone_system dma_yo done", false,-1);
        {int i; for (i=0; i<5; i++) {
                vcdp->declBus(c+137+i*1,"avalon_microphone_system dma_yo starting_address", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                vcdp->declBus(c+449+i*1,"avalon_microphone_system dma_yo prev_starting_address", true,(i+0), 31,0);}}
        vcdp->declBit(c+81,"avalon_microphone_system dma_yo finish_signal", false,-1);
        vcdp->declBus(c+121,"avalon_microphone_system dma_yo mic_count", false,-1, 2,0);
        vcdp->declBus(c+361,"avalon_microphone_system dma_yo prev_mic_count", false,-1, 2,0);
        vcdp->declBus(c+177,"avalon_microphone_system dma_yo num_samples", false,-1, 31,0);
        vcdp->declBus(c+369,"avalon_microphone_system dma_yo prev_num_samples", false,-1, 31,0);
        vcdp->declBus(c+185,"avalon_microphone_system dma_yo counter", false,-1, 31,0);
        vcdp->declBus(c+33,"avalon_microphone_system dma_yo prev_counter", false,-1, 31,0);
        vcdp->declBus(c+337,"avalon_microphone_system dma_yo prev_AM_ADDR", false,-1, 31,0);
        vcdp->declBit(c+353,"avalon_microphone_system dma_yo prev_AM_WRITE", false,-1);
        vcdp->declBit(c+345,"avalon_microphone_system dma_yo prev_done", false,-1);
        vcdp->declBit(c+401,"avalon_microphone_system dma_yo prev_finish_signal", false,-1);
        vcdp->declBus(c+393,"avalon_microphone_system dma_yo state", false,-1, 2,0);
        vcdp->declBus(c+193,"avalon_microphone_system dma_yo next_state", false,-1, 2,0);
        vcdp->declBus(c+257,"avalon_microphone_system dma_yo unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+265,"avalon_microphone_system dma_yo unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+993,"avalon_microphone_system dma_yo unnamedblk3 i", false,-1, 31,0);
        vcdp->declBus(c+73,"avalon_microphone_system dma_yo unnamedblk4 i", false,-1, 31,0);
        vcdp->declBus(c+57,"avalon_microphone_system dma_yo unnamedblk5 i", false,-1, 31,0);
        vcdp->declBit(c+689,"avalon_microphone_system detect clk", false,-1);
        vcdp->declBit(c+697,"avalon_microphone_system detect reset", false,-1);
        vcdp->declBit(c+809,"avalon_microphone_system detect test_clk", false,-1);
        vcdp->declBit(c+209,"avalon_microphone_system detect rising_edge", false,-1);
        vcdp->declBit(c+217,"avalon_microphone_system detect falling_edge", false,-1);
        vcdp->declBit(c+201,"avalon_microphone_system detect found_edge", false,-1);
        vcdp->declBit(c+577,"avalon_microphone_system detect cur_test_clk", false,-1);
        vcdp->declBit(c+409,"avalon_microphone_system detect last_test_clk", false,-1);
        vcdp->declBus(c+1001,"avalon_microphone_system m1 width", false,-1, 31,0);
        vcdp->declBit(c+801,"avalon_microphone_system m1 sck", false,-1);
        vcdp->declBit(c+809,"avalon_microphone_system m1 ws", false,-1);
        vcdp->declBit(c+817,"avalon_microphone_system m1 sd", false,-1);
        vcdp->declBus(c+537,"avalon_microphone_system m1 data_left", false,-1, 15,0);
        vcdp->declBus(c+545,"avalon_microphone_system m1 data_right", false,-1, 15,0);
        vcdp->declBit(c+89,"avalon_microphone_system m1 wsd", false,-1);
        vcdp->declBit(c+305,"avalon_microphone_system m1 wsdd", false,-1);
        vcdp->declBit(c+225,"avalon_microphone_system m1 wsp", false,-1);
        vcdp->declBus(c+273,"avalon_microphone_system m1 counter", false,-1, 4,0);
        vcdp->declBus(c+657,"avalon_microphone_system m1 shift", false,-1, 0,15);
        vcdp->declBus(c+1001,"avalon_microphone_system m2 width", false,-1, 31,0);
        vcdp->declBit(c+801,"avalon_microphone_system m2 sck", false,-1);
        vcdp->declBit(c+809,"avalon_microphone_system m2 ws", false,-1);
        vcdp->declBit(c+825,"avalon_microphone_system m2 sd", false,-1);
        vcdp->declBus(c+489,"avalon_microphone_system m2 data_left", false,-1, 15,0);
        vcdp->declBus(c+497,"avalon_microphone_system m2 data_right", false,-1, 15,0);
        vcdp->declBit(c+97,"avalon_microphone_system m2 wsd", false,-1);
        vcdp->declBit(c+313,"avalon_microphone_system m2 wsdd", false,-1);
        vcdp->declBit(c+233,"avalon_microphone_system m2 wsp", false,-1);
        vcdp->declBus(c+281,"avalon_microphone_system m2 counter", false,-1, 4,0);
        vcdp->declBus(c+665,"avalon_microphone_system m2 shift", false,-1, 0,15);
        vcdp->declBus(c+1001,"avalon_microphone_system m3 width", false,-1, 31,0);
        vcdp->declBit(c+801,"avalon_microphone_system m3 sck", false,-1);
        vcdp->declBit(c+809,"avalon_microphone_system m3 ws", false,-1);
        vcdp->declBit(c+833,"avalon_microphone_system m3 sd", false,-1);
        vcdp->declBus(c+505,"avalon_microphone_system m3 data_left", false,-1, 15,0);
        vcdp->declBus(c+513,"avalon_microphone_system m3 data_right", false,-1, 15,0);
        vcdp->declBit(c+105,"avalon_microphone_system m3 wsd", false,-1);
        vcdp->declBit(c+321,"avalon_microphone_system m3 wsdd", false,-1);
        vcdp->declBit(c+241,"avalon_microphone_system m3 wsp", false,-1);
        vcdp->declBus(c+289,"avalon_microphone_system m3 counter", false,-1, 4,0);
        vcdp->declBus(c+673,"avalon_microphone_system m3 shift", false,-1, 0,15);
        vcdp->declBus(c+1001,"avalon_microphone_system m4 width", false,-1, 31,0);
        vcdp->declBit(c+801,"avalon_microphone_system m4 sck", false,-1);
        vcdp->declBit(c+809,"avalon_microphone_system m4 ws", false,-1);
        vcdp->declBit(c+841,"avalon_microphone_system m4 sd", false,-1);
        vcdp->declBus(c+521,"avalon_microphone_system m4 data_left", false,-1, 15,0);
        vcdp->declBus(c+529,"avalon_microphone_system m4 data_right", false,-1, 15,0);
        vcdp->declBit(c+113,"avalon_microphone_system m4 wsd", false,-1);
        vcdp->declBit(c+329,"avalon_microphone_system m4 wsdd", false,-1);
        vcdp->declBit(c+249,"avalon_microphone_system m4 wsp", false,-1);
        vcdp->declBus(c+297,"avalon_microphone_system m4 counter", false,-1, 4,0);
        vcdp->declBus(c+681,"avalon_microphone_system m4 shift", false,-1, 0,15);
    }
}

void Vavalon_microphone_system::traceFullThis__1(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->avalon_microphone_system__DOT__restart_sig));
        vcdp->fullBit(c+9,(vlTOPp->avalon_microphone_system__DOT__start));
        vcdp->fullBit(c+17,((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT__start)))));
        vcdp->fullBit(c+25,(vlTOPp->avalon_microphone_system__DOT__end_latch));
        vcdp->fullBus(c+33,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_counter),32);
        vcdp->fullBit(c+41,(vlTOPp->avalon_microphone_system__DOT__half_way_latch));
        vcdp->fullBus(c+49,(vlTOPp->avalon_microphone_system__DOT__counter),3);
        vcdp->fullBus(c+57,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk5__DOT__i),32);
        vcdp->fullBit(c+65,(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET));
        vcdp->fullBus(c+73,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk4__DOT__i),32);
        vcdp->fullBit(c+81,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal));
        vcdp->fullBit(c+89,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd));
        vcdp->fullBit(c+97,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd));
        vcdp->fullBit(c+105,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd));
        vcdp->fullBit(c+113,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd));
        vcdp->fullBus(c+121,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count),3);
        vcdp->fullBit(c+129,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done));
        vcdp->fullBus(c+137,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[0]),32);
        vcdp->fullBus(c+138,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[1]),32);
        vcdp->fullBus(c+139,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[2]),32);
        vcdp->fullBus(c+140,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[3]),32);
        vcdp->fullBus(c+141,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[4]),32);
        vcdp->fullBus(c+177,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples),32);
        vcdp->fullBus(c+185,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter),32);
        vcdp->fullBus(c+193,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__next_state),3);
        vcdp->fullBit(c+201,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge));
        vcdp->fullBit(c+209,(vlTOPp->avalon_microphone_system__DOT__saw_rise));
        vcdp->fullBit(c+217,(vlTOPp->avalon_microphone_system__DOT__saw_fall));
        vcdp->fullBit(c+225,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp));
        vcdp->fullBit(c+233,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp));
        vcdp->fullBit(c+241,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp));
        vcdp->fullBit(c+249,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp));
        vcdp->fullBus(c+257,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk1__DOT__i),32);
        vcdp->fullBus(c+265,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk2__DOT__i),32);
        vcdp->fullBus(c+273,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter),5);
        vcdp->fullBus(c+281,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter),5);
        vcdp->fullBus(c+289,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter),5);
        vcdp->fullBus(c+297,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter),5);
        vcdp->fullBit(c+305,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsdd));
        vcdp->fullBit(c+313,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsdd));
        vcdp->fullBit(c+321,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsdd));
        vcdp->fullBit(c+329,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsdd));
        vcdp->fullBus(c+337,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR),32);
        vcdp->fullBit(c+345,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_done));
        vcdp->fullBit(c+353,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE));
        vcdp->fullBus(c+361,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count),3);
        vcdp->fullBus(c+369,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples),32);
        vcdp->fullBit(c+377,(vlTOPp->avalon_microphone_system__DOT__ready_read_now));
        vcdp->fullBus(c+385,(vlTOPp->avalon_microphone_system__DOT__start_addr),32);
        vcdp->fullBus(c+393,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state),3);
        vcdp->fullBit(c+401,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal));
        vcdp->fullBit(c+409,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk));
        vcdp->fullBus(c+417,(vlTOPp->avalon_microphone_system__DOT__ready_data_1),32);
        vcdp->fullBus(c+425,(vlTOPp->avalon_microphone_system__DOT__ready_data_3),32);
        vcdp->fullBus(c+433,(vlTOPp->avalon_microphone_system__DOT__ready_data_2),32);
        vcdp->fullBus(c+441,(vlTOPp->avalon_microphone_system__DOT__ready_data_4),32);
        vcdp->fullBus(c+449,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[0]),32);
        vcdp->fullBus(c+450,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[1]),32);
        vcdp->fullBus(c+451,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[2]),32);
        vcdp->fullBus(c+452,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[3]),32);
        vcdp->fullBus(c+453,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[4]),32);
        vcdp->fullBus(c+489,(vlTOPp->avalon_microphone_system__DOT__mic_l2),16);
        vcdp->fullBus(c+497,(vlTOPp->avalon_microphone_system__DOT__mic_r2),16);
        vcdp->fullBus(c+505,(vlTOPp->avalon_microphone_system__DOT__mic_l3),16);
        vcdp->fullBus(c+513,(vlTOPp->avalon_microphone_system__DOT__mic_r3),16);
        vcdp->fullBus(c+521,(vlTOPp->avalon_microphone_system__DOT__mic_l4),16);
        vcdp->fullBus(c+529,(vlTOPp->avalon_microphone_system__DOT__mic_r4),16);
        vcdp->fullBus(c+537,(vlTOPp->avalon_microphone_system__DOT__mic_l),16);
        vcdp->fullBus(c+545,(vlTOPp->avalon_microphone_system__DOT__mic_r),16);
        vcdp->fullBit(c+553,(vlTOPp->avalon_microphone_system__DOT__half_way_ack));
        vcdp->fullBit(c+561,(vlTOPp->avalon_microphone_system__DOT__end_ack));
        vcdp->fullBus(c+569,(vlTOPp->avalon_microphone_system__DOT__num_samps),32);
        vcdp->fullBit(c+577,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk));
        vcdp->fullBus(c+585,(vlTOPp->avalon_microphone_system__DOT__p_coef_data),16);
        vcdp->fullBus(c+593,(vlTOPp->avalon_microphone_system__DOT__p_vol_8),32);
        vcdp->fullBus(c+601,(vlTOPp->avalon_microphone_system__DOT__p_vol_7),32);
        vcdp->fullBus(c+609,(vlTOPp->avalon_microphone_system__DOT__p_vol_6),32);
        vcdp->fullBus(c+617,(vlTOPp->avalon_microphone_system__DOT__p_vol_5),32);
        vcdp->fullBus(c+625,(vlTOPp->avalon_microphone_system__DOT__p_vol_1),32);
        vcdp->fullBus(c+633,(vlTOPp->avalon_microphone_system__DOT__p_vol_2),32);
        vcdp->fullBus(c+641,(vlTOPp->avalon_microphone_system__DOT__p_vol_3),32);
        vcdp->fullBus(c+649,(vlTOPp->avalon_microphone_system__DOT__p_vol_4),32);
        vcdp->fullBus(c+657,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__shift),16);
        vcdp->fullBus(c+665,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__shift),16);
        vcdp->fullBus(c+673,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__shift),16);
        vcdp->fullBus(c+681,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__shift),16);
        vcdp->fullBit(c+689,(vlTOPp->CLK));
        vcdp->fullBit(c+697,(vlTOPp->RESET));
        vcdp->fullBus(c+705,(vlTOPp->AM_ADDR),32);
        vcdp->fullBus(c+713,(vlTOPp->AM_BURSTCOUNT),3);
        vcdp->fullBit(c+721,(vlTOPp->AM_WRITE));
        vcdp->fullBus(c+729,(vlTOPp->AM_WRITEDATA),32);
        vcdp->fullBus(c+737,(vlTOPp->AM_BYTEENABLE),4);
        vcdp->fullBit(c+745,(vlTOPp->AM_WAITREQUEST));
        vcdp->fullBit(c+753,(vlTOPp->AVL_READ));
        vcdp->fullBit(c+761,(vlTOPp->AVL_WRITE));
        vcdp->fullBit(c+769,(vlTOPp->AVL_CS));
        vcdp->fullBus(c+777,(vlTOPp->AVL_ADDR),3);
        vcdp->fullBus(c+785,(vlTOPp->AVL_WRITEDATA),32);
        vcdp->fullBus(c+793,(vlTOPp->AVL_READDATA),32);
        vcdp->fullBit(c+801,(vlTOPp->AUD_BCLK));
        vcdp->fullBit(c+809,(vlTOPp->AUD_ADCLRCK));
        vcdp->fullBit(c+817,(vlTOPp->GPIO_DIN1));
        vcdp->fullBit(c+825,(vlTOPp->GPIO_DIN2));
        vcdp->fullBit(c+833,(vlTOPp->GPIO_DIN3));
        vcdp->fullBit(c+841,(vlTOPp->GPIO_DIN4));
        vcdp->fullBus(c+849,(vlTOPp->fir_left_data),32);
        vcdp->fullBus(c+857,(vlTOPp->fir_right_data),32);
        vcdp->fullBus(c+865,(vlTOPp->adc_data),32);
        vcdp->fullBus(c+873,(vlTOPp->vol_1),32);
        vcdp->fullBus(c+881,(vlTOPp->vol_2),32);
        vcdp->fullBus(c+889,(vlTOPp->vol_3),32);
        vcdp->fullBus(c+897,(vlTOPp->vol_4),32);
        vcdp->fullBus(c+905,(vlTOPp->vol_5),32);
        vcdp->fullBus(c+913,(vlTOPp->vol_6),32);
        vcdp->fullBus(c+921,(vlTOPp->vol_7),32);
        vcdp->fullBus(c+929,(vlTOPp->vol_8),32);
        vcdp->fullBus(c+937,(vlTOPp->coef_data),16);
        vcdp->fullBit(c+945,(vlTOPp->load_coef));
        vcdp->fullBit(c+953,(vlTOPp->change_filter));
        vcdp->fullBit(c+961,(vlTOPp->sample_ready));
        vcdp->fullBus(c+969,(vlTOPp->codec_stream),32);
        vcdp->fullBus(c+977,(((1U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
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
        vcdp->fullBus(c+985,(5U),32);
        vcdp->fullBus(c+993,(5U),32);
        vcdp->fullBus(c+1001,(0x10U),32);
    }
}
