// TimeCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;


double getSales(double divisionquarterlysales1, double divisionquarterlysales2, double divisionquarterlysales3, double divisionquarterlysales4) {
	cout << "What is the division quarterly sales figure for Northeast?\n";
	cin >> divisionquarterlysales1;
	cout << "What is the division quarterly sales figure for Southeast?\n";
	cin >> divisionquarterlysales2;
	cout << "What is the division quarterly sales figure for Northwest?\n";
	cin >> divisionquarterlysales3;
	cout << "What is the division quarterly sales figure for Southwest?\n";
	cin >> divisionquarterlysales4;
	if (divisionquarterlysales1 < 0 || divisionquarterlysales2 < 0 || divisionquarterlysales3 < 0 || divisionquarterlysales4 < 0) {
		cout << "Please put in a positive number!";
	}
	else
	{
		return divisionquarterlysales1, divisionquarterlysales2, divisionquarterlysales3, divisionquarterlysales4;
	}
}
void findHighest() {

if (divisionquarterly1 =)
}


int main() {
	getSales();
		_getch();
		return 0;
}

3. Winning Division
Write a program that determines which of a company’s four divisions(Northeast,
	Southeast, Northwest, and Southwest) had the greatest sales for a quarter.It should
	include the following two functions, which are called by main .
	• double getSales() is passed the name of a division.It asks the user for a division’s
	quarterly sales figure, validates the input, then returns it.It should be called once for
	each division.
	• void findHighest() is passed the four sales totals.It determines which is the largest
	and prints the name of the high grossing division, along with its sales figure.
	Input Validation : Do not accept dollar amounts less than $0.00.