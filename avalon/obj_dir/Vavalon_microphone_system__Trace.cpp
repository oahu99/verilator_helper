// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vavalon_microphone_system__Syms.h"


//======================

void Vavalon_microphone_system::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vavalon_microphone_system* t=(Vavalon_microphone_system*)userthis;
    Vavalon_microphone_system__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vavalon_microphone_system::traceChgThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vavalon_microphone_system::traceChgThis__2(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1,(vlTOPp->avalon_microphone_system__DOT__saw_rise));
	vcdp->chgBit(c+2,(vlTOPp->avalon_microphone_system__DOT__saw_fall));
	vcdp->chgBit(c+3,(vlTOPp->avalon_microphone_system__DOT__start));
	vcdp->chgBus(c+4,(vlTOPp->avalon_microphone_system__DOT__counter),3);
	vcdp->chgBit(c+5,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal));
	vcdp->chgBit(c+6,((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT__start)))));
	vcdp->chgBit(c+7,(vlTOPp->avalon_microphone_system__DOT__restart_sig));
	vcdp->chgBit(c+8,(vlTOPp->avalon_microphone_system__DOT__half_way_latch));
	vcdp->chgBit(c+9,(vlTOPp->avalon_microphone_system__DOT__end_latch));
	vcdp->chgBus(c+10,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_counter),32);
	vcdp->chgBus(c+11,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk4__DOT__i),32);
	vcdp->chgBus(c+12,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk5__DOT__i),32);
	vcdp->chgBit(c+13,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge));
    }
}

void Vavalon_microphone_system::traceChgThis__3(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+14,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd));
	vcdp->chgBit(c+15,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp));
	vcdp->chgBit(c+16,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd));
	vcdp->chgBit(c+17,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp));
	vcdp->chgBit(c+18,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd));
	vcdp->chgBit(c+19,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp));
	vcdp->chgBit(c+20,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd));
	vcdp->chgBit(c+21,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp));
    }
}

void Vavalon_microphone_system::traceChgThis__4(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+22,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count),3);
	vcdp->chgBit(c+23,(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET));
	vcdp->chgBit(c+24,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done));
	vcdp->chgBus(c+25,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[0]),32);
	vcdp->chgBus(c+26,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[1]),32);
	vcdp->chgBus(c+27,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[2]),32);
	vcdp->chgBus(c+28,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[3]),32);
	vcdp->chgBus(c+29,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[4]),32);
	vcdp->chgBus(c+30,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples),32);
	vcdp->chgBus(c+31,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter),32);
	vcdp->chgBus(c+32,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__next_state),3);
    }
}

void Vavalon_microphone_system::traceChgThis__5(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+33,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter),5);
	vcdp->chgBus(c+34,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter),5);
	vcdp->chgBus(c+35,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter),5);
	vcdp->chgBus(c+36,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter),5);
    }
}

void Vavalon_microphone_system::traceChgThis__6(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+37,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsdd));
	vcdp->chgBit(c+38,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsdd));
	vcdp->chgBit(c+39,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsdd));
	vcdp->chgBit(c+40,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsdd));
    }
}

void Vavalon_microphone_system::traceChgThis__7(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+41,(vlTOPp->avalon_microphone_system__DOT__p_vol_1),32);
	vcdp->chgBus(c+42,(vlTOPp->avalon_microphone_system__DOT__p_vol_2),32);
	vcdp->chgBus(c+43,(vlTOPp->avalon_microphone_system__DOT__p_vol_3),32);
	vcdp->chgBus(c+44,(vlTOPp->avalon_microphone_system__DOT__p_vol_4),32);
	vcdp->chgBus(c+45,(vlTOPp->avalon_microphone_system__DOT__p_vol_5),32);
	vcdp->chgBus(c+46,(vlTOPp->avalon_microphone_system__DOT__p_vol_6),32);
	vcdp->chgBus(c+47,(vlTOPp->avalon_microphone_system__DOT__p_vol_7),32);
	vcdp->chgBus(c+48,(vlTOPp->avalon_microphone_system__DOT__p_vol_8),32);
	vcdp->chgBus(c+49,(vlTOPp->avalon_microphone_system__DOT__p_coef_data),16);
	vcdp->chgBit(c+50,(vlTOPp->avalon_microphone_system__DOT__ready_read_now));
	vcdp->chgBit(c+51,(vlTOPp->avalon_microphone_system__DOT__half_way_ack));
	vcdp->chgBit(c+52,(vlTOPp->avalon_microphone_system__DOT__end_ack));
	vcdp->chgBus(c+53,(vlTOPp->avalon_microphone_system__DOT__start_addr),32);
	vcdp->chgBus(c+54,(vlTOPp->avalon_microphone_system__DOT__num_samps),32);
	vcdp->chgBus(c+55,(vlTOPp->avalon_microphone_system__DOT__ready_data_1),32);
	vcdp->chgBus(c+56,(vlTOPp->avalon_microphone_system__DOT__ready_data_2),32);
	vcdp->chgBus(c+57,(vlTOPp->avalon_microphone_system__DOT__ready_data_3),32);
	vcdp->chgBus(c+58,(vlTOPp->avalon_microphone_system__DOT__ready_data_4),32);
	vcdp->chgBus(c+59,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[0]),32);
	vcdp->chgBus(c+60,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[1]),32);
	vcdp->chgBus(c+61,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[2]),32);
	vcdp->chgBus(c+62,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[3]),32);
	vcdp->chgBus(c+63,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[4]),32);
	vcdp->chgBus(c+64,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count),3);
	vcdp->chgBus(c+65,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples),32);
	vcdp->chgBus(c+66,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR),32);
	vcdp->chgBit(c+67,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE));
	vcdp->chgBit(c+68,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_done));
	vcdp->chgBit(c+69,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal));
	vcdp->chgBus(c+70,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state),3);
	vcdp->chgBus(c+71,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk1__DOT__i),32);
	vcdp->chgBus(c+72,(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk2__DOT__i),32);
	vcdp->chgBit(c+73,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk));
	vcdp->chgBit(c+74,(vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk));
    }
}

