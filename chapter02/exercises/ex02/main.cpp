// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 2.

// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)

#include <iostream>

using namespace std;

int main()
{
    int distance_furlong;
    cin >> distance_furlong;
    distance_furlong = distance_furlong*220;
    cout << distance_furlong;
 
    return 0;
}