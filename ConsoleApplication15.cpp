// ConsoleApplication15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
 // This program uses a loop to raise a number to a power.
#include <iostream>
using namespace std;
int main()
{
	int num, bigNum, power, count=1 ;
	cout << "Enter an integer: ";
	cin >> num;
	cout << "What power do you want it raised to? ";
	cin >> power;
	bigNum = num;
	while (count++ < power);
	bigNum *= num;
	cout << "The result is: " << bigNum << endl;
		return 0;
}
