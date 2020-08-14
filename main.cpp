#include <iostream>
#include "FileSystem.h"
#include "Directory.h"
#include "SuperBlock.h"
#include "Kernel.h"

using namespace std;

int main(){
    string param1;
    FileSystem fm;
    std::cout << "Please enter the name of a new file: ";
	std::cin >> param1;
	fm.createFile(param1);
}
