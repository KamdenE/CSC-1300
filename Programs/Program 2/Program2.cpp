/*
	Title:  	Program 2
	Author:		Kamden Edens
	Date:		2/26/2022	
	Purpose:	This program is written for the game M.A.S.H 
                that ask the user some questions and then 
                randomly generates their outcome for each
                question.  
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

bool displayMenuGetChoice();
int randFunction(int, int);


int main() {
   
    string personLike1, personLike2, personHate;
    int personRand = 0;
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, randNum = 0;
    string cityLike1, cityLike2, cityHate;
    int cityRand = 0;
    string goodJob1, goodJob2, badJob;
    int jobRand = 0;
    string goodCompany1, goodCompany2, badCompany;
    int companyRand = 0;
    string carLike1, carLike2, carHate;
    int carRand = 0;

    
    
    // Loop for if the user wants to play the game
    if(displayMenuGetChoice()){
        do {
        
            // Question 1
            cout << "\nYou chose to play MASH!" << endl;
            
            cout << "\nEnter in one person you like: " << endl;
            cin.ignore();
            getline(cin, personLike1);
            cout << "Enter in another person you like: " << endl;
            getline(cin, personLike2);
            cout << "Enter in a person you hate: " << endl;
            getline(cin, personHate);

            
            // Question 2
            cout << "\nEnter in three numbers between 1 and 100, separated by a space: " << endl;
            cin >> num1 >> num2 >> num3;
            while ((num1 < 0) || (num1 > 100)) {
                cout << "Invalid user input, " << num1 << ". Please enter in a number in the given range: (1-100) " << endl;
                cin >> num1;
            }
            while ((num2 < 0) || (num2 > 100)) {
                cout << "Invalid user input, " << num2 << ". Please enter in a number in the given range: (1-100) " << endl;
                cin >> num2;
            }
            while ((num3 < 0) || (num3 > 100)) {
                cout << "Invalid user input, " << num3 << ". Please enter in a number in the given range: (1-100) " << endl;
                cin >> num3;
            }
            
            // Question 3
            cout << "\nEnter in one city, state you like: " << endl;
            cin.ignore();
            getline(cin, cityLike1);
            cout << "Enter in another city, state you like: " << endl;
            getline(cin, cityLike2);
            cout << "Enter in one city, state you hate: " << endl;
            getline(cin, cityHate);

            
            // Question 4
            cout << "\nEnter in an awesome job title: " << endl;
            getline(cin, goodJob1);
            cout << "Enter in another awesome job title: " << endl;
            getline(cin, goodJob2);
            cout << "Enter in the worst job title ever: " << endl;
            getline(cin, badJob);

            
            // Question 5
            cout << "\nEnter in a company or restaurant you like: " << endl;
            getline(cin, goodCompany1);
            cout << "Enter another awesome company or restaurant you like: " << endl;
            getline(cin, goodCompany2);
            cout << "Enter a company or restaurant you hate: " << endl;
            getline(cin, badCompany);

            
            // Question 6
            cout << "\nEnter in three numbers between 10,000 and 500,000, separated by a space. " << endl;
            cin >> num4 >> num5 >> num6;
            while ((num4 < 10000) || (num4 > 500000)) {
                cout << "Invalid user input, " << num4 << ". Please enter in a number in the given range: (10000-500000) " << endl;
                cin >> num4;
            }
            while ((num5 < 10000) || (num5 > 500000)) {
                cout << "Invalid user input, " << num5 << ". Please enter in a number in the given range: (10000-500000) " << endl;
                cin >> num5;
            }
            while ((num6 < 10000) || (num6 > 500000)) {
                cout << "Invalid user input, " << num6 << ". Please enter in a number in the given range: (10000-500000) " << endl;
                cin >> num6;
            }
            
            
            // Question 7
            cout << "\nEnter in a car that you like: " << endl;
            cin.ignore();
            getline(cin, carLike1);
            cout << "Enter in another car that you like: " << endl;
            getline(cin, carLike2);
            cout << "Enter in a car that you hate: " << endl;
            getline(cin, carHate);
            
            
            // randomly selects a number and then uses it to output the user's results
            cout << "\n\n\n********** MASH RESULTS **********" << endl;
            
            switch (randFunction(1,4)) {
                case 1:
                    cout << "You will live in a mansion." << endl;
                break;
                case 2:
                    cout << "You will live in an apartment." << endl;
                break;
                case 3:
                    cout << "You will live in a shack." << endl;
                break;
                case 4:
                    cout << "You will live in a house." << endl;
                break;
                default:
                cout << "rand needs work" << endl;
            }
            
            switch (randFunction(1,3)) {
                case 1:
                    cout << "You will be happily married to " << personLike1 << "." << endl;
                break;
                case 2:
                    cout << "You will be happily married to " << personLike2 << "." << endl;
                break;
                case 3:
                    cout << "You will be sadly married to " << personHate << "." << endl;
                break;
                default:
                    cout << "rand needs work" << endl;
            }
            switch (randFunction(1,3)) {
                case 1:
                    cout << "You and your spouse will have " << num1 << " children." << endl;
                break;
                case 2:
                    cout << "You and your spouse will have " << num2 << " children." << endl;
                break;
                case 3:
                    cout << "You and your spouse will have " << num3 << " children." << endl;
                break;
                default:
                    cout << "rand needs work" << endl;
            }
            
            switch (randFunction(1,3)) {
                case 1:
                    cout << "You will live in " << cityLike1 << "." << endl;
                break;
                case 2:
                    cout << "You will live in " << cityLike2 << "." << endl;
                break;
                case 3:
                    cout << "You will live in " << cityHate << "." << endl;
                break;
                default:
                    cout << "rand needs work" << endl;
            }
            // these are the rands for the question with three outputs
           
            switch (randFunction(1,3)) {
                case 1:
                    cout << "You will work at " << goodCompany1;
                break;
                case 2:
                    cout << "You will work at " << goodCompany2;
                break;
                case 3:
                    cout << "You will work at " << badCompany;
                break;
                default:
                    cout << "rand needs work" << endl;
            }
            switch (randFunction(1,3)) {
                case 1:
                    cout << " as a " << goodJob1;
                break;
                case 2:
                    cout << " as a " << goodJob2;
                break;
                case 3:
                    cout << " as a " << badJob;
                break;
            }
            switch (randFunction(1,3)) {
                case 1:
                    cout << " making $" << num4 << " a year." << endl;
                break;
                case 2:
                    cout << " making $" << num5 << " a year." << endl;
                break;
                case 3:
                    cout << " making $" << num6 << " a year." << endl;
                break;

            }
            
            switch (randFunction(1,3)) {
                case 1:
                    cout << "You will drive a " << carLike1 << "." << endl;
                break;
                case 2:
                    cout << "You will drive a " << carLike2 << "." << endl;
                break;
                case 3:
                    cout << "You will drive a " << carHate << "." << endl;
                break;
                default:
                    cout << "rand needs work" << endl;
            }
        } while(displayMenuGetChoice());
            cout << "\nGoodbye!";
            return 0;
    }
    else {
        cout << "\nGoodbye!";
        return 0;
    }

    return 0;
    }
    bool displayMenuGetChoice() {
        int firstAnswer;
        cout << "\nPick from the following menu:" << endl;
        cout << "\n1. Let's play MASH!" << endl;
        cout << "2. End program." << endl;
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
    int randFunction(int randLower, int randUpper) {
        return ((rand() % (randUpper - randLower + 1)) + randLower);
    }