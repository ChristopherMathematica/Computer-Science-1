//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Calculate the rainfall given yearly rainfall data.
//Date: October 2018

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	int years, months, rainfall;
	cout << "Enter the number of years you want to calculate rainfall";
	cin >> years;
	months = years / 12;
	while (years != 0)
	{
		while (months != 0)
		{ 
			int totalmonthlyRain = 1, rainfall = 0;
			while (totalmonthlyRain != 0)
			{
				totalmonthlyRain = totalmonthlyRain + rainfall;
				cout << "Enter the monthly rainfall.\n";
				cin >> rainfall;
			}

			--months;
		}
		years--;
		cout << "The total is: " << rainfall;
	}
	_getch();
	return 0;
}
