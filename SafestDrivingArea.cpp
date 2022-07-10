//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: HW 6 - Determine the safest driving area
//Date: October, 2018

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int getNumAccidents(string);
void getLowest(int, int, int, int, int);

int main() {
	int totalNorth, totalSouth, totalEast, totalWest, totalCentral;
	for (int i = 0; i < 5; i++)
		switch (i) {
		case 0:
			totalNorth = getNumAccidents("North");
			break;
		case 1:
			totalSouth = getNumAccidents("South");
			break;
		case 2:
			totalEast = getNumAccidents("East");
			break;
		case 3:
			totalWest = getNumAccidents("West");
			break;
		default: totalCentral = getNumAccidents("Central");
			break;
		}
	 getLowest(totalNorth, totalSouth, totalEast, totalWest, totalEast);
	_getch();
	return 0;
}

int getNumAccidents(string location){
	int accidents = 0;
	std::cout << "Enter the number of accidents for city:\n" << location << " ";
	cin >> accidents;
	
	while (accidents <0){
		std::cout << "Enter a number greater than 0";
		std::cin >> accidents;
	}
	return accidents;
}

void getLowest(int north, int south, int east, int west, int central){
	int lowest = 0;
	string location;

	if (north < south && north < east && north < west && north < central){
		lowest = north;
		location = "North";
	}
	else if (south < north && south < east && south < west && south < central){
		lowest = south;
		location = "South";
	}
	else if (east < north && east < south && east < west && east < central)
	{
		lowest = east;
		location = "East";
	}
	else if (west < north && west < south && west < south && west < central)
	{
		lowest = west;
		location = "West";
	}
	else {
		lowest = central;
		location = "Central";
	}
	std::cout << "The city with least accidents is:\n" << location << "\n The number of accidents in that city is:\n" << lowest;
}
