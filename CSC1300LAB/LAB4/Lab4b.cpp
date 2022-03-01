/*
	Title:  	Lab4b.cpp
	Author:		Kamden Edens
	Date:		2/18/2022
	Purpose:	learning switch statements
*/

#include <iostream>
using namespace std;

int main()
{
	// Defining
	char grade;
	//Input and user interface
	cout << "What grade will you earn on this lab assignment?" << endl;
	cout << "GRADE: ";
	cin >> grade;
	//Calculation + output
	switch (grade) {
		case 'A':
		cout << "An A - you rock!!\n";
		break;

		case 'B':
		cout << "You got a B - good job.\n" ;
		break;

		case 'C':
		cout << "Earning a C is satisfactory.\n";
		break;

		case 'D':
		cout << "While D is passing, there is a problem.\n";
		cout << "You really didnt learn much.\n";
		break;

		case 'F':
		cout << "Oh BARF!  You failed - better luck next time.\n";
		break;
		//The fail safe
		default: 
		cout << "You did not enter an A, B, C, D, or F.\n";
		break; 
	}
	return 0;
}