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
#include <fstream>

using namespace std;


int main() {

    int answerChoice, loopAnswer;
    int maxHeroes = 0, arrNumHeroes = 0;
    string heroName;
    char answer5 = 'n';
    string line(50, '-');
    bool runProg;


    cout << "\n\nHow many people live in your condo complex? ";
    cin >> maxHeroes;
    while(maxHeroes < 0){
        cout << "Unexpected output please try again: ";
        cin.ignore();
        cin >> maxHeroes;
    }

    heroes* heroArr;
    heroArr = new heroes[maxHeroes];
    
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

        while(!((answerChoice >= 1) && (answerChoice <= 5)) ) {
            cout << "Please try to enter your number in again: ";
            cin.ignore();
            cin >> answerChoice;
        }

        switch(answerChoice)
        {
            case 1:
            arrNumHeroes = enterHeroes(maxHeroes, arrNumHeroes, heroArr);
            break;
            case 2:
            deleteHeroes(arrNumHeroes, heroArr);
            moveArrayElements(heroName, arrNumHeroes, heroArr);
            break;
            case 3:
            printHeroes(arrNumHeroes, heroArr);
            break;
            case 4:
            printRentDetails(arrNumHeroes, heroArr);
            break;
            case 5:
                cout << "\n\nWould you like to save your superheroes list to a file? (y or n) ";
                cin >> answer5;
                while(cin.fail() || !( (tolower(answer5) == 'y') || (tolower(answer5) == 'n') )) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "Would you like to save your superheros list to a file? (y/n) ";
                    cin >> answer5;
                }

                if(answer5 == 'Y' || answer5 == 'y'){
                    saveToFile(arrNumHeroes, heroArr);
                    loopAnswer = 5;
                }
                if(answer5 == 'N' || answer5 == 'n'){
                    loopAnswer = 5;
                }
            default:
            break;
            
        }
    }
    delete [] heroArr;


    

    return 0;
}