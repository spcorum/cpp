/*
Part of Stroustop Chapter 9 Drill. See comments in main.cpp.
*/

enum Month {
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

// Simple date, use Month type
class Date {
    int y;   // year
    Month m; // month
    int d;   // day
public:
    Date(int y, Month m, int d);  // check for valid date and initialize
    void add_day(int n);
    Month month() const {return m; }
    int day() const {return d; }
    int year() const {return y; }
};

std::ostream& operator<<(std::ostream& os, const Date& d);
