// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 2.

// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)

#include <iostream>

using namespace std;

int main()
{
    int distans_farlong;
    cin >> distans_farlong;
    distans_farlong = distans_farlong*220;
    cout << distans_farlong;
 
    return 0;
}