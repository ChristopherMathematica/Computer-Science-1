// ConsoleApplication19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int ShoeSize[6] = { 5,6,9,10,11,7 };
	int total = 0;
	for (int value : ShoeSize)
	{
		total += value;
	}
	cout << total;
	return 0;
}

