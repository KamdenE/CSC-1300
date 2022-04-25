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

string line(50, '-');

int enterHeroes(int maxHeroes, int arrNumHeroes, heroes* heroArr)
{

    int userChoice, count = 1;
    char userCharChoice;
    ifstream inFileStream;
    string tempString, heroFileName;


    //Check to verify the heroes array isn't maxed out
    cout << arrNumHeroes;
    if (maxHeroes <= arrNumHeroes) {
        cout << "Sorry, your complex can only hold " << maxHeroes << " heroes.\n";
        cout << "You cannot add any more!\n";
        return arrNumHeroes;
    }


    cout << "What do you want to do?\n";
    cout << "\t\t1. Load the heroes from a file.\n";
    cout << "\t\t2. Enter a hero manually.\n";
    cout << "\t\tChoose 1 or 2.\n";
    cout << "CHOICE: ";
    cin >> userChoice;
    while(cin.fail() || !((userChoice == 1) || (userChoice == 2)) ) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input, please try again.\n";
        cout << "CHOICE: ";
    }

    switch (userChoice) {
        case 1:

            cout << "What is the name of the file with your list of superheroes? (ex: filename.txt)\n";
            cout << "FILE NAME: ";
            cin >> heroFileName;
            
            //Try to open file
            inFileStream.open(heroFileName);

            //Verify that the user input was valid and the file opens correctly.
            //If not, then ask user for dir name and try again
            while(cin.fail() || !(inFileStream.is_open())) {
                cin.clear();
                cin.ignore(255, '\n');
                cout << "Unexpected input or file not found, please try again.\n";
                cout << "What is the name of the file with your list of superheroes? (ex: filename.txt)";
                cout << "FILE NAME: ";
                cin >> heroFileName;
                inFileStream.open(heroFileName);
    }

            while(getline(inFileStream, tempString, '#')) {
                switch(count) {
                    case 1:
                        heroArr[arrNumHeroes].heroName = tempString;
                        //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        count += 1;
                        break;

                    case 2:
                        heroArr[arrNumHeroes].heroDesc = tempString;
                        //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        count += 1;
                        break;

                    case 3:
                        if (tempString == "0") {
                            heroArr[arrNumHeroes].heroDanger = false;
                            //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        }

                        else if (tempString == "1") {
                            heroArr[arrNumHeroes].heroDanger = true;
                            //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        }

                        count += 1;
                        break;

                    case 4:
                        heroArr[arrNumHeroes].rent.heroRent = stof(tempString);
                        //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        count += 1;
                        break;

                    case 5:
                        heroArr[arrNumHeroes].rent.heroDmg = stof(tempString);
                        //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        count += 1;
                        break;

                    case 6:
                        heroArr[arrNumHeroes].rent.heroYears = stof(tempString);
                        //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        count = 1;
                        arrNumHeroes += 1;
                        break;

                    default:
                        cout << "Error in importing file data switch statement!\n";
                        cout << "Function return default\n";
                        return arrNumHeroes;
                        break;
                }
            }

            cout << arrNumHeroes << " hero(s) from " << heroFileName << " have been added to your condo complex.\n";

            inFileStream.close();
            //cout << "File closed\n";
            break;
        
        case 2:
            for(int i = 0; i < maxHeroes; i++) {
                cout << "SUPERHERO NAME: ";
                cin.ignore();
                getline(cin, heroArr[i].heroName);

                cout << "DESCRIPTION: ";
                getline(cin, heroArr[i].heroDesc);

                cout << "IS IT A DANGEROUS HERO? (y/n): ";
                cin >> userCharChoice;
                while(cin.fail() || !( (tolower(userCharChoice) == 'y') || (tolower(userCharChoice) == 'n') )) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "Would you like to save your superheros list to a file? (y/n) ";
                    cin >> userCharChoice;
                }

                switch (userCharChoice) {
                    case 'y':
                        heroArr[i].heroDanger = true;
                        break;

                    case 'n':
                        heroArr[i].heroDanger = false;
                        break;
                    
                    default:
                        cout << "Error in switch statement in manual hero entry.\n";
                        cout << "heroArray[" << i << "] is defaulting to false\n";
                        heroArr[i].heroDanger = false;
                        break;
                }

                cout << "How much does " << heroArr[i].heroName << " pay for rent per month?\n";
                cout << "RENT PRICE: $";
                cin  >> heroArr[i].rent.heroRent;
                while(cin.fail()) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "RENT PRICE: $";
                    cin >> heroArr[i].rent.heroRent;
                }

                cout << "What is the typical cost of damage " << heroArr[i].heroName << " has each month?\n";
                cout << "DAMAGE COST: $";
                cin >> heroArr[i].rent.heroDmg;
                while(cin.fail()) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "DAMAGE PRICE: $";
                    cin >> heroArr[i].rent.heroDmg;
                }

                cout << "How many years has " << heroArr[i].heroName << " lived in your condo?\n";
                cout << "YEARS: ";
                cin >> heroArr[i].rent.heroYears;
                while(cin.fail()) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "YEARS: ";
                    cin >> heroArr[i].rent.heroYears;
                }

                cout << "The " << heroArr[i].heroName << " has been added.\n";
                arrNumHeroes += 1;

                cout << "Want to add more heroes? (y or n) ";
                cin >> userCharChoice;
                while(cin.fail()) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "YEARS: ";
                    cin >> userCharChoice;
                }

                if (userCharChoice == 'n') {
                    i = maxHeroes + 1;
                }
            }
            break;
        
        default:
            cout << "Error making user choice in enterHeroes function.\n";
            cout << "Function returning defaults.\n";
            return arrNumHeroes;
            break;
    }

    return arrNumHeroes;
}


