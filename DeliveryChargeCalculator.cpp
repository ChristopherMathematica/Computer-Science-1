//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Exam 3 - Calculate the delivery charge given a series of locations
//Date: November 2018

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;

float deliveryCharge(int, int);

int main()
{
	const int num_regions = 5;
	char endprogram = 'a';
	string LocationChoice;
	int distanceIndex[num_regions] = { 3,2,4,1,0 };
	int accidentsReport[num_regions] = { 132, 60, 289, 27,49 };
	string Location[num_regions] = { "north", "east", "south", "west","centeral" };

	cout << "This is for calculating the deilvery charge for take out! \n\n";

	while (endprogram != 'n')
	{
		cout << "Enter the location of the city: \n";
		cin >> LocationChoice;

		for (int count = 0; count < num_regions; count++)
		{
			if (LocationChoice == Location[count])
			{
				cout << "Total for Delivery: $" << fixed << setprecision(2) << deliveryCharge(distanceIndex[count], accidentsReport[count]) << endl;
			}

		}
		cout << "Enter 'n' to exit, Enter 'y' to continue: \n\n";
		cin >> endprogram;
	}

	_getch();
	return 0;
}

float deliveryCharge(int distanceIndexInput, int accidentReportInput)
	{
		float total = (distanceIndexInput * 0.25 + accidentReportInput * 0.1) + 3;
		return total;
	}
