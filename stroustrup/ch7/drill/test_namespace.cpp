#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

inline void keep_window_open() {char ch; cin>>ch;}

/*
Write a program using a single file containing three namespaces X, Y, and Z so
that the following main () works correctly. Each namepsace needs to define
a variable called var and a function called print() that outputs the
appropriate var using cout.
*/

namespace X {
    int var;
    void print() {
        cout << var << endl;
    }
}

namespace Y {
    int var;
    void print() {
        cout << var << endl;
    }
}

namespace Z {
    int var;
    void print() {
        cout << var << endl;
    }
}

int main()
{
    X::var = 7;
    X::print();         // print X's var
    using namespace Y;
    var = 9;
    print();            // print Y's var
    {
        using Z::var;
        using Z::print;
        var = 11;
        print();        // print Z's var
    }
    print();            // print Y's var
    X::print();         // print X's var
}
