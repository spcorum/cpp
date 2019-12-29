#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include "Chrono.h"

using namespace std;

/*
Stroustop Chapter 9 Drill.

This drill simply involves getting the sequence of versions of Data to work.
For each version define a Date called today initialized to June 25, 1978. Then,
define a Date called tomorrow and give it a value by copying today into it and
increasing its day by one using add_day(). Finally, output today and tomorrow
using a<< defined as in 9.8.

Your check for a valid date may be very simple. Feel free to ignore leap years.
However, don't accept a month that is not in the [1,12] range or a day of the
month that is not in the [1,31] range. Test each version wiht at least ond
invalid date (e.g., 2004, 13, -5).
 */

int main()
{
    Date today(1978, 6, 25);
    Date tomorrow = today;
    tomorrow.add_day(1);
    cout << today << endl;
    cout << tomorrow << endl;
    // Date bad(2004, 13, -5);
}
