// Name: Kelsey Wessel and Matthew Garino
// My Class: CPSC 1021
// Date: 02/26/2025
// Desc: Create a Date class and a main function that takes in command line arguments that hold a textfile of texts to print from earliest to latest date. 

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Date.h"
using namespace std;

int main(int argc, const char *argv[])
{
    ifstream inputFile(argv[1]);
    ofstream outFile(argv[2]);
    
    int numDates;
    inputFile >> numDates;
    vector<Date> dates;
    
    for (int i = 0; i < numDates; i++)
    {
        int month, day, year;
        inputFile >> month >> day >> year;
        dates.push_back(Date(month, day, year));
    }
    
    sort(dates.begin(), dates.end(), Date::compare);
    
    for(int i = 0; i < numDates; i++)
    {
        outFile << dates.at(i).print() << endl;
    }
    
    return 0;
}
