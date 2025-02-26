// Name: Kelsey Wessel and Matthew Garino
// My Class: CPSC 1021
// Date: 02/26/2025
// Desc: 

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
    inputFile.ignore();
    vector<Date> dates;
    
    string line;
    while (getline(inputFile, line))
    {
        stringstream lineDate(line);
        int month, day, year;
        lineDate >> month >> day >> year;
        Date theDate(month, day, year);
        dates.push_back(theDate);
    }
    
    std::sort(dates.begin(), dates.begin()+numDates, Date::compare);
    
    for(int i = 0; i < numDates; i++)
    {
        outFile << dates.at(i).print();
    }
}
