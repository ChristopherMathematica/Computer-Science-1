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