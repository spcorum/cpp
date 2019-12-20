#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <limits>
#include "compute_stats.h"

using namespace std;

/*
Part of Stroustop Chapter 8 Exercise 11. See comments in main.cpp.
*/

/*
double calc_median(vector<int>& v) {

  int size = v.size();

  if (size == 0) return 0;  // Undefined, really.
  else
  {
    sort(v);
    if (size % 2 == 0)
    {
      return (v[size / 2 - 1] + v[size / 2]) / 2;
    }
    else
    {
      return v[size / 2];
    }
  }
}
*/

double calc_median(vector<int>& v)
{
  int size = v.size();
  if (size == 0) return 0;  // Undefined, really.
  else
  {
    sort(v.begin(), v.end());
    if (size % 2 == 0) return (v[size / 2 - 1] + v[size / 2]) / 2; // odd case
    else return v[size / 2];                                       // even case
  }
}

STATS compute_stats(vector<int>& v) {

    // This function takes a vector by reference and returns a struct
    // containing the min, max, mean, and median
    //
    // NOTE: v is sorted in the call to calc_median, which is noteworthy
    // since v is passed by reference to this function.

    STATS my_stats;
    double sum = 0;

    for (int this_num : v) {
        sum += this_num;
        if(this_num < my_stats.min) my_stats.min = this_num;
        if(this_num > my_stats.max) my_stats.max = this_num;
    }

    my_stats.mean = sum / v.size();
    my_stats.median = calc_median(v);

    return my_stats;
};
