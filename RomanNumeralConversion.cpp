//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: The converts an int into a roman numeral string.
//Date: September 2018

#include "stdafx.h"
#include <iostream>

using namespace std;

int number;

int main()
{
	cout << "Please put in a number between 1 and 10.";
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "I";
		break;
	case 2:
		cout << "II";
		break;
	case 3:
		cout << "III";
		break;
	case 4:
		cout << "IV";
		break;
	case 5:
		cout << "V";
		break;
	case 6:
		cout << "VI";
		break;
	case 7:
		cout << "VII";
		break;
	case 8:
		cout << "VIII";
		break;
	case 9:
		cout << "IX";
		break;
	case 10:
		cout << "X";
		break;
	default: cout << "You have entered a number outside the range. Try again.";
		break
	}
	cout << endl;
	return 0;
}
