#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


void i2s_slave (bool &sck,
				bool &ws,
				bool &sd
				int &left_data,
				int &right_data,
				int &cycles) {

	ifstream mic_left ("MIC_1_LEFT.dat");
	ifstream mic_right ("MIC_1_RIGHT.dat");

	string line;

	vector<int> left_vector;
	vector<int> right_vector;

	// Initialize values
	sck = 0;
	ws = 0;
	sd = 0;
	left_data = 0;
	right_data = 0;

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

	/*
	for (int i = 0; i < left_vector.size(); i++) {
		//cout << left_vector[i] << "\n";
		for (int j = 0; j < 16; j++) {
			cout << ((left_vector[i]>>j)&(0x0001)) << "\n";
		}
		cout << "----------" << " #" << i << "----------" << "\n";
	}
	*/

	// Loop to stream i2s data
	while (1) {
		// Send serialized left bitstream
		for (int i = 0; i < left_vector.size(); i++)
		{
			ws = 0;
			for (int j = 0; j < 16; j++) {
				cout << ((left_vector[i]>>j)&(0x0001)) << "\n";
				tick();
				tick();
			}
			ws = 1;
			for (int j = 0; j < 16; j++) {
				cout << ((right_vector[i]>>j)&(0x0001)) << "\n";
				tick();
				tick();
			}

		}
	}
}

void tick() {
	sck = !sck;
}