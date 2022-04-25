#ifndef prog4_H
#define prog4_H

#include <iostream>
#include <string>
using namespace std;

struct rent 
{
    double heroRent;
    double heroDmg;
    int heroYears;
};
struct heroes
{
    string heroName;
    string heroDesc;
    bool heroDanger;
    rent rent;
};

int enterHeroes(int, int, heroes*);

int deleteHeroes(int, heroes*);

bool moveArrayElements(string, int, heroes*);

void printHeroes(int, heroes*);

void printRentDetails(int, heroes*);

void saveToFile(int, heroes*);

#endif