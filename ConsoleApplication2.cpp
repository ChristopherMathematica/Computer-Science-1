//First Application Using Array
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int number;

int main()
{
	string romanNumerals{ "O","I","II","III","IV","V","VI","VII","VIII", "IX", "X" };
	if (number >= 1 && number <= 10)
		cout << romanNumerals[number];
	else << "You entered the incorrect number";
	return 0;
}

