#include<vector>
#include <limits>
//using namespace std;

/*
Part of Stroustop Chapter 8 Exercise 11. See comments in main.cpp.
*/

struct STATS {
  int min = std::numeric_limits<int>::max();
  int max = std::numeric_limits<int>::min();
  double mean = 0;
  double median = 0;
};

// double calc_median(vector<int>& v);
STATS compute_stats(std::vector<int>& v);
