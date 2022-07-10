//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: A program that plays hangman for a select few words.
//Date: October 2018

#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <conio.h>
#include <algorithm>
using namespace std;

int main()
{
	const int NUM_GUESSES = 20;
	int attempts1 = 0;
	bool attempts2 = 0;
	char playGame,letter;
//Variety of words
	string ANSWER[NUM_GUESSES] = { "Rain", "Happy", "Blue", "Dude", "Fantastic", "download", "maintain", "spotify", "carpet", "note", "lights", "night", "kite", "write", "might", "height", "right", "shite", "hyper" };
	string choiceW;
//Shuffling the strings in the array, then selecting one string 
	random_shuffle(ANSWER[1], ANSWER[20]);
	choiceW = ANSWER[10];
//Game Menu
	cout << "Lets play a game of hang man? Are you game? (Enter 'y' for yes/ Enter 'n' for no)\n\n";
	cin >> playGame;
	if (playGame = 'y') {
		while (attempts1 > 6) {
			cout << "Enter your first letter\n";
			cin >> letter;
// "If the input =/= the letters of randomized word"
			if (letter != ANSWER[10][1]) {
				attempts1++;
			}
			if (attempts2 = 1)
			cout << "You're right! The first letter is:" << ANSWER[10][1] << endl;
			cout << "Enter another letter.\n";
			cin >> letter;
			if (letter != ANSWER[10][2])
				attempts1++;
			if (attempts2 = 1)
				cout << "You're right! The second letter is:" << ANSWER[10][2] << endl;
			cout << "Enter another letter.\n";
			cin >> letter;
			if (letter != ANSWER[10][3])
				attempts++;
			if (attempts2 = 1)
				cout << "You're right! The third letter is:" << ANSWER[10][3] << endl;
			cout << "Enter another letter.\n";
			cin >> letter;
			if (letter != ANSWER[10][4])
				attempts++;
			if (attempts = 4)
				cout << "You're right! The fourth letter is:" << ANSWER[10][4] << endl;
			cout << "Enter another letter.\n";
			cin >> letter;
			if (letter != ANSWER[10][5])
				attempts++;
			if (attempts = 5)
				cout << "You're right! The fifth letter is:" << ANSWER[10][5] << endl;
			cout << "Enter another letter.\n";
			cin >> letter;
			if (letter != ANSWER[10][6])
				attempts++;
			if (attempts = 6)
				cout << "You're right! The first letter is:" << ANSWER[10][1] << endl;
			cout << "Enter another letter.\n";
			cin >> letter;
			if (letter != ANSWER[10][7])
				attempts++;
			cout << "Enter another letter.\n";
			cin >> letter;
			if (letter != ANSWER[10][8])
				attempts++;
			cout << "Enter another letter.\n";
			cin >> letter;
			if (letter != ANSWER[10][9])
				attempts++;
			cout << "Enter another letter.\n";
			cin >> letter;
			if (letter != ANSWER[10][10])
				attempts++;
			cout << "Enter another letter.\n";
			cin >> letter;
		}
		cout << "Sorry you did not win, Try again!\n";

	else {
		cout << "You're a sad cat! :(";
	}

		_getch();
	return 0;
}

