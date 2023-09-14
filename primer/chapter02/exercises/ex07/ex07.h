#ifndef EXERCISE_07_H
#define EXERCISE_07_H

// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 7.

// Write a program that asks the user to enter an hour value and a minute value.The
// main() function should then pass these two values to a type void function that dis-
// plays the two values in the format shown in the following sample run:
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28

#include <iostream>

namespace ch02::ex07
{
        inline void time(int number_of_hr, int number_of_min)
        {
            std::cout << "Time: " << number_of_hr << ":" << number_of_min << "\n";
        }

        inline void show_time_in_hours_and_seconds()
        {
            int number_of_hr;
            std::cout << "Enter the number of hours: ";
            std::cin >> number_of_hr;
            int number_of_min;
            std::cout << "Enter the number of minutes: ";
            std::cin >> number_of_min;
            time(number_of_hr, number_of_min);
        }
} // namespace ch02::ex07



#endif // EXERCISE_07_H
