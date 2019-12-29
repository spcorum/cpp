/*
Part of Stroustop Chapter 9 Drill. See comments in main.cpp.
*/

class Date {
    int y, m, d;  // year, month, day
public:
    Date(int y, int m, int d);  // check for valid date and initialize
    void add_day(int n);
    int month() const {return m; }
    int day() const {return d; }
    int year() const {return y; }
};

std::ostream& operator<<(std::ostream& os, const Date& d);
