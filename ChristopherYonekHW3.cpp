
//CSC114-651
//Christopher Yonek (700642859)
//HW 3 - Area of Rectangles

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>

using namespace std;

double firstRectangleW, firstRectangleL;
double secondRectangleW, secondRectangleL;


int main()
{
	cout << "Enter the length and width of the first rectangle:" << endl;
	cin >> firstRectangleL >> firstRectangleW;
	cout << "Enter the length and width of the second rectangle:" << endl;
	cin >> secondRectangleL >> secondRectangleW;

	if (firstRectangleW * firstRectangleL > secondRectangleL * secondRectangleW)
		cout << "The area of the first rectangle is greater than the second." << endl;
	else if (firstRectangleW * firstRectangleL < secondRectangleL * secondRectangleW)
		cout << "The area of the second rectangle is greater than the second." << endl;
	else 
		cout << "The area of the rectangles are the same." << endl;
	_getch();
	return 0;
}