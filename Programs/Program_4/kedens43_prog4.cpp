/*
	Title:  	kedens_prog4.cpp
	Author:		Kamden Edens
	Date:		4/22/2022
	Purpose:	Program 4 
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include "kedens43_prog4.h"

using namespace std;


int main() {

    int arrNum, answerChoice, loopAnswer;
    char answer5;
    cout << "\n\nHow many people live in your condo complex? ";
    cin >> arrNum;

    
    while(loopAnswer != 5) {
        cout << "\n\nWhat would like to do?" << endl;
        cout << "     1.   Enter in some superheros" << endl;
        cout << "     2.   Delete a superhero" << endl;
        cout << "     3.   Print all superheros" << endl;
        cout << "     4.   Print rent details" << endl;
        cout << "     5.   End program" << endl;
        cout << "     Enter in 1, 2, 3, 4, or 5." << endl;
        cout << "Choice: ";
        cin >> answerChoice;

        while(answerChoice != 1 || answerChoice != 2, answerChoice != 3, answerChoice != 4, answerChoice != 5) {
            cout << "Please try to enter your number in again: ";
            cin.ignore();
            getline(cin, answerChoice);
        }

        switch(answerChoice)
        {
            case 1:
            enterHeros();
            case 2:
            deleteHero();
            case 3:
            moveArrayElements();
            case 4:
            printRentDetails();
            case 5:
                cout << "\n\nWould you like to save your superheroes list to a file? (y or n) ";
                cin >> answer5;
                while(answer5 != 'Y' || answer5 != 'y' || answer5 != 'N' || answer5 != 'n') {
                    cout << "Please enter in your letter again: ";
                    cin.ignore();
                    getline(cin, answer5);
                }

                if(answer5 == 'Y' || answer5 == 'y'){
                    saveToFile();
                }
            default:
        }
    }


    

    return 0;
}