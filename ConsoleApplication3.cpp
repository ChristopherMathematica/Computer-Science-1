#include "pch.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <iostream>

using namespace std;

int const TWO = 2;
int diameterPizza,
radiuS = diameterPizza / TWO;
double areA = M_PI * pow(radiuS, TWO),
numberSlices = areA / TWO;

int main()
{
	cout << "Enter the diameter in inches:" << endl;
	cin >> diameterPizza;
	cout << "The number of slices you need is:" << numberSlices << endl;

	return 0;

}