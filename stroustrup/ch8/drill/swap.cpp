#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

inline void keep_window_open() {char ch; cin>>ch;}

/*
Drill Exercsie 2. Pass by copy, pass by reference, and pass by const
reference. Determine which lines in main compile and which do not.
For those that do not, explain why not.
*/

void swap_v(int a,int b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void swap_r(int& a, int& b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

/*
// Does not compile. const's can't be modified.
swap_cr(const int& a, const int& b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}
*/

int main(){
  int x = 7;
  int y = 9;
  swap_v(x,y);
  swap_r(x,y);
  // swap_cr(x,y);   // Does not compile. See above.
  const int cx = 7;
  const int cy = 9;
  swap_v(cx,cy);
  // swap_r(cx,cy);  // Does not compile, consts can't be modified by reference
  // swap_cr(x,y);   // Does not compile. See above.
  double dx = 7.7;
  double dy = 7.9;
  swap_v(dx,dy);
  // swap_r(dx,dy);  // Does not compile, doubles are not converted to ints
                     // because references are not copied.
  // swap_cr(x,y);   // Does not compile. See above.ß
  return 0;
}
