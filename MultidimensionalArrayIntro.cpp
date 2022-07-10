//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: First Multidimensional Array
//Date: November 2018

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	const int length = 3, width = 4;
	int Arry[length][width] = {
	{20,14,70,60},
	{40,26,66,77},
	{44,22,59,66}
	};

	int n = 0, b = 0;
	while (n < length && b < width) {
		cout << Arry[n][b] << endl;
		n++;
	}
	return 0;
}

