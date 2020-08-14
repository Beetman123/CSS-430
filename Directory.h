#ifndef DIRECTORY_H
#define DIRECTORY_H
#include <bitset>
#include <time.h>
#include <iostream>
#include <list>
#include <vector>
#include <math.h>

using namespace std;

class Directory{
    public: 
        bool newDir(int inodeNr, string name, list<Directory> root);

    private:
        unsigned short inodeNumber;
		string name;

};
#endif