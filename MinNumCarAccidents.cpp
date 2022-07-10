//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Create a program that finds the min number of accidents given data for each region.
//Date: September 2018

#include "pch.h"
#include <iostream>
#include <conio.h>

int getNumAccidents(int accidents) {
	if (accidents <= 0)
	{
		std::cout << "You must enter a number greater than 0.\n";
	}
	else {
		return accidents;
	}
}

	int main(){
		using namespace std;
		int north, south, east, west, central;
	std::cout << "Enter autombile accidents for the past year in northern region\n";
	std::cin >> north;
	std::cout << "Enter autombile accidents for the past year in southern region\n";
	std::cin >> south;
	std::cout << "Enter autombile accidents for the past year in eastern region\n";
	std::cin >> east;
	std::cout << "Enter autombile accidents for the past year in western region\n";
	std::cin >> west;
	std::cout << "Enter autombile accidents for the past year in centeral region\n";
	std:: cin >> central;
	int min = getNumAccidents(north);
	if (getNumAccidents(south) < min) 
		min = getNumAccidents(south);
	if (getNumAccidents(east) < min)
		min = getNumAccidents(east);
	if (getNumAccidents(west) < min)
			min = getNumAccidents(west);
	if (getNumAccidents(central) < min)
			min = getNumAccidents(central);
	std::cout << "The minimum car accidents is: "  << min;


	_getch();
	return 0;
}
	void findlowest() {
		int min = getNumAccidents(north);
		if (getNumAccidents(south) < min)
			min = getNumAccidents(south);
		if (getNumAccidents(east) < min)
			min = getNumAccidents(east);
		if (getNumAccidents(west) < min)
			min = getNumAccidents(west);
		if (getNumAccidents(central) < min)
			min = getNumAccidents(central);
		std::cout << "The minimum car accidents is:" << min;
	}
