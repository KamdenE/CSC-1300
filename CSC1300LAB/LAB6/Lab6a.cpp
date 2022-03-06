/*
	Title:  	Lab6a.cpp
	Author:		Kamden Edens
	Date:		3/4/2022
	Purpose:	A program that uses a do while
				loop to play a number guessing
				game.
*/

#include <iostream>
#include <ctime>
using namespace std;



int main() {

	// Character for the do while loop
	char userAnswer;

	do{
		// initial variables
		int randNum, userInput, userTimes = 0;
		srand(time(0));
		randNum = rand() % 5 + 1;
		// Creates the random number


		// Loop for the guessing game inputs
		while (userInput != randNum) {
			cout << "\nEnter in a number from 1 to 5: " << endl;
			cin >> userInput;

			while (cin.fail() || userInput < 1 && userInput > 5) {
				cin.clear();
				cin.ignore(255, '\n');
				cout << "\nInvalid input. Please try again. " << endl;
				cin >> userInput;
			}
			if (userInput > randNum) {
				cout << "\nTo High!" << endl;
			}
			else if (userInput < randNum) {
				cout << "\nTo Low!" << endl;
			}
			
			userTimes++;
		}

		// prints your result
		cout << "You guessed the right number in " << userTimes << " times!" << endl;
		
		// ask the user if they want to play again
		cout << "Would you like to play again? y or n " << endl;
		cin >> userAnswer; 
		while (cin.fail() || userAnswer != 'y' && userAnswer != 'Y' && userAnswer != 'n' && userAnswer != 'N') {
			cin.clear();
			cin.ignore(255, '\n');
			cout << "\nInvalid input. Please try again with 'y' or 'n'." << endl;
			cin >> userAnswer;
		}

	} while (userAnswer == 'y' || userAnswer == 'Y');


	return 0;
}