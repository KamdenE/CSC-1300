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


const int SIZE = 10;
int elephantAmt[SIZE]; 
char zooName[100];

int main()
{
    float foodTotal, foodAverage;
    int elePig;
    float numPounds[SIZE];
    string elephantName[SIZE];

    cout << "Greetings! What is the name of your zoo? "; 
    cin.getline(zooName, 100);

    GETELEPHANTDATA();

    GETSTATS();




    return 0;
}