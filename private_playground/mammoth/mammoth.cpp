/*
When mammoth walks through the forest it makes 1 step per 4 seconds, while
elephant flea walking through the mammoth's body makes 3 steps per 1 second.
DINO:
    which means mammoth makes 15 steps per minute (60/4=15) in the forest
    while elephant flea makes 180 steps per minute (3*60=180) in the forest
    so the answer for the 1st question is: 15+180=195 steps

When mammoth walks through the tundra it makes 1 step per 3 seconds, while
elephant flea's speed remains the same.
DINO:
    which means mammoth makes 20 steps per minute (60/3=20) in the tundra
    while elephant flea makes 180 steps per minute (3*60=180) in the tundra
    so the answer for the 2nd question is: 15+180=200 steps

When mammoth walks through the hills it makes 1 step per 5 seconds, while
elephant flea's speed increasing: it makes 5 steps per 1 second, because
elephant flea is very fond of hills.
DINO:
    which means mammoth makes 12 steps per minute (60/5=12) in the hills
    while elephant flea makes 180 steps per minute (5*60=300) in the hills
    so the answer for the 3rd question is: 15+180=312 steps

Print to the terminal how many steps make mammoth and elephant flea together
during 1 minute in each type of landscape (forest, tundra, hills).

Recommendations:
use variables, named constants and functions to solve the problem.
*/

#include <iostream>
#include <string>

void print(std::string const &message);
void print(int const steps, std::string const &in_specific_landscape);

constexpr int ONE_MINUTE{60};

namespace landscape
{
    constexpr int UNKNOWN_LANDSCAPE_TYPE{-1};
    constexpr int FOREST = 1;
    constexpr int TUNDRA = 2;
    constexpr int HILLS = 3;
} // namespace landscape

namespace mammoth
{
    constexpr int SECONDS_PER_ONE_STEP_IN_FOREST = 4;
    constexpr int SECONDS_PER_ONE_STEP_IN_TUNDRA = 3;
    constexpr int SECONDS_PER_ONE_STEP_IN_HILLS = 5;

    int steps_per_minute_in(int landscape_type);

    int steps_per_minute_in(int landscape_type)
    {
        int steps_per_minute{};
        switch (landscape_type)
        {
            using namespace landscape;
        case FOREST:
            steps_per_minute = ONE_MINUTE / SECONDS_PER_ONE_STEP_IN_FOREST;
            break;
        case TUNDRA:
            steps_per_minute = ONE_MINUTE / SECONDS_PER_ONE_STEP_IN_TUNDRA;
            break;
        case HILLS:
            steps_per_minute = ONE_MINUTE / SECONDS_PER_ONE_STEP_IN_HILLS;
            break;
        default:
            steps_per_minute = UNKNOWN_LANDSCAPE_TYPE;
            break;
        }
        return steps_per_minute;
    }
} // namespace mammoth

namespace flea
{
    constexpr int STEPS_PER_ONE_SECOND_IN_FOREST = 3;
    constexpr int STEPS_PER_ONE_SECOND_IN_TUNDRA = 3;
    constexpr int STEPS_PER_ONE_SECOND_IN_HILLS = 5;

    int steps_per_minute_in(int landscape_type);

    int steps_per_minute_in(int landscape_type)
    {
        int steps_per_minute{};
        switch (landscape_type)
        {
            using namespace landscape;
        case FOREST:
            steps_per_minute = ONE_MINUTE * STEPS_PER_ONE_SECOND_IN_FOREST;
            break;
        case TUNDRA:
            steps_per_minute = ONE_MINUTE * STEPS_PER_ONE_SECOND_IN_TUNDRA;
            break;
        case HILLS:
            steps_per_minute = ONE_MINUTE * STEPS_PER_ONE_SECOND_IN_HILLS;
            break;
        default:
            steps_per_minute = UNKNOWN_LANDSCAPE_TYPE;
            break;
        }
        return steps_per_minute;
    }
} // namespace flea

int main()
{
    print("Please choose the integer to calculate the number of steps have been made\n"
          "by a mammoth and a elephant flea together in which type of landscape:\n"
          "Forest - 1\n"
          "Tundra - 2\n"
          "Hills - 3\n\n");
    int user_choice{};
    std::cin >> user_choice;

    switch (int steps{}; user_choice)
    {
        using namespace landscape;
    case FOREST:
        steps = mammoth::steps_per_minute_in(FOREST) + flea::steps_per_minute_in(FOREST);
        print(steps, "in the forest");
        break;
    case TUNDRA:
        steps = mammoth::steps_per_minute_in(TUNDRA) + flea::steps_per_minute_in(TUNDRA);
        print(steps, "in the tundra");
        break;
    case HILLS:
        steps = mammoth::steps_per_minute_in(HILLS) + flea::steps_per_minute_in(HILLS);
        print(steps, "in the hills");
        break;
    default:
        print("\nThere is no such kind of landscape. To try again re-run the app.\n");
        break;
    }
}

void print(std::string const &message)
{
    std::cout << message;
}

void print(int const steps, std::string const &in_specific_landscape)
{
    std::cout
        << "\nMammoth and elephant flea made " << steps
        << " steps per minute " << in_specific_landscape << ".\n";
}