/*********************************************
	Title: 		functionExample_4.cpp
	Author:  	April R Crockett
	Date:  		February1 9, 2009
	Purpose:  	To demonstrate the flow of a 
				program with several user-
				defined functions
**********************************************/

#include <iostream>
using namespace std;

//FUNCTION PROTOTYPES*************************
void repeatingEnd();
void firstLine();
void secondLine();
void thirdLine();

int main()
{
	cout << "\nTitle:  Jack and Jill\n\n";
	/*
		NOTE:  You may call an unlimited number
		of user-defined functions from within
		the main function.
	*/
	firstLine(); //function call statement 
	thirdLine(); //function call statement
	
	cout << "Because Jill's real name is Randy.\n\n";
	
	for (int i=1; i <=3; i++)
		repeatingEnd(); //function call statement
	
	return 0;
}

//USER-DEFINED FUNCTIONS***********************
void repeatingEnd()
{
	cout << "The End!\n";
}

void firstLine()
{
	cout << "Jack and Jill went up the hill,\n";
	/*
		NOTE:  You may also call an unlimited
		number of user-defined functions from 
		within any other user-defined function.
	*/
	secondLine();
}
void secondLine()
{
	cout << "So Jack could lick  her candy,\n";
}




void thirdLine()
{
	cout << "But Jack got a shock and a mouth full of cock,\n";
}



