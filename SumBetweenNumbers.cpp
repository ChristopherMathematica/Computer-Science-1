//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Lab 4 - Create a program that sums the numbers between 0 and a specified number.
//Date: October 2018

#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int num = 0;
	int sum = 0;

	cout << "Enter how many numbers you want to sum\n";
	cin >> num;

	while (num < 0){
		cout << "Please enter positive integer only,\n";
		cin >> num;
	}
	for (int i = 1; i <= num; i++){
		sum += i;
	}
	cout << "The total sum is:" << sum;
	_getch();
	return 0;
}

