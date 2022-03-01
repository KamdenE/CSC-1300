/*
	Title:  	Lab4a.cpp
	Author:		Kamden Edens
	Date:		2/18/2022
	Purpose:	Asks the user for their consumption in water and soft drinks
                then tells them whether they need to drink more or less of
                each.
*/

#include <iostream>
using namespace std;

int main()
{
    //Variables
    int water, softDrink;

    //Input
    cout << "What is your daily water consumption in cups?: " << endl;
    cin >> water;
    cout << "\nWhat is your daily soft drink consumption in cups?: " << endl;
    cin >> softDrink;

    //Calc + Output
    if ((water <= 8) && (softDrink >= 2)) {
        cout << "\nYou need to drink more water and less soft drink." << endl;
    }

    else if ((water > 8) && (softDrink >= 2)) {
        cout << "\nYou need to limit the amount of soft drinks you consume. " << endl;
        cout << "It isn't the best way to manage hydration." << endl;
    }

    else if ((water < 8) && (softDrink < 2)) {
        cout << "\nYou need to be more hydrated. Drink more water." << endl;
    }

    else if ((water > 8) && (softDrink < 2)) {
        cout << "\nGood job. You managed it!" << endl;
    }

    else {
        cout << "Invalid Input." << endl;
    }
    
    return 0;
}