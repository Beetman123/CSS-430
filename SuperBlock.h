#ifndef SUPERBLOCK_H
#define SUPERBLOCK_H
#include <bitset>
#include <time.h>
#include <iostream>
#include <list>
#include <vector>
#include <math.h>

using namespace std;

#define NO_MEMBLOCKS 1000	//total number of memory blocks (multiplied by SO_BLOCK gives total disk size in chars) / calkowita liczba blokow pamieci (pomnozona razy SO_BLOCK daje calkowity rozmiar dysku w znakach)
#define NO_INODES 16	//total number of inodes (max. number of files) / calkowita liczba i-wezlow (maksymalna liczba plikow)
#define SO_BLOCK 512

class SuperBlock{
    public: 
        SuperBlock();
        int assignInode();
        int assignMemBlock();
        void print();
    
    
        bitset<NO_INODES> inodes;
		bitset<NO_MEMBLOCKS> memBlocks;

};
#endif