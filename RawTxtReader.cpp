//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: HW8 - Read a text file called H8.txt that has a string of numbers and add it up.
//Date: October 2018
#include "pch.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


int main()
{
	ifstream file("C:/Users/Home/Desktop/ComputerScience/HW8.txt");
	int size;
	file >> size;
	vector<int> a(size);

	int n = 0;
	while (n < size && file >> a[n])
	{
		++n;
	}


	for (int n = 0; n < size; ++n)
	{
		cout << a[n] << endl ;
	}
	cout << '\n';
}
