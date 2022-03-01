/*
	Title:   oddEven.cpp
	Author:  Kamden Edens
	Date:    2-2-2022
	Purpose: This program asks the user for a number 
                then prints whether it is odd or even.
*/
#include <iostream>
using namespace std;

int main()
{
    //variable ----- The rand part just means random from the user
    int randNum = 0;
    //user input
    cout << "Please enter in a number: "; cin >> randNum;
    //Calc and output
    if (randNum == 0) 
    {
    cout << randNum << " is neither odd or even.";
    }
    else if (randNum % 2 == 0)
    {
        cout << randNum << " is even.";
    }
    else
    {   
        cout << randNum << " is odd.";
    }
    

    return 0;
}