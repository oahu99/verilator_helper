#include <stdlib.h>
#include "verilated.h"
#include "verilated_vcd_c.h"

template <class DUT> // DUT is the name of the top level verilog design
class TESTBENCH	{

	unsigned long tickCount; // number of clock cycles
	DUT* module;

	Verilated::traceEverOn(true); // setup vcd dump for waveforms
	VerilatedVcdC* tfp = new VerilatedVcdC();
	module->trace(tfp, 99);
	tfp->open("out.vcd");

	TESTBENCH(void) {
		module = new DUT;
		tickCount = 0l;
	}

	virtual ~TESTBENCH(void) {
		delete module;
		module = NULL;
	}

	virtual void reset(int cycles) {
		module->reset = (tickCount < cycles) ? 0 : 1; // pull reset low for #cycles
	}

	virtual void tick() {
		tickCount++; // count simulation cycles

		module->clk_50 = module->clk_50 ? 0 : 1; // flip clock

		module->eval();
		tfp->dump(tickCount); // evaluate and dump change to vcd
	}

};