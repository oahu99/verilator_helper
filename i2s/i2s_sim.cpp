#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Vi2s_master.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

using namespace std;

void tick (Vi2s_master* tb, VerilatedVcdC* tfp, int &counter) {
	tb->sck = 0;
	tb->eval();

	tb->sck = 1;
	tb->eval();
	tfp->dump(counter);
	counter++;

	tb->sck = 0;
	tb->eval();
	tfp->dump(counter);
	counter++;

}

void i2s_master (Vi2s_master* tb, VerilatedVcdC* tfp, int &counter) {

	ifstream mic_left ("MIC_1_LEFT.dat");
	ifstream mic_right ("MIC_1_RIGHT.dat");

	string line;

	vector<int> left_vector;
	vector<int> right_vector;

	// Read left data into a integer vector
	if (mic_left.is_open())
	{
		while (getline (mic_left,line))
		{
			left_vector.emplace_back(stoi(line));
		}
		mic_left.close();
	}

	// Read right data into an integer vector
	if (mic_right.is_open())
	{
		while (getline (mic_right,line))
		{
			right_vector.emplace_back(stoi(line));
		}
		mic_right.close();
	}

	// Loop to stream i2s data
	for (int i = 0; i < 2000; i++)
	{

		tb->ws = 0;
		tick(tb, tfp, counter);

		// Left i2s stream
		for (int j = 0; j < 16; j++) {

			tb->sd = (((left_vector[i]<<j)&(0x8000))>>15);

			tick(tb, tfp, counter);

		}

		tb->ws = 1;
		tick(tb, tfp, counter);

		// Right i2s stream
		for (int j = 0; j < 16; j++) {

			tb->sd = (((right_vector[i]<<j)&(0x8000))>>15);

			tick(tb, tfp, counter);

		}

	}
}

int main () {

	Vi2s_master* tb = new Vi2s_master;

	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC();
	tb->trace(tfp, 99);
	tfp->open("out.vcd");
	int counter = 0;

	i2s_master(tb, tfp, counter);

	tfp->close();
	return(1);
}
