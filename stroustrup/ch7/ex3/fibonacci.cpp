#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include "fibonacci.h"

using namespace std;

/*
Part of Stroustop Chapter 7 Exercise 3. See comments in main.cpp.
*/

void print(vector<int> v) {
    for (int x: v) {
        cout << x << " ";
    }
}

void fibonacci(int x, int y, vector<int>& v, int n) {

    // Calculates generalized n-term Fibonacci sequence starting x = f[0] and
    // y = f[1]. v is an empty vector. The sequence is returned as a vector.

    if (!v.empty()) throw runtime_error("v must be empty");
    if (n < 0) throw runtime_error("n cannot be negative");

    // Handle base cases of n = 1 or n = 2.
    if (n == 0) return;
    v.push_back(x);
    if (n == 1) return;
    v.push_back(y);

    // General case of Fibonacci sequence of three or more terms.
    if (n >= 2){
        for (int i = 2; i < n; ++i) {
            v.push_back(v[i-1]+v[i-2]);
        }
    }

}
