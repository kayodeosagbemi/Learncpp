// Learncpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int testRunLearnCpp()
{
    cout << "Age Calculator Program!\n";
	cout << "======================\n\n";
	int year;
	int age;
	cout << "My name is Age Calculator v1.0" << endl;
	cout << "Enter your year of birth: ";
	cin >> year;
	int current_year = 2025;
	age = current_year - year;
	cout << "You are " << age << " years old." << endl;
	return 0;
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
