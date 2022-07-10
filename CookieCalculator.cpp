//CSC114-651
//Student: Christopher Yonek (700642859)
//Assignment: No 2. - Create a program that gives ingredient amounts.
//Date: September 2018

#include <iostream>

int main()
{
    std::cout << "Please enter how many cookies you want to make:\n";
	int c;
	std::cin >> c;
	double s = ((c/48)*1.5);
	double b = c/48;
	double fl = ((c/48)*2.75);
	std::cout << s << " cups of sugar.\n";
	std::cout << b << " sticks of butter.\n";
	std::cout << fl << " cups of flour.\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
