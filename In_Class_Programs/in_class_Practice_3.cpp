/*
	Title:  	in_class_Practice_3.cpp
	Author:		Kamden Edens
	Date:		4/6/2022
	Purpose:	A program that uses arrays
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>


using namespace std;

string foods[10];
string foodname;
string *foodpointer = foods;
int foodCounter = 1;

int main() {


    cout << "Enter in your 10 favorite foods!" << endl;

    for(int x = 0; x < 10; x++) {
        cout << "\nFood " << foodCounter << ": ";
        getline(cin,foodname);
        foodpointer[x] = foodname;
        foodCounter++;

    }

    for(int y = 0; y < 10; y++) {
        cout << "\nYour #"<< (y+1) << " favorite food is: " << foodpointer[y] << endl;
    }

    return 0;
}
