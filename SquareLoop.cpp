//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: This program uses a loop to raise a number to a power.
//Date: September 2018

#include "pch.h"
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
