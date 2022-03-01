/*
	Title:  	Lab4c.cpp
	Author:		Kamden Edens
	Date:		2/18/2022
	Purpose:	A while loop that asks the user for how many 
                calories they burned and then loops it until
                they enter in 'y'. If they burn under 200
                calories then it will display that they 
                need to work out more.
*/

#include <iostream>
using namespace std;

int main()
{
    //define
    char answer = 'n';
    int r = 0;
    //while loop starts
    while (answer != 'y' || r <= 200) {
        cout << "How many calories did you burn today? " << endl;
        cin >> r;

        cout << "\nEnter the letter 'y' if you want to quit: (y/n)" << endl;
        cin >> answer;

        cout << "\nThe letter you entered was: " << answer << endl;
        
        //loops here if user inputs less then 200 calories
        if (r <= 200) {
            cout << "You need to work out more!" << endl;
        }

    }

    return 0;
}
