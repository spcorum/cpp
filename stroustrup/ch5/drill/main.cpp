#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

inline void keep_window_open() {char ch; cin>>ch;}

int main()
try {
  int x=2; double d = 5/(x-2); if(d==2*x+0.5) cout << "Success!\n";
  keep_window_open();
  return 0;
}
catch (exception& e) {
  cerr << "error: " << e.what() << "\n";
  keep_window_open();
  return 1;
}
catch (...) {
  cerr << "Oops: unknown exception!\n";
  keep_window_open();
  return 2;
}
