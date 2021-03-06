//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: Read a number from a textfile and print out a list larger than N.
//Date: October 2018

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

void showValues(int[], int,int);

int main(){
const int ARRAY_SIZE = 250;
int input_n, count = 0, newSize;
int numbers[ARRAY_SIZE];
ifstream inputFile;
inputFile.open("C:/Users/sides/Documents/College Papers/Computer Science/cstuff/HW8.txt");
while (!inputFile.eof())
{
	inputFile >> numbers[count];
	count++;
}

newSize = count;
cout << "Enter a value for n: \n";
cin >> input_n;
cout << "These are the values larger than n:\n\n";
 showValues(numbers, ARRAY_SIZE,input_n);
 _getch();
 return 0;
 }

void showValues(int nums[], int size, int n)
{
	if (n == -1)
	{
		exit(0);
	}
	for (int index = 0; index < size; index++)
	{
		if (nums[index] > n)
		{
			cout << nums[index] << " ";
			cout << endl;
		}
	}

}
