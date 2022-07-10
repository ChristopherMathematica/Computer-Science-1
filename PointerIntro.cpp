//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Print out a snippet that shows the value of a pointer.
//Date: November 2018

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// The memory address operator of a regular variable is & 
	int fish = 5;
	cout << &fish << endl;

	int *fishPointer;
	fishPointer = &fish;

	cout << fishPointer << endl;
	_getch();
	return 0;
}
