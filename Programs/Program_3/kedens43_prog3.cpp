/*
	Title:  	kedens43_prog3.cpp
	Author:		Kamden Edens
	Date:		4/2/2022
	Purpose:	A program that uses a file system to 
                read info then sort it accordingly.
*/

#include <iostream>
#include <cstring>
#include <string>
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

    string filename, tempString;
    int totalsArray[6] = {0};
    string labelsArray[6] = {"TOTAL DINOS", "TOTAL CARNIVORE", "TOTAL HERBIVORE DINOS", "DINOS OVER 10,000", "DINO NAMES END IN 'SAURUS'", "ANIMALS NOT DINOS"};
    size_t find;
    ifstream dinofile;
    //ofstream otherOutFile;
    //ofstream carnOutFile;
    //ofstream herbOutFile;
    ofstream outStreamFile;
    outStreamFile.open("carnOutFile.txt",ios::trunc);
    outStreamFile.close();
    outStreamFile.open("herbOutFile.txt",ios::trunc);
    outStreamFile.close();
    outStreamFile.open("otherOutFile.txt",ios::trunc);
    outStreamFile.close();




    cout << "Enter in the file name (dinoDirectory.txt): ";
    getline(cin, filename);

    while(filename != "dinoDirectory.txt") {
        cout << "Please try to enter the file name in again: ";
        cin.ignore();
        getline(cin, filename);
    }

    dinofile.open(filename);

    if(dinofile.is_open()) {
        while(getline(dinofile, tempString, '#')){
            
            find = tempString.find("saurus");
            if(find != string::npos) {
                totalsArray[4] += 1;
            }
            switch (carnOrHerb(tempString)) {
                case 1:
                    totalsArray[0] += 1;
                    totalsArray[1] += 1;
                    outStreamFile.open("carnOutFile.txt",ios::app);
                    printDino(outStreamFile, dinofile, tempString, totalsArray);
                    outStreamFile.close();
                    break;
                case 2:
                    totalsArray[0] += 1;
                    totalsArray[2] += 1;
                    outStreamFile.open("herbOutFile.txt",ios::app);
                    printDino(outStreamFile, dinofile, tempString, totalsArray);
                    outStreamFile.close();
                    break;
                case -1:
                    totalsArray[5] += 1;
                    outStreamFile.open("otherOutFile.txt",ios::app);
                    printDino(outStreamFile, dinofile, tempString, totalsArray);
                    outStreamFile.close();
                    break;
            }
        }
        dinofile.close();
        printResults(totalsArray, labelsArray);
        outStreamFile.close();
    }


    return 0;
}


int carnOrHerb(string animalName) {

    if(searchCarnivore(animalName)) {
        cout << animalName << " is going in the CARNIVORE file!" << endl;
        return 1;
    }

    else if(searchHerbivore(animalName)) {
        cout << animalName << " is going in the HERBIVORE file!" << endl;
        return 2;
    }

    else {
        cout << animalName << " is going in the OTHER file!" << endl;
        return -1;
    }
}

bool searchCarnivore(string animalSearch) {
    ifstream carnfile;
    string name;
    carnfile.open("carnivores.txt");
    while(getline(carnfile, name, '#')) {
        if (animalSearch == name) {
            return true;
        }
    }
    return false;
}

bool searchHerbivore(string animalSearch) {
    ifstream herbfile;
    string name;
    herbfile.open("herbivores.txt");
    while(getline(herbfile, name, '#')) {
        if (animalSearch == name) {
            return true;
        }
    }
    return false;
}
void printDino(ofstream& outfile, ifstream& infile, string animalName, int totalsA[]) {
    string data;
    size_t find;
    outfile << "Dino Name: " << setw(13) << " " << animalName << endl;
    getline(infile, data, '#');
    outfile << "Height/Length " << setw(10) << " " << data << endl;
    getline(infile, data, '#');
    if(overTenGrand(data)) {
        totalsA[3] += 1;
    }
    outfile << "Mass " << setw(19) << " " << data << endl;
    getline(infile, data, '#');
    outfile << "Eats " << setw(19) << " " << data << endl;
    getline(infile, data, '#');
    outfile << "Description " << setw(12) << " " << data << endl;
}

bool overTenGrand(string weightCheck) {
    bool weightCompare;
    int num;
    size_t found;

    found = weightCheck.find("to ");
    if (found != string::npos) {
        weightCheck.erase(weightCheck.begin(), weightCheck.begin()+(found+2));
    }

    num = stoi(weightCheck);
    found = weightCheck.find(",");

    if (found != string::npos) {
        num *= 1000;
    }

    if (num > 10000) {
        weightCompare = true;
    }

    return weightCompare;
}
    

void printResults(int totalsA[], string labelsA[]) {
    string line(50, '-');
    cout << line << endl;
    for(int x = 0; x < 6; x++) {
        cout << labelsA[x] << ": " << totalsA[x] << endl;
    }
    cout << line << endl;
}