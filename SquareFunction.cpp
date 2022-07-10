//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: This program uses a bultin to raise a number to a power
//Date: September 2018

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
	int num;
		char letterx = 'x';
		cout << "Enter a number and I'll give you a square! ";
		cin >> num;

		double displayX = pow(letterx, num);
		cout << displayX;
		return 0;
}
