// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 2.

// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)

#include <iostream>

int main()
{
    constexpr int YARDS_IN_FURLONG = 220;
    int distance_in_furlongs; 
    char delimiter = '\n';

    std::cout << "Please, enter distance in furlongs." << delimiter;
    std::cin >> distance_in_furlongs;
    // distance_in_furlongs *= YARDS_IN_FURLONG;
    distance_in_furlongs = distance_in_furlongs * YARDS_IN_FURLONG;
    std::cout << "Tnen it's " << distance_in_furlongs << " yards." << delimiter;
    
    return 0;

}
