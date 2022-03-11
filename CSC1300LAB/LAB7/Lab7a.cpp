/*
	Title:  	Lab7a.cpp
	Author:		Kamden Edens
	Date:		3/7/2022
	Purpose:	A program that caclulates sick days
                for the bank.
*/

#include <iostream>
using namespace std;

// Function
bool displayMenuGetChoice() {
        int firstAnswer;
        cout << "\nPlease choose from the following options:" << endl;
        cout << "\n1. Enter Employee Days" << endl;
        cout << "2. End program" << endl;
        cin >> firstAnswer;
        // checks the user's input
        while (cin.fail() || firstAnswer != 1 && firstAnswer != 2) {
            cin.clear();
            cin.ignore(255, '\n');
            cout << "Invalid input. Please try again. " << endl;
            cin >> firstAnswer;
        }
        switch (firstAnswer) {
            case 1:
                return true;
                break;
            case 2:
                return false;
                break;
            default:
                cout << "Error occurred." << endl;
                return false;
                break;
        }
}
// employeeSickDays

int employeeSickDays() {
    //variables
    int numEmployees, sickDays, total;

}


