/*
        Title:  	lab_2b.cpp
	Author:		Kamden Edens
	Date:		1/31/2022	
	Purpose:	This program is written for creating a list then calculating the total amount
                        including tax then displaying it to the user.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
        //variables
        string item1, item2;
        int item1Amt, item2Amt;
        double priceA = 0.0, priceB = 0.0, totalCost = 0.0;
        char const sadTax = 1.0975;

        //cin.ignore() after cin statement
        //Inputs
        cout << "Please enter your first item: "; getline(cin, item1); cout << endl;
        cout << "How much " << item1 << " do you want? "; cin >> item1Amt; cout << endl;
        cout << "How much does " << item1 << " cost? "; cin >> priceA; cout << endl;
        cin.ignore();
        cout << "Please enter your second item: "; getline(cin, item2); cout << endl;
        cout << "How much " << item2 << " do you want? "; cin >> item2Amt; cout << endl;
        cout << "How much does " << item2 << " cost? "; cin >> priceB; cout << endl;
        //Calculation
        totalCost = ((priceA * item1Amt) + (priceB * item2Amt)) * 1.0975;
        //Output
        cout << fixed << showpoint << setprecision(2);
        cout << "\nYour total is: " << totalCost << "." << endl; 
        cout << "\nHave a great day!" << endl;


   return 0; 
}