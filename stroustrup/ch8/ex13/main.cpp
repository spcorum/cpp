#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include "string_stats.h"
#include <limits>

using namespace std;

/*
Stroustop Chapter 8 Exercise 11.

Write a function that finds the smalles and largest element of a
vector<int> argument and also computes the mean and the median. Do not use
global variables. Either return a struct containing the results or pass them
back through reference. Which of the two ways of returning several result
values do you prefer.

This solution passes the values back through a struct, because it seems
to be weird to modify small data structures like ints and doubles by
reference. One problem with the code is that v is modified so that it is
sorted by compute_stats. This is done for the calculation of the median,
which requires a sort. The only way to get around it is to pass v by value
instead of reference, which is the tradeoff.
*/

int main()
{
    vector<string> v = {"My", "name", "is", "Sean", "Paul"};
    STATS out_stats = string_stats(v);
    cout << "strings:";
    for (string x : v) {
        cout << " " << x;
    }
    cout << endl;
    cout << "lengths:";
    for (int x : out_stats.lengths) {
        cout << " " << x;
    }
    cout << endl;
    cout << "shortest: " << out_stats.shortest << endl;
    cout << "longest: " << out_stats.longest << endl;
    cout << "first: " << out_stats.first << endl;
    cout << "last: " << out_stats.last << endl;
}
