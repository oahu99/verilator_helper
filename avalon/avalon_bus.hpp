#include "stdlib.h"
#include <iostream>

using namespace std;

class AVALON_MASTER	{

	enum state_read {read1, read2, read3, idle_r} curr_state_read, next_state_read;
	enum state_write {write1, write2, write3, idle_w} curr_state_write, next_state_write;

	public:
		// signals for avalon write
		bool AVL_WRITE, AVL_CS, AVL_READ;
		int AVL_ADDR, AVL_WRITEDATA;
		// signals for avalon read

		void avl_write(int address, int data);
		void avl_read(int address);

};

void AVALON_MASTER::avl_write (int address, int data) {
	curr_state_write = next_state_write;

	switch (AVALON_MASTER::curr_state_write)
	{
		case write1 : 	next_state_write = write2;
						AVL_WRITE = 1;
						AVL_CS = 1;
						AVL_ADDR = address;
						AVL_WRITEDATA = data;
						break;

		case write2 :	next_state_write = write3;

		case write3 :	next_state_write = idle_w;
						AVL_WRITE = 0;
						AVL_CS = 0;
						break;
	}
	
}


void AVALON_MASTER::avl_read (int address) {
	curr_state_read = next_state_read;

	switch (AVALON_MASTER::curr_state_read)
	{
		case read1 :	next_state_read = read2;
						AVL_READ = 1;
						AVL_CS = 1;
						AVL_ADDR = address;
						break;

		case read2 : 	next_state_read = read3;
						break;
		
		case read3 : 	next_state_read = idle_r;
						AVL_READ = 0;
						AVL_CS = 0;
						break;
	}
}