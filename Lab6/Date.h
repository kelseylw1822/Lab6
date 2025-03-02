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
    int month ;
    int day ;
    int year ;
public:
    Date() : month(1), day(1), year(1900) {} ;
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


