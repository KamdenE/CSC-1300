/*
	Title:  	lab_2a.cpp
	Author:		Kamden Edens
	Date:		1/31/2022	
	Purpose:	This program is written for waiters & waitresses at
				dounts shop so that they can calculate total cost
				of dounts for their customers.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//variables
	double donutAmt = 0.0;
	double totalBill = 0.0;
	
	/* 	the line below will allow floating point amounts to display
		two numbers after the decimal point.  (it will make amounts pretty) */
	cout <<	setprecision(2) << fixed << showpoint; 
	cout << "\n\nPlease input the number of dounts purchased:  ";
	
	//	Fill in the	input statement to bring in	the	quantity of dounts.
	cin >> donutAmt;
	
	//	Fill in the assignment statement to determine the total bill.
	donutAmt = donutAmt * .99;
	totalBill = donutAmt * 1.085;
	
	//	Fill in	the	output statement to print total	bill as shown in sample output
	cout << "Here is the total cost of your bill " << totalBill << ".";
	
	return 0;
}