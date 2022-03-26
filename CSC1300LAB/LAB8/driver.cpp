/*
	Title:  	Lab8a.cpp
	Author:		Kamden Edens
	Date:		3/24/2022
	Purpose:	A program that uses a header file
                and functions.
*/

#include "elephant.h"
#include <iostream>
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;

// variables 
const int SIZE = 10;
int elephantAmt[SIZE]; 
char zooName[100];
string line(50, '-');

int main()
{
    //local variables to main
    float foodTotal, foodAverage;
    int elePig;
    float numPounds[SIZE];
    string elephantName[SIZE];
    // gets the zoo name
    cout << "Greetings! What is the name of your zoo? "; 
    cin.getline(zooName, 100);

    // executes the functions
    GETELEPHANTDATA(numPounds, elephantName);

    GETSTATS(numPounds, foodTotal, foodAverage, elePig);

    // output 

    cout << line << endl;
    cout << "The total amount of food consumed by all 10 elephants at " << zooName << " is " << foodTotal << " pounds in one month!" << endl;
    cout << "\nThe average amount of food consumed at " << zooName << " is " << foodAverage << "." << endl;
    cout << "\n\n\nThe elephant that ate the most (" << numPounds[elePig] << " pounds) is " << elephantName[elePig] << "!!" << endl;
    cout << line << endl;

    return 0;
}