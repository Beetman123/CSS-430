
#include "FileSystem.h"
#include <bitset>
#include <time.h>
#include <iostream>
#include <list>
#include <vector>
#include <math.h>
#include "SuperBlock.h"

FileSystem::FileSystem(){
	cout << "Filling blocks with zero\n";
	supB.inodes.reset();	
	supB.memBlocks.reset();	//resets all memory blocks / resetuje wszystkie bloki pamieci
}
int FileSystem::createFile(string name){
    int inodeNr = supB.assignInode(); //inodeNr is being assigned for created file / numer i-wezla jest przypisywany do stworzonego pliku
	if (inodeNr == -1) {
		return -1;
	}
    int memBlockNr = supB.assignMemBlock(); //memory block is being assigned for created file / do pliku jest przypisywany blok pamieci
	if (memBlockNr == -1) {
		cerr << "Memory Full";
		return -1;
	}
    inodeTable[inodeNr].setAll(memBlockNr);

    cout << "-- File " << name << " created. " << name << ".\n";
	
	return inodeNr;


}