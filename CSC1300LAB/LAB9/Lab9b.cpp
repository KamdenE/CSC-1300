/*
	Title:  	Lab9b.cpp
	Author:		Kamden Edens
	Date:		4/1/2022
	Purpose:	A program that modifies a vector 
                and prints a few different ways.
*/
#include <iostream>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() 
{

    int totalVect;
    int min, temp;
    vector<int> numBers(10);

    //vector list
    numBers.at(0) = 7;
    numBers.at(1) = 4;
    numBers.at(2) = 36;
    numBers.at(3) = 1;
    numBers.at(4) = 3;
    numBers.at(5) = 6;
    numBers.at(6) = 2;
    numBers.at(7) = 99;
    numBers.at(8) = 77;
    numBers.at(9) = 10;

    //multiplies the vector by 2
    cout << "The vector elements multiplied by 2 are: ";
    for(int x = 0; x < 10; x++){
        numBers.at(x) = numBers.at(x) * 2;
        cout << numBers.at(x) << " ";
    }

    //collects the total
    cout << "\nThe total of all vector elements is: ";
    for(int x = 0; x < 10; x++)
    {
        totalVect += numBers.at(x);
    }
    cout << totalVect;

    //cout << "\nThe sorted vector elements are: ";
    for (int i = 0; i < 9; i++)
    {
        //find the next minimum value in the vector
        min = i;
        for (int j = i + 1; j < 10; j++ ) 
        {
            if (numBers.at(j) < numBers.at(min)) 
            {
                min = j;
            }
        }
        //swap the current vector item with the minimum element
        temp = numBers.at(i);
        numBers.at(i) = numBers.at(min);
        numBers.at(min) = temp;

    }
    
    //prints the sorted vector list
	cout << "\nThe sorted vector elements are: ";
	for (int i=0; i<10; i++)
	{
		cout << numBers.at(i) << " ";
	}
	cout << endl;	
    
    return 0;
}