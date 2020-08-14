#ifndef KERNEL_H
#define KERNEL_H
#include <bitset>
#include <time.h>
#include <iostream>
#include <list>
#include <vector>
#include <math.h>

using namespace std;

class Inode{
    public:
        void setAll(int memBlockNr);

    private:
        unsigned short fileSize;	
		time_t cTime, mTime, aTime; 

		short direct1st, direct2nd;	
		short indir1st;				
									
									
		
		short refCount;				
		short status;				
		short offset;	
};
#endif
