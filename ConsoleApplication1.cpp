//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: This is a program that gives cos0, sin0, tan0 of angle
//Date: September 2018

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	double angle;
	

	cout << "Enter the angle you want to evaluate the sin, cos, tan of:";
	cin >> angle;
	cout << setprecision(4) << fixed ;
	cout << "The Sin of 0 =" << sin(angle) << endl;
	cout << "The Cos of 0 =" << cos(angle) << endl;
	cout << "The Sin of 0 =" << tan(angle) << endl;
	_getch();
	return 0;
}
