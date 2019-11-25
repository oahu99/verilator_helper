#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

	ifstream mic_left ("MIC_1_LEFT.dat");
	ifstream mic_right ("MIC_1_RIGHT.dat");

	string line;

	vector<int> left_vector;
	vector<int> right_vector;

	if (mic_left.is_open())
	{
		while (getline (mic_left,line))
		{
			left_vector.emplace_back(stoi(line));
		}
		mic_left.close();
	}

	if (mic_right.is_open())
	{
		while (getline (mic_right,line))
		{
			right_vector.emplace_back(stoi(line));
		}
		mic_right.close();
	}
	
	for (int i = 0; i < left_vector.size(); i++) {
		//cout << left_vector[i] << "\n";
		for (int j = 0; j < 16; j++) {
			cout << ((left_vector[i]>>j)&(0x0001)) << "\n";
		}
		cout << "----------" << " #" << i << "----------" << "\n";
	}

	return 0;
}