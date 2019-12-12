#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

inline void keep_window_open() {char ch; cin>>ch;}

bool is_prime(int n) {

    // This function tells you whether or not an integer is prime.
    
    if (n <= 1) return false;
    
    // This loop tests whether or not n is divisible by any integer
    // smaller than it that is larger than 1.
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(int argc, const char *argv[]) {

    // This function finds all the prime numbers between 1 and a number
    // specified by the user.
    int n;
    cout << "Please enter a positive integer: ";
    cin >> n;
    cout << "Prime numbers up to " << n << ":" << endl;
    for (int i = 1; i <= n; ++i) {
        if (is_prime(i))
            cout << i << endl;
    };
    return 0;
}
