/*
When mammoth walks through the forest it makes 1 step per 4 seconds, while
elephant flea walking through the mammoth's body makes 3 steps per 1 second.

When mammoth walks through the tundra it makes 1 step per 3 seconds, while
elephant flea's speed remains the same.

When mammoth walks through the hills it makes 1 step per 5 seconds, while
elephant flea's speed increasing: it makes 5 steps per 1 second, because
elephant flea is very fond of hills.

Print to the terminal how many steps make mammoth and elephant flea together
during 1 minute in each type of landscape (forest, tundra, hills).

Recommendations:
use variables, named constants and functions to solve the problem.
*/

// convert seconds to minutes. Flea steps, Mammoth steps

#include <iostream>
#include <string>

using Time = int;
using Steps = int;
using Message = std::string const &;
const int ONE_MINUTE{60};

namespace seconds
{
    constexpr int FOREST = 4;
    constexpr int TUNDRA = 3;
    constexpr int HILLS = 5;
}

namespace steps
{
    constexpr int FOREST = 3;
    constexpr int TUNDRA = 1;
    constexpr int HILLS = 5;
}

namespace flea_seconds
{
    constexpr int TUNDRA = 3;
}

namespace landscape
{
    constexpr int FOREST = 1;
    constexpr int TUNDRA = 2;
    constexpr int HILLS = 3;
}

void print(Message message);
void print(Steps taken_steps);
Steps steps_counting_for_mammoth(Time seconds);
Steps steps_counting_for_flea(Steps steps);
Steps steps_counting_for_flea_in_tundra(Time seconds);

int main()
{
    using namespace std;
    print("Please enter a number to find out the number of steps\n"
          "taken by a mammoth and a elephant flea in:\n"
          "Forest - 1\n"
          "Tundra - 2\n"
          "Hills - 3\n\n");
    cout << "Enter a number:";
    int user_choice{};
    cin >> user_choice;
    Steps taken_steps{};
    switch (user_choice)
    {
    case landscape::FOREST:
        taken_steps = steps_counting_for_mammoth(seconds::FOREST);
        cout << "\nMammoth made " << taken_steps << " steps in forest ";
        taken_steps = steps_counting_for_flea(steps::FOREST);
        cout << "and elephant flea made " << taken_steps << ".\n\n";
        break;
    case landscape::TUNDRA:
        taken_steps = steps_counting_for_mammoth(seconds::TUNDRA);
        cout << "\nIn tundra mammoth made " << taken_steps << " steps ";
        taken_steps = steps_counting_for_flea_in_tundra(steps::TUNDRA);
        cout << "amd elephant flea made " << taken_steps << ".\n\n";
        break;
    case landscape::HILLS:
        taken_steps = steps_counting_for_mammoth(seconds::HILLS);
        cout << "\nIn hills mammoth made " << taken_steps << " steps ";
        taken_steps = steps_counting_for_flea(steps::HILLS);
        cout << "and elephant flea made " << taken_steps << " steps there,\n"
             << "because elephant flea is very fond of hills.\n\n";
        break;
    default:
        cout << "\nThere is no such directory. Please, try again\n\n";
        break;
    }
    
}

Steps steps_counting_for_mammoth(Time seconds)
{
    return ONE_MINUTE / seconds;
}

Steps steps_counting_for_flea(Steps steps)
{
    return ONE_MINUTE * steps;
}

Steps steps_counting_for_flea_in_tundra(Time flea_seconds)
{
    return ONE_MINUTE / flea_seconds;
}

void print(Message message)
{
    std::cout << message;
}

void print(Steps taken_steps)
{
    std::cout << taken_steps << "\n";
}