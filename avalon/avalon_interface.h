/*
Avalon Memory Mapped interface for cosimulation in verilator

John Hammond john.hammond@posteo.net


//////////////////////////////////////////////////
// Avalon MM slave signals
//////////////////////////////////////////////////

int avalonSlaveAddress;
int avalonSlaveReadData;
int avalonSlaveWriteData;

bool slaveWaitRequest;
bool slaveRead_n;
bool slaveWrite_n;
bool slaveClock;

char slaveBurstCount;
char slaveByteEnable;

//////////////////////////////////////////////////
// Avalon MM master signals
//////////////////////////////////////////////////

int avalonMasterAddress;
int avalonMasterReadData;
int avalonMasterWriteData;

bool masterWaitRequest;
bool masterRead_n;
bool masterWrite_n;
bool masterClock;

char masterBurstCount;
char masterByteEnable;

//////////////////////////////////////////////////
// Avalon MM functions
//////////////////////////////////////////////////
*/

void avalonMasterWrite (int writeData,
						int writeAddress,
						int byteEnable,
						int &avalonMasterAddress, 
						int &avalonMasterWriteData, 
						bool &masterClock, 
						bool &masterWrite_n,
						bool masterWaitRequest,
						char &masterBurstCount,
						char &masterByteEnable ) 
{

masterClock = 0;
masterClock = 1;

avalonMasterAddress = writeAddress;
masterByteEnable = byteEnable;
avalonMasterWriteData = writeData;


masterClock = 0;
masterClock = 1;

}