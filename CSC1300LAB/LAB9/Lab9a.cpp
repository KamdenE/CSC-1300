/*
	Title:  	Lab9a.cpp
	Author:		Kamden Edens
	Date:		4/1/2022
	Purpose:	A program that uses vectors to create
                a store that the user can run until
                they want it to stop.
*/
#include <iostream>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{  
    vector<string> stringV(0);
    vector<double> doubleV(0);
    string check;
    bool run = true;
    double price = 0;
    cout << "\n\nWelcome to the Market!" << endl;

    do{
        cout << "\nPlease enter in your item: ";
		getline(cin, check);
        if (check == "Quit") 
        {
            run = false;
            break;
        }
        if (check == "quit") 
        {
            run = false;
            break;
        }
        cout << "\nPlease enter in your item's cost: ";
        cin >> price;
        cin.ignore();

        stringV.push_back(check);
        doubleV.push_back(price);
        
    } while(run == true);


       
    double total = 0;

    for(int x = 0; x < stringV.size(); x++) 
    {
        total += doubleV.at(x);
    }

    cout << "\n\nReceipt" << endl;
    for(int x = 0; x < stringV.size(); x++)
    {
        cout << stringV.at(x) << " " << doubleV.at(x) << endl;
    }


    cout << "\nTotal for " << stringV.size() << " items: " << total << endl;
    cout << "\nThank you for shopping at the Market! Please come again!" << endl;


    
    return 0;
}