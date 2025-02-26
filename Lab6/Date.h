#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

class Date
{
private:
    int month = 1;
    int day = 1;
    int year = 1900;
public:
    Date();
    Date(int m, int d, int y) : month(m), day(d), year(y) {} ;
    static const string MONTHS[12] ;
    const int getMonth();
    const int getDay();
    const int getYear();
    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);
    string print();
    static bool compare(const Date d1, const Date d2);
};


#endif


