//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: HW2 - Create a program that calculates number of slices given price.
//Date: September 2018

#include <iostream>
#include <iomanip>
#include <cmath>
#include "pch.h"

using namespace std;

int main()
{
	const float areaSizeS = 14.125, PI = 3.14159;
	const int two = 2;
	float d, r, Area, numberSlices;

	r = d / two;
	Area = PI * pow(r, two);
	numberSlices = Area / areaSizeS;

	cout << "What is the dianeter of pizza in inches";
	cin >> d;
	cout << setprecision(1) << fixed;
	cout << "The number of slices is:" << numberSlices;

	return 0;
}
