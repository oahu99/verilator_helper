#include "stdlib.h"
#include <iostream>

using namespace std;

class AVALON_MASTER	{

	enum state_read {read1, read2, idle_r} curr_state_read, next_state_read;
	enum state_write {write1, write2, idle_w} curr_state_write, next_state_write;

	public:
		// signals for avalon write
		bool AVL_WRITE, AVL_CS, AVL_READ;
		int AVL_ADDR, AVL_WRITEDATA;
		// signals for avalon read
		bool data_ready;
		// constructor
		AVALON_MASTER() {
			next_state_write = write1;
			next_state_read = read1;
		}

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

		case write2 :	next_state_write = idle_w;
						AVL_WRITE = 0;
						AVL_CS = 0;
						break;

		case idle_w :	next_state_write = idle_w;
						break;
	}
	
}


void AVALON_MASTER::avl_read (int address) {
	curr_state_read = next_state_read;

	switch (AVALON_MASTER::curr_state_read)
	{
		case read1 :	next_state_read = read2;
						data_ready = 0;
						AVL_READ = 1;
						AVL_CS = 1;
						AVL_ADDR = address;
						break;
		
		case read2 : 	next_state_read = idle_r;
						data_ready = 1;
						AVL_READ = 0;
						AVL_CS = 0;
						break;

		case idle_r :	next_state_read = read1;
						data_ready = 0;
						break;
	}
}