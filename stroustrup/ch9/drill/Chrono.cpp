#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include "Chrono.h"

using namespace std;

/*
Part of Stroustop Chapter 9 Drill. See comments in main.cpp.
*/

/*
void init_date(Date& dd, int y, int m, int d)
{
    if(m <= 1 || m >= 12) throw runtime_error("Invalid month.");
    if(d <= 1 || d >= 31) throw runtime_error("Invalid day.");
    dd.y = y;
    dd.m = m;
    dd.d = d;
}
*/

Date::Date(int y, int m, int d)
    :y{y}, m{m}, d{d}
{
    if(m <= 1 || m >= 12) throw runtime_error("Invalid month.");
    if(d <= 1 || d >= 31) throw runtime_error("Invalid day.");
}

void Date::add_day(int n)
{
    d += n;
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year() << ','
              << d.month() << ','
              << d.day() << ')';
}
