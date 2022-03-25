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


void GETELEPHANTDATA(float foodAmt[], string elephantName[]) {
    cout << "Enter in the name and how many pounds of food each elephant consumed last month: " << endl;
    for (int x = 0; x < 10; x++)
	{
		cout << "\nElephant #" << (x + 1) << ": ";
        cout << "     Name: "; 
        getline(cin, elephantName[x]);
        cin.ignore();
        cout << "\n     Food Amount: "; 
        cin >> foodAmt[x];
	}
    
}

void GETSTATS(float foodAmt[], float& foodTotal, float& foodAverage, int& elePig) {
    for (int x = 0; x < 10; x++) {
        foodTotal += foodAmt[x];
    }
    foodAverage = foodTotal / 10;
    int biggest = 0;
    for(int x = 1; x < 10; x++) {
        if (biggest < foodAmt[x]) {
            biggest = foodAmt[x];
            elePig = x;
        }
    }
}
