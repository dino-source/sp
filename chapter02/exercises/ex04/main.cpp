// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 4.

// Write a program that asks the user to enter his or her age.The program then should
// display the age in months:
// Enter your age: 29
// Your age in months is 384.

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your age:";
    int age;
    cin >> age;
    age = age * 12;
    cout << "Your age in months is " << age;
    return 0;
}