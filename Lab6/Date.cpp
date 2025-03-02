#include "Date.h"

const string Date::MONTHS[12] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};

const int Date::getMonth()
{
    return month;
}

const int Date::getDay()
{
    return day;
}

const int Date::getYear()
{
    return year;
}

void Date::setMonth(int m)
{
    month = m;
}

void Date::setDay(int d)
{
    day = d;
}

void Date::setYear(int y)
{
    year = y;
}

string Date::print()
{
    stringstream date;
    date << left << setw(10) << MONTHS[month - 1] << setw(3) << day << setw(5) << year;
    return date.str();
}

bool Date::compare(const Date& d1, const Date& d2)
{
    if (d1.year < d2.year)
    {
        return true;
    }
    
    // if dates share a year, you need to check their months
    if ((d1.year == d2.year) && (d1.month < d2.month))
    {
        return true;
    }
    
    // if they share a month you must compare them by day.
    if ((d1.year == d2.year) && (d1.month == d2.month) && (d1.day < d2.day))
    {
        return true;
    }
    return false;
}
