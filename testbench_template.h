#include "stdlib.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

template <class DUT> // DUT is the name of the top level verilog design
class TESTBENCH	{
public:

	unsigned long tickCount; // number of clock cycles
	DUT* module;
	VerilatedVcdC* tfp;

	TESTBENCH(void) {
		module = new DUT;
		tickCount = 0l;
	}

	virtual ~TESTBENCH(void) {
		delete module;
		module = NULL;
	}

	virtual void vcdOpen() { // initialize vcd
		tfp = new VerilatedVcdC();
		Verilated::traceEverOn(true); // setup vcd dump for waveforms
		module->trace(tfp, 99);
		tfp->open("out.vcd");
	}

	virtual void vcdClose() { // close vcd
		tfp->close();
		tfp = NULL;
	}

	virtual void reset(int val) {
		module->reset_al = val; // pull reset low for #cycles
	}

	virtual void tick() {
		tickCount++; // count simulation cycles

		module->clk_50 = module->clk_50 ? 0 : 1; // flip clock

		module->eval();
		tfp->dump(tickCount); // evaluate and dump change to vcd
	}

};