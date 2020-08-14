#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#include <bitset>
#include <time.h>
#include <iostream>
#include <list>
#include <vector>
#include <math.h>

#include "Directory.h"
#include "SuperBlock.h"
#include "Kernel.h"

using namespace std;

#define NO_MEMBLOCKS 1000	
#define NO_INODES 16	
#define SO_BLOCK 512	

class FileSystem{
    public: 
        FileSystem();    //constructor
        int createFile(string name);

        list<Directory> root;
        Inode inodeTable[NO_INODES];
        char disk[NO_MEMBLOCKS][SO_BLOCK];

        SuperBlock supB;
        


};
#endif