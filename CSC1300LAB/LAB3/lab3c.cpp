/*******************************************************************
	/*
	Title:  	lab_3c.cpp
	Author:		Kamden Edens
	Date:		2/13/2022	
	Purpose:	Calculates Millie-amps and prints it out to the user.
/*********************************************************************
*/

using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
 
{	
	double resistance = 0.0, current = 0.0;
	const double voltage = 5.95487;
	string fullName;
	
	cout << "\n\nWhat is the resistance in Kilo-ohms of your circuit?\n";
	cin >> resistance;
	cin.ignore();
	
	cout << "\n\nWhat is your first & last name?\n";
	getline(cin, fullName);

	// Calculate the current.
	current = voltage / resistance;
	
	// Display the current.
	cout << "\n\nHello, " << fullName;
	cout << "! The current of your circuit is: " << current << " Millie-amp.";
	cout << endl << endl;
	
	return 0;
}