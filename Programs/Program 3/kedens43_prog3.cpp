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


int main() {

    string filename;
    int totalsArray[6] = {0};
    string labelsArray[6] = {"TOTAL DINOS", "TOTAL CARNIVORE", "TOTAL HERBIVORE DINOS", "DINOS OVER 10,000", "DINO NAMES END IN 'SAURUS'", "ANIMALS NOT DINOS"};

    ifstream dinofile;
    ofstream otherOutFile;
    ofstream carnOutFile;
    ofstream harbOutFile;

    cout << "Enter in the file name (dinoDirectory.txt): ";
    getline(cin, filename);

    while(filename != "dinoDirectory.txt") {
        "Please try to enter the file name in again: "
        cin.ignore();
        getline(cin, filename);
    }

    dinofile.open(filename);

    if(dinofile.is_open()) {
        while(getline(filename, tempString, '#')){
            
            if(filename.find, 'saurus') {
                //increment totalsArray 5
            }
            // call carnOrHerb
            //open correct outfile
            // call print dino
            //close file end loop
        }
        //close input file
        //call printResults sending the arrays
    }


    return 0;
}


int carnOrHerb(animalName) {
    string Carn, Herb, Other;

    searchCarnivore(Carn);

    searchHerbivore(Herb); 

    if(Carn == true) {
        return 1;
    }

    else if(Herb == true) {
        return 2;
    }
    else {
        return -1;
    }
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
    ofstream file;
    
}
bool overTenGrand(weightCheck) {
    string mass;
    bool weightCompare;
    int num;
    // int num = stoi(mass) should convert

    if(mass.find, '30 to 60 lbs') {
        //mass.erase(' lbs')
        //int num = stoi(mass)
        weightCompare = false;
    }
    else if(mass.find, '5,000 to 9,000 lbs') {
        weightCompare = false;
    }
    else if(mass.find, '9,000 to 10,000 lbs') {
        weightCompare = true;
    }
    else if(mass.find, '11,000 to 15,000 lbs') {
        weigthCompare = true;
    }
    else {
        cout << "Error";
    }
    return weigthCompare;
}
void printResults(totalsA[], labelsA[]) {
    totalsA[];
    labelsA[];
    int numElements = 7;
    string line(50, '-');
    cout << line;
    for(int x = 0; x < numElements; x++) {
        cout << labelsA[x] << totalsA[x] << endl;
    }
    cout << line;
}