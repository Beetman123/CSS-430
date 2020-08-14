#include "SuperBlock.h"
#include <bitset>
#include <time.h>
#include <iostream>
#include <list>
#include <vector>
#include <math.h>

using namespace std;

SuperBlock::SuperBlock(){
    SuperBlock* sb;
	
}

int SuperBlock::assignInode(){
    if (this->inodes.all()) return -1; //returns -1 if there's no 0 in superblock 
			else {
				for (int i = 0; i < NO_INODES; i++) {
					if (this->inodes.test(i) == 0) {
						this->inodes.set(i);
						return i;
					}
				}
			}
			std::cerr << "Something went wrong while trying to assign new inode! ";
			return -1;
}

int SuperBlock::assignMemBlock(){
    if (this->memBlocks.all()) return -1; //returns -1 if there's no 0 in superblock 
			else {
				for (int i = 0; i < NO_MEMBLOCKS; i++) {
					if (this->memBlocks.test(i) == 0) {
						this->memBlocks.set(i);
						return i;
					}
				}
			}
			std::cerr << "Something went wrong while looking for a free memory block";
			return -1;
}

void SuperBlock::print(){
    std::cout << "Printing superBlock\n";
			for (int i = 0; i < NO_INODES; i++) {
				std::cout << this->inodes.test(i);
			}
			std::cout << " ";
			for (int i = 0; i < NO_MEMBLOCKS; i++) {
				std::cout << this->memBlocks.test(i);
			}
}




