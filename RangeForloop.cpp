//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Sum's all the shoe sizes.
//Date: September 2018

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

