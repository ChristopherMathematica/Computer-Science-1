//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Lab 1 - Create a program that prints fullName, Course Grade, GPA, and Age
//Date: September 2018

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


int main()
{
	string fullName;
	fullName = "John Smith";
	char CourseGrade = 'B';
	double gpa = 3.0;
	int age = 19;

	cout << "Name:" << fullName << endl;
	cout << "Course Grade:" << CourseGrade << endl;
	cout << "GPA:" << gpa << endl;
	cout << "Age:" << age << endl;

	_getch();
	return 0;
}
