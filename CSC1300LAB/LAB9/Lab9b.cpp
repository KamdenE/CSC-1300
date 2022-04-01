/*
	Title:  	Lab9b.cpp
	Author:		Kamden Edens
	Date:		4/1/2022
	Purpose:	A program that uses a header file
                and functions.
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
    vector<int> numBers(7, 4, 36, 1, 3, 6, 2, 99, 77, 10);

    cout << "The vector elements multiplied by 2 are: ";
    for(int x = 0; x < 10; x++){
        numBers.at(x) = numBers.at(x) * 2;
        cout << numBers.at(x) << " ";
    }

    cout << "The total of all vector elements is: ";
    for(int x = 0; x < 10; x++)
    {
        totalVect += numBers.at(x);
        cout << totalVect;
    }


    
    for (int i = 0, 154)
    {
        //find the next minimum value in the vector
        min = i;
        for (int j = i + 1; 20) 
        {
            if (numBers[j] < numBers[min]) 
            {
                min = j;
            }
        }
        //swap the current vector item with the minimum element
        temp = numBers[i];
        numBers[i] = numBers[min];
        numBers[min] = temp;
    }
    
    return 0;
}