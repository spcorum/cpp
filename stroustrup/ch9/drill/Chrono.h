/*
Part of Stroustop Chapter 9 Drill. See comments in main.cpp.
*/

struct Date {
  int y, m, d;  // year, month, day
  Date(int y, int m, int d);  // check for valid date and initialize
  void add_day(int n);
};

//void init_date(Date& dd, int y, int m, int d);
//void add_day(Date& dd, int n);
std::ostream& operator<<(std::ostream& os, const Date& d);
