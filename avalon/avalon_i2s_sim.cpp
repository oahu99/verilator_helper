#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Vavalon_microphone_system.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "tbclock.h"
#include "i2s_slave.hpp"

using namespace std;

void tick (Vavalon_microphone_system* tb, VerilatedVcdC* tfp, unsigned long int &counter, TBCLOCK* system_clk, TBCLOCK* i2s_clk) {
	
	unsigned mintime;

	mintime = (system_clk->time_to_edge() < i2s_clk->time_to_edge()) ? system_clk->time_to_edge() : i2s_clk->time_to_edge();

	tb->eval();

	tb->AUD_BCLK = i2s_clk->advance(mintime);
	tb->CLK = system_clk->advance(mintime);

	counter += mintime;

	tb->eval();

	tfp->dump(counter);
	tfp->flush();

}

void avalon_write (Vavalon_microphone_system* tb, VerilatedVcdC* tfp, unsigned long int &counter, TBCLOCK* system_clk, TBCLOCK* i2s_clk, int address, int writedata) {
	for (int i = 0; i < 2; i++) {
		if (system_clk->falling_edge()) {
			tb->AVL_WRITE = 1;
			tb->AVL_CS = 1;
			tb->AVL_WRITEDATA = writedata;
			tb->AVL_ADDR = address;
		}
		//tick(tb, tfp, counter, system_clk, i2s_clk);
	}
	tb->AVL_WRITE = 0;
	tb->AVL_CS = 0;
	tb->AVL_ADDR = 0;
	//tick(tb, tfp, counter, system_clk, i2s_clk);



}

int avalon_read (Vavalon_microphone_system* tb, VerilatedVcdC* tfp, unsigned long int &counter, TBCLOCK* system_clk, TBCLOCK* i2s_clk, int address, int &bus_ready) {
	if (!bus_ready) {
		if (system_clk->falling_edge()) {
			tb->AVL_READ = 1;
			tb->AVL_CS = 1;
			tb->AVL_ADDR = address;
			bus_ready = 1;
			return (0);
		}
	}
	else {
		tb->AVL_READ = 0;
		tb->AVL_CS = 0;
		tb->AVL_ADDR = 0;
		bus_ready = 0;
		return((int)tb->AVL_READDATA);
	}
	return(0);
}
	

int main () {

	Vavalon_microphone_system* tb = new Vavalon_microphone_system;
	I2S_SLAVE* i2s_slave = new I2S_SLAVE;

	TBCLOCK* system_clk = new TBCLOCK(20000); // 50 MHz
	TBCLOCK* i2s_clk = new TBCLOCK(325521); // 3.072 MHz

	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC();
	tb->trace(tfp, 99);
	tfp->open("out.vcd");
	unsigned long int counter = 0;

	// vector<int>* left_vector = new vector<int>;
	// vector<int>* right_vector = new vector<int>;

	i2s_slave->i2s_init();

	for (int i = 0; i < 1000000; i++) {
		tick(tb, tfp, counter, system_clk, i2s_clk);
		i2s_slave->i2s_stream(i2s_clk->falling_edge());
		//cout << i2s_slave->clk_edge << "\n";
		//cout << i2s_slave->left_vector->at(i) << "\n";
		cout << i2s_clk->falling_edge() << "\n";
	}

	tfp->close();
	return(1);
}

