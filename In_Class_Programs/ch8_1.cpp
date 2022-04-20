/*
	Title:  in_class_ch8.cpp
	Author:  Kamden Edens
	Date:  5/18/2022
	Purpose:  This program uses an array of structures.
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct songInfo
{
	string songName;      
	string authorName;   
	double songLength;
};

int main() {

	songInfo songs;
	int index = 1;

	cout << "Enter the name of a song: ";
	getline(cin, songs.songName);
	cout << "\nEnter the author: ";
	getline(cin, songs.authorName);
	cout << "\nEnter the length of the song: ";
	cin >> songs.songLength;

	cout << "Your song: " << endl;
	cout << "Name: " << songs.songName << endl;
	cout << "Author: " << songs.authorName << endl;
	cout << "Length: " << songs.songLength << endl;

	return 0;
}