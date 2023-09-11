// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 4.

// Write a program that asks the user to enter his or her age.The program then should
// display the age in months:
// Enter your age: 29
// Your age in months is 384.

#include <iostream>

int main()
{
    using namespace std;
    const int MONTHS_IN_YEAR = 12;
    int age_in_years;
    int age_in_months;
    char delimiter = '\n';
    cout << "Please, enter your age:";
    cin >> age_in_years;
    age_in_months = age_in_years * MONTHS_IN_YEAR;
    cout << "Your age in months is " << age_in_months << delimiter; 
    return 0;
}