//
//  main.cpp
//  helloworld
//
//  Created by Sean Corum on 11/20/19.
//  Copyright © 2019 Sean Corum. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int addition(int a, int b) {
    return a + b;
}

string concantinate_with_space(string a, string b) {
    return a + " " + b;
}

int main(int argc, const char * argv[]) {
    cout << concantinate_with_space("My name is", "Sean") << "." << endl;
    cout << "This is my first c++ project.\n";
    int one = 1;
    cout << "The result of " << one << " + " << one << " is " <<  addition(one,one) << ".\n";
    cout << "Hello, world!" << endl;
    return 0;
}
