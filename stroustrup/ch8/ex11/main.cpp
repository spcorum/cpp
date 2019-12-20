#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include "compute_stats.h"

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
    vector<int> v = {-2,6 ,-6,-4,-1,-8,-10 ,8 ,0,-5,-7,10,3,9,10,10,10,10,10};
    STATS out_stats = compute_stats(v);
    cout << "min: " << out_stats.min << endl;
    cout << "max: " << out_stats.max << endl;
    cout << "mean: " << out_stats.mean << endl;
    cout << "median: " << out_stats.median << endl;
}