int deleteHeroes(int arrNumHeroes, heroes* heroArr)
{
	string removeHero;

    cout << "The following is a list of all the heros living in your condo complex: ";
    for (int i = 0; i < arrNumHeroes; i++) {
        cout << heroArr[i].heroName << '\n';
    }

    cout << "Which hero are you kicking out of your complex?\n";
    cout << "SUPERHERO NAME: ";
    cin.ignore();
    getline(cin, removeHero);
    while(cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input, please try again.\n\n";
        cout << "Which hero are you kicking out of your complex?\n";
        cout << "SUPERHERO NAME: ";
        getline(cin, removeHero);
    }

    if(moveArrayElements(removeHero, arrNumHeroes, heroArr)) {
        cout << "You have removed " << removeHero << ".\n";
        arrNumHeroes -= 1;
    }
    
    else 
        cout << "Sorry a hero by the name " << removeHero << " could not be found.\n";

    return arrNumHeroes;

}

bool moveArrayElements(string heroName, int arrNumHeroes, heroes *heroArr) {
    for (int i = 0; i < arrNumHeroes; i++) {
        if (heroName == heroArr[i].heroName) {
            for (int j = i; j < arrNumHeroes; j++) {
                heroArr[j].heroName = heroArr[j+1].heroName;
                heroArr[j].heroDesc = heroArr[j+1].heroDesc;
                heroArr[j].heroDanger = heroArr[j+1].heroDanger;
                heroArr[j].rent.heroYears = heroArr[j+1].rent.heroYears;
                heroArr[j].rent.heroDmg = heroArr[j+1].rent.heroDmg;
                heroArr[j].rent.heroYears = heroArr[j+1].rent.heroYears;
            }
            return true;
        }
    }
    return false;
}

void printHeroes(int arrNumHeros, heroes* heroArr)
{
	for(int i = 0; i < arrNumHeros; i++){
		cout << line << "SUPERHERO " << i+1 << endl;
		cout << "\n\nNAME:     " << heroArr[i].heroName << endl;
		cout << "DESC:     " << heroArr[i].heroDesc << endl;
		cout << "DANGER:   ";
        if(heroArr[i].heroDanger){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
		cout << "RENT:     " << heroArr[i].rent.heroRent << endl;
		cout << "DAMAGE:   " << heroArr[i].rent.heroDmg << endl;
		cout << "YEARS:    " << heroArr[i].rent.heroYears << endl;
	}
}

void printRentDetails(int arrNumHeros, heroes* heroArr)
{
	int totalRent = 0, totalDmg = 0;
	cout << "\n\nRENT DETAILS OF EACH HERO: " << endl;
	cout << "\nSUPERHERO          MONTHLY RENT     DAMAGE COST" << endl;

	for(int i = 0; i < arrNumHeros; i++){
		cout << heroArr[i].heroName << "    $" << heroArr[i].rent.heroRent << "    $" << heroArr[i].rent.heroDmg << endl;
		totalRent += heroArr[i].rent.heroRent;
		totalDmg += heroArr[i].rent.heroDmg;
	}
	cout << "-----------------------------------------------------------------------" << endl;

	cout << "\nTOTALS:           $     " << totalRent << "    $        " << totalDmg;
}

void saveToFile(int arrNumHero, heroes *heroArr) {
    string fileName;
    ofstream printFile;
    cin.ignore();
    cout << "what is the name if the file?: "; 
    getline(cin, fileName);
    printFile.open(fileName);
    if (printFile.is_open()){
        for (int i=0; i < arrNumHero; i++) {
            printFile << heroArr[i].heroName << "#";
            printFile << heroArr[i].heroDesc << "#";
            printFile << heroArr[i].heroDanger << "#";
            printFile << heroArr[i].rent.heroRent << "#";
            printFile << heroArr[i].rent.heroDmg << "#";
            printFile << heroArr[i].rent.heroYears << "#";
        }
        cout << "\nYour superheroes were successfully saved to " << fileName << " text file." << endl;
    }
    else {
        cout << "An error has occured while trying to print your file." << endl;
    }
    printFile.close();
}