
#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>

using namespace std;

const float sliceArea = 14.125, PI = 3.14159;
const int TWO = 2, FOUR = 4;
float d, r, Area, numbSlices, numbPeople, numbPizzas;

int main()
{

	cout << endl;
	cout << "How many people will be attending the party?";
	cin >> numbPeople;
	cout << "What is the diameter of pizza in inches?";
	cin >> d;

	r = d / TWO;
	Area = PI * pow(r, TWO);
	numbSlices = Area / sliceArea;
	numbPizzas = FOUR * numbSlices;

	cout << setprecision(1) << fixed;
	cout << "The number of Pizzas you need is:" << numbPizzas;
	cout << endl;

	_getch();
	return 0;

}