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

    ifstream dinofile;
    ofstream otherOutFile;
    ofstream carnOutFile;
    ofstream herbOutFile;

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
            //use tempstring to send overtengrand a number using findvn
            // call print dino
            //close file end loop
        }
        dinofile.close();
        //call printResults sending the arrays
    }


    return 0;
}


int carnOrHerb(string animalName) {

    if(searchCarnivore(animalName)) {
        return 1;
    }

    else if(searchHerbivore(animalName)) {
        return 2;
    }

    else {
        return -1;
    }
}

bool searchCarnivore(string animalSearch) {
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

bool searchHerbivore(string animalSearch) {
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
    string data;
    outfile << animalName << endl;
    getline(infile, data, '#');
    outfile << data << endl;
    if (overTenGrand(animalName)) {

    }
    getline(infile, data, '#');
    outfile << data << endl;
    getline(infile, data, '#');
    outfile << data << endl;
    getline(infile, data, '#');
    outfile << data << endl;
}
/*
int main() {
    string myStr;
    getline(cin, myStr);
    int num = 0;
    size_t found;

    found = myStr.find("to ");
    if (found != string::npos) {
        cout << "'to' found" << endl;
        myStr.erase(myStr.begin(), myStr.begin()+(found+2));
        cout << "New string: " << myStr << endl;
    }


    num = stoi(myStr);
    found = myStr.find(",");

    if (found != string::npos) {
        cout << "Comma found" << endl;
        num *= 1000;
    }
    
    cout << num << endl;

    if (num > 10000) 
        cout << "true\n";

*/
bool overTenGrand(string weightCheck) {
    bool weightCompare;
    int num;
    size_t found;
    // int num = stoi(mass) should convert
    //int num = stoi(mass)

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