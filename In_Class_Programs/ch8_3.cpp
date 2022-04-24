/*
	Title:  	ch8_3.cpp
	Author:		Kamden Edens
	Date:		4/22/2022
	Purpose:	A program that uses data structures.
*/


#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>

using namespace std;


void addPhone();
void printArray(Phone *);

struct Phone
{
    string phoneType, phoneColor;
    int memCap;
}

const double SIZE = 5;

int main()
{
    Phone * phoneArray;
    phoneArray = new Phone[SIZE];
    addPhone();
    printArray();
    return 0;
}

void addPhone()
{

};
void printArray(Phone *s)
{

};