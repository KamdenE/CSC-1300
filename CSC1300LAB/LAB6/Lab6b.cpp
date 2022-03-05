/*
	Title:  	Lab6b.cpp
	Author:		Kamden Edens
	Date:		3/4/2022
	Purpose:	A program that uses for loops
                to build a pyramid according to
                what number the user inputs
*/
#include <iostream>
using namespace std;

int main()
{
   int rowAmt, i, j, numSpaces;

   cout << "Please enter in number of rows: ";
   cin >> rowAmt;
   while (cin.fail() || rowAmt <= 1) {
            cin.clear();
            cin.ignore(255, '\n');
            cout << "Invalid input. Please try again. " << endl;
            cin >> rowAmt;
        }
    //initial for loop
   for(i = 1; i <= rowAmt; i++)
   {
      //this loop adds the spaces between the numbers
      for(numSpaces = i; numSpaces < rowAmt; numSpaces++)
      {
         cout << " ";
      }
      //for loop to display dollar sign equal to row number
      for(j = 1; j <= (2 * i - 1); j++)
      {
         cout << "$";
      }

      cout << "\n";
   }

   return 0;
}
