#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int years, rainfall = 0;

	cout << "Please enter how many years you wanna calculate rainfall: \n"; 
	cin >> years;

	int months = years * 12;

	while (years != 0)
	{
		while (months != 0)
		{
			int inpuTt = 0;
			while (inpuTt != 0)
			{
				rainfall = rainfall + inpuTt;
				cout << "Please enter your average monthly rainfall";
				cin >> inpuTt;
			}
			months--;
		}

		years--;
	}
	cout << " Heres your months, rainfall, and avg rainfall (respectively)" << years / 12 << rainfall;
	_getch();
	return 0;
}
