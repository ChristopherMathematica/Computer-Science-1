// ConsoleApplication17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int number;

	cout << "Enter a number and I'll give you a square\n";
	cin >> number;
	for (int col = 0; col < number; col++)
	{
		for (int row = 0; row  < number; row++)
		{
			cout << "X";
		}
		cout << endl;
	}
}

