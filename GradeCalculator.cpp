//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: This will calculate the grades of various students.
//Date: September 2018

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int num_Names = 4,  num_Tests = 3;
	string names[num_Names];
	char Grades[5] = { 'A','B','C','D','F' };
	double test_score1[num_Names][num_Tests];
	int average[num_Tests], studentID[num_Names];
	for (size_t i = 0; i < num_Names; i++)
	{
		cout << "Enter the students name\n";
		cin >> names[i];
		cout << "Enter the student's ID\n";
		cin >> studentID[i];

		for (int count = 0; test_score1[count] < 0; cout << "yay";)
		{

		cout << "Enter the first test score\n";
		cin >> test_score1[i][0];
		cout << "Enter the 2nd test score\n";
		cin >> test_score1[i][1];
		cout << "Enter the 3rd test score\n";
		cin >> test_score1[i][2];
		cout << "Enter the first 4th score\n";
		cin >> test_score1[i][3];
		average[i] = (test_score1[i][0] + test_score1[i][1] + test_score1[i][2] + test_score1[i][3]) / 4;
	}

	for (size_t i = 0; i < num_Names; i++) {
			cout << "Name: " << names[i] << endl;
			cout << "Student ID: " << studentID[i] << endl;
			cout << "Average Test Score: " << average[i] << endl;
			if (average[i] <= 100 && average[i] >= 91)
			{
				cout << "Course Grade: " << Grades[0] << endl;
			}
			if (average[i] <= 90 && average[i] >= 81)
			{
				cout << "Course Grade: " << Grades[1] << endl;
			}
			if (average[i] <= 80  && average[i] >= 71)
			{
				cout << "Course Grade: " << Grades[2] << endl;
			}
			if (average[i] <= 70 && average[i] >= 61)
			{
				cout << "Course Grade: " << Grades[3] << endl;
			}
			if (average[i] <= 60 && average[i] >= 0)
			{
				cout << "Course Grade: " << Grades[4] << endl;
			}

			cout << endl;
	}

	return 0;
}
