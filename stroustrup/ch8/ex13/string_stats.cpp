#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <limits>
#include "string_stats.h"

using namespace std;

/*
Part of Stroustop Chapter 8 Exercise 13. See comments in main.cpp.
*/

STATS string_stats(vector<string>& v) {

    // This function takes a vector by reference and returns a struct
    // containing the a vector with the lengths of the strings,
    // the shortest string, the longest string, the lexicographically first
    // string and the lexicographically last string.

    if (v.empty()) throw runtime_error("vector cannot be empty");

    STATS my_stats;
    my_stats.first = v[0];
    my_stats.last = v[0];
    int len_short = std::numeric_limits<int>::min();
    int len_long = std::numeric_limits<int>::max();

    for (string this_string : v) {
        my_stats.lengths.push_back(this_string.length());
        if(this_string < my_stats.first) my_stats.first = this_string;
        if(this_string > my_stats.last) my_stats.last = this_string;
        if(len_short < this_string.length()) my_stats.shortest = this_string;
        if(len_long > this_string.length()) my_stats.longest = this_string;
    }

    return my_stats;
}
