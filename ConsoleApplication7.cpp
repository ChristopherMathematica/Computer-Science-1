// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

float futureValuefuction(int, int, int);

int main()
{
	int userpresentValue, usermonthlyInterestrate, usernumMonths;

    cout << "This program is on compond monthly interest\n";
	cout << "Type in your present amount of money: ";
	cin >> userpresentValue;
	cout << "\nType in your monthly interest rate: ";
	cin >> usermonthlyInterestrate;
	cout << "\nType in the number of months: ";
	cin >> usernumMonths;
	cout << "\n Your future amount is: $";
	cout << futureValuefuction(userpresentValue, usermonthlyInterestrate, usernumMonths);
	_getch();
	return 0;
}

float futureValuefuction(int presentValue, int monthlyInterestrate, int numMonths) {
	int futureValue = presentValue * pow((1 + monthlyInterestrate), numMonths);
	return futureValue;
}
