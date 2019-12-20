#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include "fibonacci.h"

using namespace std;

/*
Stroustop Chapter 7 Exercise 3.

Create a vector of Fibonacci numbers and print them using the function from
exercise 2. To create a vector, write a function, fibonacci(x,y,v,n), where
integers x and y are ints, v is an empty vector<int>, and n is the number
elements to put into v; v[0] will be x and v[1] will be y. Your fibonacci()
functions should make such a sequence starting with its x and y ints.

Estimating the largest positive value of int is Exercise 4.
*/

int main()
{
    int first = 0;
    int second = 1;
    vector<int> fib_nums;
    int n = 50;
    fibonacci(first,second,fib_nums,n);
    cout << "The first " << n << " Fibonacci numbers starting with " << first
      << " and " << second << " are ";
    print(fib_nums);
    cout << ".\n";
    for (int i = 0; i < n; ++i) {
        if (i > 0 && fib_nums[i] < 0) {
            cout << "Using this Fibonacci sequence for estimation, " <<
              fib_nums[i-1] << " is the largest estimated positive int in C++. " <<
              "This is reasonably close to the actual number of 2147483647.\n";
            break;
        }

    }
    //error("my error");
}
