/*
	Title:  structDMA_2.cpp
	Author:  Gaddis, modified by April Crockett
	Date:  8/16/2017
	Purpose:  This program uses a function to return a structure. 
*/
#include <iostream>
#include <iomanip>
#include <cmath>  // For the pow function
using namespace std;

const double PI = 3.14159;

// Structure declaration
struct Circle
{
   double radius;      // A circle's radius
   double diameter;    // A circle's diameter
   double area;        // A circle's area
};

int main()
{
	Circle *circles;
	int numCircles;

	cout << "\n\nHow many circles do you have?";
	cin >> numCircles;

	circles = new Circle [numCircles];

	for(int count=0; count < numCircles; count++)
	{
		//input
		cout << "\nRadius for circle " << count+1 << ":  ";
		cin >> circles[count].radius;

		//processing
		circles[count].diameter = circles[count].radius * 2; 
		circles[count].area = PI * pow(circles[count].radius, 2.0);

		//print results (output)
		cout << "\nCIRCLE " << count+1 << ":" << endl;
		cout << "RADIUS: " << circles[count].radius << endl;
		cout << "DIAMETER: " << circles[count].diameter << endl;
		cout << "AREA: " << circles[count].area << endl << endl;   
	}

	delete [] circles;

	return 0;
}


