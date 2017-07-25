// MadLib.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;




int main()
{
	string noun, verb, place, food;// creating variables to hold user inputs.

	cout << "Please enter a noun, verb,a place, and a type of food:" << endl;
	cin >> noun >> verb >> place >> food;// saving user inputs into our variables.
	noun[0] = toupper(noun[0]);//Converting the first letter of our noun to uppercase.

	cout << "\nThe man was known as " << noun << " he loved to " << verb << "." << endl;
	cout << noun << " loved to eat " << food << " at his favorite " << place << "." << endl;
	cin.ignore();

	system("pause");

	return 0;
}

