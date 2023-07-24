// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 7.

// Write a program that asks the user to enter an hour value and a minute value.The
// main() function should then pass these two values to a type void function that dis-
// plays the two values in the format shown in the following sample run:
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28

#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number of hours: ";
    int hours, min;
    cin >> hours;
    cout<<"Enter the number of minutes: ";
    cin >> min;
    cout<< "Time: "<< hours <<":"<< min;
     

    return 0;
}