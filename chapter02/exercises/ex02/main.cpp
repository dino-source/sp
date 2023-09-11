// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 2.

// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)

#include <iostream>

int main()
{
    int distance_in_furlongs;
    constexpr int YARDS_IN_FURLONGS = 220;
    char delimiter = '\n';

    std::cout << "Please enter distance in furlongs:\n";
    std::cin >> distance_in_furlongs;
    std::cout << '\n';
    int distance_in_yards = distance_in_furlongs * YARDS_IN_FURLONGS;
    std::cout << "Then it's " << distance_in_yards << " yards in furlongs" << '\n';

    return 0;
}