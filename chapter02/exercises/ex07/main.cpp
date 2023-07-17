// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 7.

// Write a program that asks the user to enter an hour value and a minute value.The
// main() function should then pass these two values to a type void function that dis-
// plays the two values in the format shown in the following sample run:
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28

#include <iostream>

void hours(int);
void minutes(int);

int main ()
{
    int hours(9);  
    std::cout << "Enter the number of hours: ";
    int count_hours;
    std::cin >> count_hours;
    int minutes(28);  
    std::cout << "Enter the number of minutes: ";
    int count_minutes;
    std::cin >> count_minutes;
    std::cout << "Time: " << count_hours <<':' << count_minutes << '\n';

    return 0;
}

void simon(int n)   // define the simon() function
{
    using namespace std;

    cout << "Simon says touch your toes " << n << " times." << endl; 
}