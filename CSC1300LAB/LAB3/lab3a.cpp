/*
	Title:  	lab_3a.cpp
	Author:		Kamden Edens
	Date:		2/12/2022	
	Purpose:	This program is written for Happy Summer Resorts that asks the user the
				the amount of days and people that they will be staying. Then applies
				a discount according to the amount of people in the group.  
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	//Defining 
	string userName;
	int numDays = 0, amtPeople = 0;
	double nightCost = 199.99, disc0 = 0, disc1 = .1, disc2 = .15, disc3 = .2, disc4 = .25, discTotal = 0.0, totalCost = 0.0, totalcostDisc = 0.0;

	//Input and user interface
	cout << "Welcome to the Happy Summer Resort!" << endl;
	cout << "\nWhat is your name? ";
	getline(cin, userName);
	cout << "\nHello " << userName << "!" << endl << "\nThe night cost is: $" << nightCost << endl;
	cout << "\nHow many nights do you want to stay? ";
	cin >> numDays; 
	while ((numDays < 0) || (numDays > 100)) {
		cout << "Invalid user input. Please Try again: ";
		cin >> numDays;
	}
	totalCost = numDays * nightCost;
	// prints chart
	cout << "\nWe offer group discounts shown below: " << endl;
	cout << "\n" << setw(20) << "Number of people" << setw(20) << "Discount" << endl;
	cout << setw(8) << "5-10" << setw(27) << "10%" << endl;
	cout << setw(9) << "11-20" << setw(26) << "15%" << endl;
	cout << setw(9) << "21-30" << setw(26) << "20%" << endl;
	cout << setw(14) << "31 or more" << setw(21) << "25%" << endl;
	// math for amount of people for discounts
	cout << "\n" << userName << ", how many people are in your group? ";
	cin >> amtPeople;
	while ((amtPeople < 0) || (amtPeople > 200)) {
		cout << "Invalid user input. Please enter in a smaller or non-negative number: ";
		cin >> amtPeople;
	}
	if ((amtPeople >= 0) && (amtPeople <= 4)) {
		discTotal = 0; 
		totalcostDisc = totalCost - discTotal; 
	}
	else if ((amtPeople >= 5) && (amtPeople <= 10)) {
		discTotal = disc1 * totalCost; 
		totalcostDisc = totalCost - discTotal; 
	}
	else if ((amtPeople >= 11) && (amtPeople <= 20)) {
		discTotal = disc2 * totalCost; 
		totalcostDisc = totalCost - discTotal; 
	}
	else if ((amtPeople >= 21) && (amtPeople <= 30)) {
		discTotal = disc3 * totalCost; 
		totalcostDisc = totalCost - discTotal;
	}
	else if (amtPeople > 30) {
		discTotal = disc4 * totalCost; 
		totalcostDisc = totalCost - discTotal;
	}
	else {
		cout << "Invalid Input";
	}
	//Final result - setw is a little off when using full name. 
	cout << "\n\n----------------------------------------" << endl;
	cout << "BILL FOR: " << setw(14) << userName << endl;
	cout << fixed << showpoint << setprecision(2) << "DISCOUNTED COST: " << setw(2) << "$" << discTotal << " (per night)" << endl;
	cout << "TOTAL COST: " << setw(7) << "$" << totalcostDisc << endl; 
	return 0;
}