void Vavalon_microphone_system::traceChgThis__8(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+75,(vlTOPp->avalon_microphone_system__DOT__mic_l),16);
	vcdp->chgBus(c+76,(vlTOPp->avalon_microphone_system__DOT__mic_r),16);
	vcdp->chgBus(c+77,(vlTOPp->avalon_microphone_system__DOT__mic_l2),16);
	vcdp->chgBus(c+78,(vlTOPp->avalon_microphone_system__DOT__mic_r2),16);
	vcdp->chgBus(c+79,(vlTOPp->avalon_microphone_system__DOT__mic_l3),16);
	vcdp->chgBus(c+80,(vlTOPp->avalon_microphone_system__DOT__mic_r3),16);
	vcdp->chgBus(c+81,(vlTOPp->avalon_microphone_system__DOT__mic_l4),16);
	vcdp->chgBus(c+82,(vlTOPp->avalon_microphone_system__DOT__mic_r4),16);
	vcdp->chgBus(c+83,(vlTOPp->avalon_microphone_system__DOT__m1__DOT__shift),16);
	vcdp->chgBus(c+84,(vlTOPp->avalon_microphone_system__DOT__m2__DOT__shift),16);
	vcdp->chgBus(c+85,(vlTOPp->avalon_microphone_system__DOT__m3__DOT__shift),16);
	vcdp->chgBus(c+86,(vlTOPp->avalon_microphone_system__DOT__m4__DOT__shift),16);
    }
}

void Vavalon_microphone_system::traceChgThis__9(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+87,(vlTOPp->CLK));
	vcdp->chgBit(c+88,(vlTOPp->RESET));
	vcdp->chgBus(c+89,(vlTOPp->AM_ADDR),32);
	vcdp->chgBus(c+90,(vlTOPp->AM_BURSTCOUNT),3);
	vcdp->chgBit(c+91,(vlTOPp->AM_WRITE));
	vcdp->chgBus(c+92,(vlTOPp->AM_WRITEDATA),32);
	vcdp->chgBus(c+93,(vlTOPp->AM_BYTEENABLE),4);
	vcdp->chgBit(c+94,(vlTOPp->AM_WAITREQUEST));
	vcdp->chgBit(c+95,(vlTOPp->AVL_READ));
	vcdp->chgBit(c+96,(vlTOPp->AVL_WRITE));
	vcdp->chgBit(c+97,(vlTOPp->AVL_CS));
	vcdp->chgBus(c+98,(vlTOPp->AVL_ADDR),3);
	vcdp->chgBus(c+99,(vlTOPp->AVL_WRITEDATA),32);
	vcdp->chgBus(c+100,(vlTOPp->AVL_READDATA),32);
	vcdp->chgBit(c+101,(vlTOPp->AUD_BCLK));
	vcdp->chgBit(c+102,(vlTOPp->AUD_ADCLRCK));
	vcdp->chgBit(c+103,(vlTOPp->GPIO_DIN1));
	vcdp->chgBit(c+104,(vlTOPp->GPIO_DIN2));
	vcdp->chgBit(c+105,(vlTOPp->GPIO_DIN3));
	vcdp->chgBit(c+106,(vlTOPp->GPIO_DIN4));
	vcdp->chgBus(c+107,(vlTOPp->fir_left_data),32);
	vcdp->chgBus(c+108,(vlTOPp->fir_right_data),32);
	vcdp->chgBus(c+109,(vlTOPp->adc_data),32);
	vcdp->chgBus(c+110,(vlTOPp->vol_1),32);
	vcdp->chgBus(c+111,(vlTOPp->vol_2),32);
	vcdp->chgBus(c+112,(vlTOPp->vol_3),32);
	vcdp->chgBus(c+113,(vlTOPp->vol_4),32);
	vcdp->chgBus(c+114,(vlTOPp->vol_5),32);
	vcdp->chgBus(c+115,(vlTOPp->vol_6),32);
	vcdp->chgBus(c+116,(vlTOPp->vol_7),32);
	vcdp->chgBus(c+117,(vlTOPp->vol_8),32);
	vcdp->chgBus(c+118,(vlTOPp->coef_data),16);
	vcdp->chgBit(c+119,(vlTOPp->load_coef));
	vcdp->chgBit(c+120,(vlTOPp->change_filter));
	vcdp->chgBit(c+121,(vlTOPp->sample_ready));
	vcdp->chgBus(c+122,(vlTOPp->codec_stream),32);
	vcdp->chgBus(c+123,(((1U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
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
