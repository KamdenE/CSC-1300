/*
	Title:  	Lab7a.cpp
	Author:		Kamden Edens
	Date:		3/7/2022
	Purpose:	A program that caclulates sick days
                for the bank using functions.
*/

#include <iostream>
using namespace std;

int displayMenuGetChoice();
void employeeSickDays();
// Main
int main() {
    bool LoopV = true;
    while (LoopV)
    {   
        switch (displayMenuGetChoice()) {
            case 1:
                employeeSickDays();
                break;
            case 2:
                cout << "Bye!" << endl;
                LoopV = false;
                break;
            default:
                cout << "Error occurred." << endl;
                LoopV = false;
                break;
        }
    }

    return 0;
}

// Functions
int displayMenuGetChoice() {
        int firstAnswer;
        cout << "\n\nWelcome to the Bank!" << endl;
        cout << "\n\nPlease choose from the following options:" << endl;
        cout << "\n1. Enter Employee Days" << endl;
        cout << "2. End program" << endl;
        cout << "Choice: ";
        cin >> firstAnswer;
        // checks the user's input
        while (cin.fail() || firstAnswer != 1 && firstAnswer != 2) {
            cin.clear();
            cin.ignore(255, '\n');
            cout << "Invalid input. Please try again. " << endl;
            cin >> firstAnswer;
        }
        return firstAnswer;
        
}
// employeeSickDays

void employeeSickDays() {
    //variables
    int numEmployees, sickDays, sickDaysTotal, total;

    cout << "Please enter in the amount of Employees that were sick last year: " << endl;
    cin >> numEmployees;

    for (int E = 1; E <= numEmployees; E++) {
        for (int Y = 1; Y <= 3; Y++) {
            cout << "How many days was Employee " << E << " sick for during year " << Y << "?";
            cin >> sickDays;
            sickDaysTotal += sickDays;
        }
    }
    cout << "\nThe " << numEmployees << " employees were sick for a total of " << sickDaysTotal << " days the last 3 years." << endl;

}
