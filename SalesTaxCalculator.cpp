//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Create a program that calculates various sales tax.
//Date: September 2018

#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	string month, year;
	int registerCollection;
	cout << " Enter the month, the year, and amount collected at register:\n";
	cin >> month;
	cin >> year;
	cin >> registerCollection;
	cout << "Month: " << month << endl;
	cout << "Year: " << year << endl;
	cout << "Total Collected: " << registerCollection << endl;
	double countyTax = registerCollection * .02;
	cout << "County Sales Tax: " << countyTax << endl;
	double statesales = registerCollection * .04;
	cout << "State Sales Tax: " << statesales << endl;
	double totalSales = registerCollection * .06;
	cout << "Total Sales Tax: " << totalSales << endl;
	int sales = registerCollection - totalSales;
	cout << "Sales: " << sales << endl;

	_getch();
	return 0;
}
