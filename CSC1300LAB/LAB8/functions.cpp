/*
	Title:  	Lab8a.cpp
	Author:		Kamden Edens
	Date:		3/24/2022
	Purpose:	A program that uses a header file
                and functions.
*/

#include "elephant.h"
#include <iostream>
#include <string>
using namespace std;

// Function 1 that returns foodAmt and Elephant name to the arrays
void GETELEPHANTDATA(float foodAmt[], string elephantName[]) {
    cout << "Enter in the name and how many pounds of food each elephant consumed last month: " << endl;
    for (int x = 0; x < 10; x++)
	{
		cout << "\nElephant #" << (x + 1) << ": ";
        cout << "\n     Name: "; 
        getline(cin, elephantName[x]);
        cout << "     Food Amount: "; 
        cin >> foodAmt[x];
        cin.ignore();
	}
    
}
// Function 2 that returns several variables to the main function
void GETSTATS(float foodAmt[], float& foodTotal, float& foodAverage, int& elePig) {
    for (int x = 0; x < 10; x++) {
        foodTotal += foodAmt[x];
    }
    foodAverage = foodTotal / 10;
    int biggest = 0;
    for(int x = 0; x < 10; x++) {
        if (biggest < foodAmt[x]) {
            biggest = foodAmt[x];
            elePig = x;
        }
    }
}
