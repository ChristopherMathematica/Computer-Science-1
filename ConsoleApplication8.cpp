
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{

double widthRect1, lengthRect1;
double widthRect2, lengthRect2;

cout << "Enter the width and length of triangle 1: \n";
cin >> widthRect1;
cin >> lengthRect1;

cout << "Enter the width and length of triangle 2: \n";
cin >> widthRect2;
cin >> lengthRect2;

if (widthRect1 * lengthRect1 > widthRect2 * lengthRect2)
cout << "Triangle 1 has greater area!";

else if (widthRect1 * lengthRect1 < widthRect2 * lengthRect2)
	cout << "Triangle 2 has greater area!";

else {
	cout << "The areas of the two are equal.";
}


_getch();
return 0;
}