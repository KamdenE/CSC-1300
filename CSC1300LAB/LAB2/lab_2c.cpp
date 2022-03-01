/*
	Title:  	lab_2c.cpp
	Author:		Kamden Edens
	Date:		2/1/2022	
	Purpose:	This program is written for taking the temperature in a city for three days and then averaging it
                together and displaying it to the user. 
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    //defining variables 
    string cityName;
    double temp1 = 0.0, temp2 = 0.0, temp3 = 0.0;
    double avgTemp = 0.0;
    //Inputs
    cout << "Enter in a city: "; getline(cin, cityName);
    cout << "What was Monday's temperature in " << cityName << "? "; cin >> temp1;
    cout << "What was Tuesday's temperature in " << cityName << "? "; cin >> temp2;
    cout << "What was Wednesday's temperature in " << cityName << "? "; cin >> temp3;
    //Calculation
    avgTemp = (temp1 + temp2 + temp3) / 3;
    //Output
    cout << "\nThe average temperature for those three days in " << cityName << " is: " << avgTemp;
    return 0;
}