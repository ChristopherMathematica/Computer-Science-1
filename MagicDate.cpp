//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Create a program that checks if the month times day is equal to the years digit.
//Date: September 2018

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{
	int month, day, yeardigit;

		cout << "Enter the month, day, and digit year\n";
		cin >> month;
	cin >> day;
	cin >> yeardigit;
	if (month * day == yeardigit)
	{
		cout << "The date is magic.";
	}
	else {
		cout << "The date is not magic";
	}
	_getch;
	return 0;
}


