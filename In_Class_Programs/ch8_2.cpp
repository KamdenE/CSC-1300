/*
	Title:  	ch8_2.cpp
	Author:		Kamden Edens
	Date:		4/20/2022
	Purpose:	A program that uses data structures.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>

using namespace std;


struct carInfo
{
	string make;
	string model;
	int year;
};

struct Car
{
	carInfo temp;
	string color;
	double price;
};

int main()
{
	string cars[3];

	for (int index = 0; index < 3; index++)
	{
		cout << "\nEnter data for car " << (index + 1);
		cout << ": ";
		cout << "\nWhat car is it? ";
		getline(cin, cars[index].temp.make);
		cin.ignore();
		cout << "\nWhat model? ";
		getline(cin, cars[index].temp.model);
		cin.ignore();
		cout << "\nYear of the car: ";
		cin >> cars[index].temp.year;
		cout << "\nColor of the car: ";
		getline(cin, cars[index].color);
		cin.ignore();
		cout << "\nHow much does it cost? ";
		cin >> cars[index].price;
		cout << endl;
	}
	for (int index = 0; index < 3; index++)
	{
		cout << "\n\nYour car: " << endl;
		cout << "Make: " << cars[index].temp.make;
		cout << "\nModel: " << cars[index].temp.model;
		cout << "\nYear: " << cars[index].temp.year;
		cout << "\nColor: " << cars[index].color;
		cout << "\nCost: " << cars[index].cost;
	}


    return 0;
}