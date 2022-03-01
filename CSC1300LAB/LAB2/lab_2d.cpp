/*
	Title:  	lab_2d.cpp
	Author:		Kamden Edens
	Date:		2/1/2022	
	Purpose:	This program is written for taking the number of employees quarantined and calculating the total amount of time
                they were out of work in days and years.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{   //variables
    int numEmployees = 0;
    double totalDays = 0, totalYears = 0;
    //Input
    cout << "How many employees tested positive for covid-19?: "; cin >> numEmployees;
    //Calculation
    totalDays = numEmployees * 21;
    totalYears = totalDays / 365;
    //Output
    cout << "\nThe employees were quarantined for " << totalDays << " days, which is " << totalYears << " years.";

    return 0;
}