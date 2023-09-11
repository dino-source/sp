#ifndef EXERCISE_02_H
#define EXERCISE_02_H

// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 2.

// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)

#include <iostream>

namespace ch02
{
    struct ex02
    {
        void convert_furlongs_to_yards()
        {
            int distance_in_furlongs;
            constexpr int YARDS_IN_FURLONGS = 220;

            std::cout << "Please enter distance in furlongs:\n";
            std::cin >> distance_in_furlongs;
            std::cout << '\n';
            int distance_in_yards = distance_in_furlongs * YARDS_IN_FURLONGS;
            std::cout << "So it's " << distance_in_yards << " yards in "
                      << distance_in_furlongs << " furlongs.\n\n";
        }
    } ex02;
} // namespace ch02::ex02

#endif // EXERCISE_02_H
