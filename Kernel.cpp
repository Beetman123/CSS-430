#include "Kernel.h"
#include <bitset>
#include <time.h>
#include <iostream>
#include <list>
#include <vector>
#include <math.h>

using namespace std;

void Inode::setAll(int memBlockNr){
    this->fileSize = 0;
	time_t timeRightNow = time(nullptr);
	this->cTime = this->mTime = this->aTime = timeRightNow;

	this->direct1st = memBlockNr;
	this->direct2nd = this->indir1st = -1;

	this->refCount = 0; 
	this->status = -1;                                                       
	this->offset = 0; 
}