/*
	Title:  	Lab10.cpp
	Author:		Kamden Edens
	Date:		4/4/2022
	Purpose:	A program that uses pointers to calculate
                area of a square.
*/

#include <iostream>
#include <cstring>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;

// variables
int length, width, area;
int *lengthptr, *widthptr;

int main() {
    //pointers
    lengthptr = &length;
    widthptr = &width;
    //gathers input to calculate
    cout << "Input the length of the square: ";
    cin >> *lengthptr;
    cout << "\n\nInput the width of the square: ";
    cin >> *widthptr;
    area = *lengthptr * *widthptr;
    
    //compares the results and prints accordingly
    cout << "\n\n\nThe area is: " << area;
    
    if(*lengthptr > *widthptr) {
        cout << "\nThe length is greater than the width." << endl;
    }

    else if(*lengthptr < *widthptr) {
        cout << "\nThe width is greater than the width." << endl;
    }

    else {
        cout << "\nThe length and width are the same." << endl;
    }

    return 0;
}