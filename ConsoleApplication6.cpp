// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double num1, num2, quotient;
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;
	if (num2 == 0)
	{
		cout << "Division by zero is not possible.\n";
		cout << "Please run the program again ";
		cout << "and enter a number besides zero.\n";
	}
	else
	{
		quotient = num1 / num2;
		cout << "The quotient of " << num1;
			cout << " divided by " << num2 << " is ";
		cout << quotient << endl;
	}
	
	return 0;
}