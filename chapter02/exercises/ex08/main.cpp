// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 7.

// Write a program that asks the user to enter an hour value and a minute value.The
// main() function should then pass these two values to a type void function that dis-
// plays the two values in the format shown in the following sample run:
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28

#include <iostream>
#include <string>
#include <vector>

int main ()
{
    std::vector<std::string> time {
        "hours: ",
        "minutes: ",
    };
    std::string user_input;
    std::vector<std::string> user_time;
    for (auto &element : time)
    {
        std::cout << "Please, enter the number of " << element;
        std::cin >> user_input;
        user_time.push_back(user_input);
    }    
    std::cout << "Time:";

    for (auto const &element : user_time)
    {
        std::cout << element << ':';
    }
    std::cout << '\n';
}