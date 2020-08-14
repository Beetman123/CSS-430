#include <iostream>
#include <bitset>
#include <time.h>
#include <iostream>
#include <list>
#include <vector>
#include <math.h>

#include "Directory.h"

bool Directory::newDir(int inodeNr, string name, list<Directory> root){
        Directory temp;
		temp.inodeNumber = inodeNr;
		temp.name = name;
		root.push_back(temp);
		return true;
}