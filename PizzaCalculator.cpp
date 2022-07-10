//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: HW 2 - Create a program that calculates the price of pizza
//Date: September 2018

#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	const double PI = 3.14159, SLICE_AREA = 14.125;
	double 	radius , pizzaArea, numSlicesPizza;
	int slicesPerPerson = 3, numPeople, numPizzasNeed, pizzaD;

	cout << "What size pizza would you like? (Enter the diameter in inches)\n";
	cin >> pizzaD;
	cout << "How many people are at the party?\n";
	cin >> numPeople;

	radius = pizzaD / 2;
	pizzaArea = PI * pow(radius, 2.0);
	numSlicesPizza = pizzaArea / SLICE_AREA;
	numPizzasNeed = ((numPeople * slicesPerPerson) / numSlicesPizza) + 1;

	cout << endl;
	cout << "Number of pizzas: " << right << setw(4) << numPizzasNeed << endl << endl;

	_getch();
	return 0;
}

