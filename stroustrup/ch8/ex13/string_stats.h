#include<vector>
#include <string>

/*
Part of Stroustop Chapter 8 Exercise 13. See comments in main.cpp.
*/

struct STATS {
  std::string first;
  std::string last;
  std::string longest;
  std::string shortest;
  std::vector<int> lengths;
};

STATS string_stats(std::vector<std::string>& v);
