//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Exam 4 - Object Oriented Programming Circle and Rectangle
//Date: September 2018

#include "pch.h"
#include <iostream>
#include <iomanip>
#include "Rectangle.h"
#include "Circle.h"
#include <conio.h>
using namespace std;

double largestValue(double, double, double, double);
int main()
{
	Rectangle box;
	double rectWidth1;
	double rectLength1;
	double rectWidth2;
	double rectLength2;


	Circle sphere;
	double cirRadius1, cirRadius2;

	cout << "This program will calculate the area and circumference of two" << endl;
	cout << "rectangles and circles.\n What is the width of rectangle 1?\n";
	cin >> rectWidth1;
	cout << "What is the length for rectangle 1? \n";
	cin >> rectLength1;
	cout << "What is the width of rectangle 2? \n";
	cin >> rectWidth2;
	cout << "What is the length of rectangle 2? \n";
	cin >> rectLength2;
	cout << "What is the radius of circle 1? \n";
	cin >> cirRadius1;
	cout << "What is the radius of circle 2? \n";
	cin >> cirRadius2;

	// Set First Rectangle & First Circle
	box.setWidth(rectWidth1);
	box.setLength(rectLength1);
	sphere.setRadius(cirRadius1);
	double AreaRectVal = box.getAreaR();
	double AreaCircVal = sphere.getAreaC();
	double CircumRectVal = box.getCircumR();
	double CircumCircVal = sphere.getCircumference();

	//Data Rect1
	cout << "Here is the 1st rectangle's data:\n";
	cout << "Area: " << box.getAreaR() << endl;
	cout << "Circumference: " << box.getCircumR() << endl << endl;


	//Data Circ1
	cout << "Here is the 1st circle's data:\n";
	cout << "Area: " << fixed << setprecision(2) << sphere.getAreaC() << endl;
	cout << "Circumference: " << fixed << setprecision(2) << sphere.getCircumference() << endl << endl;

	//Set Second Rectangle & Second Circle
	box.setWidth(rectWidth2);
	box.setLength(rectLength2);
	sphere.setRadius(cirRadius2);
	int AreaRectVal2 = box.getAreaR();
	int AreaCircVal2 = sphere.getAreaC();
	int CircumRectVal2 = box.getCircumR();
	int CircumCircVal2 = sphere.getCircumference();


	//Data Rect 2
	cout << "Here is the 2nd rectangle's data:\n";
	cout << "Area: " << box.getAreaR() << endl;
	cout << "Circumference: " << box.getCircumR() << endl << endl;


	//Data Circ2
	cout << "Here is the 2nd circle's data:\n";
	cout << "Area: " << fixed << setprecision(2) << sphere.getAreaC() << endl;
	cout << "Circumference: " << fixed << setprecision(2) << sphere.getCircumference() << endl << endl;

	
	//Results of data sets
	cout << "The largest area was: " << fixed << setprecision(2) << largestValue(AreaCircVal, AreaRectVal, AreaRectVal2, AreaCircVal2) << endl;
	cout << "The largest circumference was: " << fixed << setprecision(2) << largestValue(CircumCircVal, CircumRectVal, CircumCircVal2, CircumCircVal2) << endl;

	_getch();
	return 0;
}

double largestValue(double arg1, double arg2, double arg3, double arg4)
{
	double max = 0;
	if (arg1 > arg2)
	{
		max = arg1;
		return max;
	}
	else
	{
		max = arg2;
		return max;
	}
	if (arg2 > arg3)
	{
		max = arg2;
		return max;
	}
	else
	{
		max = arg3;
		return max;
	}
	if (arg3 > arg4)
	{
		max = arg3;
		return max;
	}
	else
	{
		max = arg4;
		return max;
	}
}
