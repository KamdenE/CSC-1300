/*
	Title:  	Lab11.cpp
	Author:		Kamden Edens
	Date:		4/18/2022
	Purpose:	A program that uses structures and 
                other new methods to create a program
                that will tell the user if they can 
                take a part time job or not.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;

string line(10, '*');
 


 struct Course
{
	int courses;   // num of courses
	int* dymem;   // pointer
};

struct Student
{
    string stuName, houseName;
    Course courses;
};
void ENTERDATA(Student) {

    cout << "Enter in each student's data: " << endl;
    for(int index = 0; index < 6; index++)
	{
		cout << line << "Student " << (index + 1) << line << endl;
		cout << "Name: ";
        cin stuName;
	}
};

void CALCULATEHOURS() {


};

int main() {

    int stuArr[5];
    cout << "Which of the 5 students can work while going to school?" << endl;
    ENTERDATA(stuArr);

    return 0;
}

