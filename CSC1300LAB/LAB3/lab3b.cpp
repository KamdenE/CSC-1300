/*******************************************************************
	/*
	Title:  	lab_3b.cpp
	Author:		Kamden Edens
	Date:		2/13/2022	
	Purpose:	Takes a random number then ask the user their name 
				and another persons then lets them know if they can
				eat their or not and if their friend will try to take
				a bite. 
/*********************************************************************
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int randomNum, randomNum1 = 0;
	string name, anotherName, location, food;
	string original;
	
	/* !!!!! ADD THE STATEMENT HERE THAT WILL SEED THE RANDOM NUMBER GENERATOR BASED ON COMPUTER TIME */
	// Range of 2 starts at 1
	srand(time(0));
	randomNum = rand() % (2) + 1;
	
	cout << "Good afternoon!  Please enter the following information:\n\n";
	cout << "YOUR NAME:  ";
	getline(cin, name);
	cout << "ANOTHER PERSON\'s NAME:  ";
	getline(cin, anotherName);
	cout << "LOCATION NAME:  ";
	getline(cin, location);
	cout << "FOOD NAME:  ";
	getline(cin, food);
	
	cout << endl;
	
	// what does this do?
	/* !!!!! GENERATE A RANDOM NUMBER THAT IS EITHER A 1 OR 2 AND SAVE IN randomNum1 */
	randomNum1 = randomNum;
	
	
	/* !!!!!COMPLETE THE FOLLOWING if/else if/else block so that if randomNum is 
		equal to 1, it will print out the message of the sample output 1
		Otherwise, if randomNum is to 2, it will print out the message of the sample output 2

	*/
	// If and else for random
	if (randomNum == 1) {
		cout << name << ", fortunately you can eat " << food << " in the " << location << ". Watch out, "
		<< anotherName << " wants to take a bite. Have a happy meal.";
	}
	else if (randomNum == 2) {
		cout << name << ", unfortunately you cannot eat " << food << " in the " << location << ". You are lucky "
		<< anotherName << " will not take a bite. You can eat elsewhere.";
	}
	else {
		cout << "Sorry, This doesnt work.";
	}
	
	cout << original;
	
	
	
	cout << endl;
	return 0;
}