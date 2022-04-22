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
	carInfo carInfo;
	string color;
	double price;
};

int main()
{
	Car cars[3];

	for (int index = 0; index < 3; index++)
	{
		cin.ignore();
		cout << "\nEnter data for car " << (index + 1);
		cout << ": ";
		cout << "\nWhat car is it? ";
		getline(cin, cars[index].carInfo.make);
		cout << "\nWhat model? ";
		getline(cin, cars[index].carInfo.model);
		cout << "\nYear of the car: ";
		cin >> cars[index].carInfo.year;
		cin.ignore();
		cout << "\nColor of the car: ";
		getline(cin, cars[index].color);
		cout << "\nHow much does it cost? ";
		cin >> cars[index].price;
		cout << endl;
	}
	for (int index = 0; index < 3; index++)
	{
		cout << "\n\nYour car: " << endl;
		cout << "Make: " << cars[index].carInfo.make;
		cout << "\nModel: " << cars[index].carInfo.model;
		cout << "\nYear: " << cars[index].carInfo.year;
		cout << "\nColor: " << cars[index].color;
		cout << "\nCost: " << cars[index].price;
	}


    return 0;
}