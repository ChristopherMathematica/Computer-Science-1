// ConsoleApplication26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
}
