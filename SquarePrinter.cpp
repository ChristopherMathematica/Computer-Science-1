//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Print a square in a num x num formation.
//Date: September 2018

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

