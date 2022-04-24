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
struct heros
{
    string heroName;
    string heroDesc;
    bool heroDanger;
    rent rent;
};

void enterHeros(float foodAmt[], string elephantName[]);
void GETSTATS(float foodAmt[], float& foodTotal, float& foodAverage, int& elePig);
#endif