#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Vavalon_microphone_system.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "tbclock.h"

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
	for (int i = 0; i < 15; i++) {

		if (system_clk->falling_edge()) {
			tb->AVL_WRITE = 1;
			tb->AVL_CS = 1;
			tb->AVL_WRITEDATA = writedata;
			tb->AVL_ADDR = address;
		}
		tick(tb, tfp, counter, system_clk, i2s_clk);
	}
	tb->AVL_CS = 0;
}

void i2s_init (vector<int>* left_vector, vector<int>* right_vector) {
	ifstream mic_left ("MIC_1_LEFT.dat");
	ifstream mic_right ("MIC_1_RIGHT.dat");

	string line;

	// Read left data into a integer vector
	if (mic_left.is_open())
	{
		while (getline (mic_left,line))
		{
			left_vector->emplace_back(stoi(line));
		}
		mic_left.close();
	}

	// Read right data into an integer vector
	if (mic_right.is_open())
	{
		while (getline (mic_right,line))
		{
			right_vector->emplace_back(stoi(line));
		}
		mic_right.close();
	}
}

void i2s_master (	Vavalon_microphone_system* tb, 
					VerilatedVcdC* tfp, 
					unsigned long int &counter, 
					TBCLOCK* system_clk, 
					TBCLOCK* i2s_clk,
					vector<int>* left_vector,
					vector<int>* right_vector,
					int &word,
					int &bit) {

	// Loop to stream i2s data

	if (i2s_clk->falling_edge() || counter == 0) {

		switch(bit) {
			case 0: tb->AUD_ADCLRCK = 0; break;
			case 15: tb->AUD_ADCLRCK = 1; break;
			case 32: tb->AUD_ADCLRCK = 0; break;
		}

		if (bit < 16) {
			tb->GPIO_DIN1 = (((left_vector->at(word)<<bit)&(0x8000))>>15);
			//tick(tb, tfp, counter, system_clk, i2s_clk);
			bit ++;
		}
		else if (bit == 32) {
			bit = 0;
			word ++;
			//tick(tb, tfp, counter, system_clk, i2s_clk);
		}
		else {
			tb->GPIO_DIN1 = (((right_vector->at(word)<<(bit-16))&(0x8000))>>15);
			//tick(tb, tfp, counter, system_clk, i2s_clk);
			bit ++;
		}
	}
}
	

int main () {

	Vavalon_microphone_system* tb = new Vavalon_microphone_system;

	TBCLOCK* system_clk = new TBCLOCK(20000); // 50 MHz
	TBCLOCK* i2s_clk = new TBCLOCK(325521); // 3.072 MHz

	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC();
	tb->trace(tfp, 99);
	tfp->open("out.vcd");
	unsigned long int counter = 0;
	int bit = 0;
	int word = 0;

	int START_ADDRESS = 0x01000000;
	int RECORDING_LENGTH = 0x0041EB00;

	vector<int>* left_vector = new vector<int>;
	vector<int>* right_vector = new vector<int>;

	i2s_init(left_vector, right_vector);

	avalon_write(tb, tfp, counter, system_clk, i2s_clk, 1, START_ADDRESS); 

	avalon_write(tb, tfp, counter, system_clk, i2s_clk, 2, RECORDING_LENGTH);

	avalon_write(tb, tfp, counter, system_clk, i2s_clk, 0, 1); // START bit

	while (counter < 100000000000) {

		i2s_master(tb, tfp, counter, system_clk, i2s_clk, left_vector, right_vector, word, bit);

		tick(tb, tfp, counter, system_clk, i2s_clk);

	}

	tfp->close();
	return(1);
}
