#include <iostream>
#include <string>

struct ex02
{
    static std::string task_description()
    {
        return "Stephen Prata's \"C++ Primer Plus\" (Sixth Edition)\n"

               "Chapter 2. Exercise 2.\n"

               "Write a C++ program that asks for a distance in furlongs"
               " and converts it to yards. (One furlong is 220 yards.)\n\n";
    }

    static void run_solution()
    {
        int distance_in_furlongs;
        constexpr int YARDS_IN_FURLONGS = 220;
        char delimiter = '\n';

        std::cout << "Please enter distance in furlongs: ";
        std::cin >> distance_in_furlongs;
        std::cout << delimiter;
        int distance_in_yards = distance_in_furlongs * YARDS_IN_FURLONGS;
        std::cout << "Then it's " << distance_in_yards << " yards in furlongs" << delimiter;
    }
};
