/*
	Title:  	kedens43_prog3.cpp
	Author:		Kamden Edens
	Date:		4/2/2022
	Purpose:	A program that uses a file system to 
                read info then sort it accordingly.
*/

#include <iostream>
#include <cstring>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;

int carnOrHerb(string);
bool searchCarnivore(string);
bool searchHerbivore(string);
void printDino(ofstream&, ifstream&, string, int[]);
bool overTenGrand(string);
void printResults(int[], string[]);
string filename;
int totalsArray[6] = {0};
string labelsArray[6] = {"TOTAL DINOS", "TOTAL CARNIVORE", "TOTAL HERBIVORE DINOS", "DINOS OVER 10,000", "DINO NAMES END IN 'SAURUS'", "ANIMALS NOT DINOS"};

int main() {
    ifstream inputfile;
    ofstream dinoOutfile;
    ofstream carnOutfile;
    ofstream harbOutfile;

    cout << "Enter in the file name (dinoDirectory.txt): ";
    getline(cin, filename);

    while(filename != "dinoDirectory.txt") {
        "Please try to enter the file name in again: "
        cin.ignore();
        getline(cin, filename);
    }

    inputfile.open(filename);

    if(inputfile.is_open()) {
        while(getline(filename, tempString, '#')){

        }
    }


    return 0;
}


int carnOrHerb(animalName) {
    cout << "yes";
}
bool searchCarnivore(animalSearch) {
    bool isCarn = false;
    ifstream carnfile;
    string name;
    carnfile.open("carnivores.txt");
    while(getline(carnfile, name, '#')) {
        if (animalSearch == name) {
            isCarn = true;
        }
    }
    return isCarn;

   
}
bool searchHerbivore(animalSearch) {
    bool isHerb = false;
    ifstream herbfile;
    string name;
    herbfile.open("herbivores.txt");
    while(getline(herbfile, name, '#')) {
        if (animalSearch == name) {
            isHerb = true;
        }
    }
    return isHerb;
}
void printDino(ofstream& outfile, ifstream& infile, string animalName, int totalsA[]) {


}
bool overTenGrand(weightCheck) {
    string mass;
    bool weightCompare;

    if(mess.find, ' lbs') {
        mass.erase
    }
}
void printResults(totalsA[], labelsA[]) {

}