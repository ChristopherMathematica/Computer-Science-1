#include "pch.h"
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
	int num;
		char letterx = 'x';
		cout << "Enter a number and I'll give you a square! ";
		cin >> num;

		double displayX = pow(letterx, num);
		cout << displayX;
		return 0;
}
