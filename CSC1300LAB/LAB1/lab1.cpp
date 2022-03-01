/*  File Name: LAB1.cpp
    Author: Kamden Edens
    Date: January 24, 2020
    Purpose: To calculate mph from a user inputing a speed in km/h
*/
#include <iostream>
using namespace std;

int main()
{
    double speed = 0, mph = 0;         
    cout << "What is your speed in km/h? " << endl; // ask the user for an input for speed in km/h
    cin >> speed; // stores the varible
    mph = speed / 1.609344;
    cout << "Your speed in mph is: " << mph << "." << endl; // prints the new number in mph and tells the user

    return 0;
}