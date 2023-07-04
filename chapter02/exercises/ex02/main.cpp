// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 2.

// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)

#include <iostream>

int main()
{
    int distance; 
    char delimiter = '\n';

    std::cout << "Please, enter distance in furlongs." << delimiter;
    std::cin >> distance;
    distance = distance * 220;
    std::cout << "Tnen it's " << distance << " yards." <<delimiter;
    
    return 0;

}
