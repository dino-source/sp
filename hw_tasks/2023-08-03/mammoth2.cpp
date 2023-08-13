/*
When mammoth walks through the forest it makes 1 step per 4 seconds, while
elephant flea walking through the mammoth's body makes 3 steps per 1 second.
MINT(forest):
 mammoth - 15 steps(60/4=15),
 flea 180 steps (60*3=180),
 both - 195 steps.

When mammoth walks through the tundra it makes 1 step per 3 seconds, while
elephant flea's speed remains the same.
MINT(tundra):
 mammoth - 20 steps (60/3=20),
 flea - 180 steps still (60*3=180),
 both - 200 steps.

When mammoth walks through the hills it makes 1 step per 5 seconds, while
elephant flea's speed increasing: it makes 5 steps per 1 second, because
elephant flea is very fond of hills.
MINT(hills):
 mammoth - 12 steps (60/5=12),
 flea - 300 steps (60*5=300),
 both - 312 steps.

Print to the terminal how many steps make mammoth and elephant flea together
during 1 minute in each type of landscape (forest, tundra, hills).

Recommendations:
use variables, named constants and functions to solve the problem.
*/
#include <iostream>
#include <string>

const int SECONDS_IN_ONE_MINUTE = 60;
enum Landscape
{
    UNKNOWN = -1,
    FOREST = 1,
    TUNDRA = 2,
    HILLS = 3,
};

namespace mammoth
{
    const int SECONDS_PER_ONE_STEP_IN_FOREST = 4;
    const int SECONDS_PER_ONE_STEP_IN_TUNDRA = 3;
    const int SECONDS_PER_ONE_STEP_IN_HILLS = 5;
    int number_of_steps(Landscape in_specific_landscape)
    {
        int number_of_steps{};
        switch (in_specific_landscape)
        {
        case FOREST:
            number_of_steps = SECONDS_IN_ONE_MINUTE / SECONDS_PER_ONE_STEP_IN_FOREST;
            break;
        case TUNDRA:
            number_of_steps = SECONDS_IN_ONE_MINUTE / SECONDS_PER_ONE_STEP_IN_TUNDRA;
            break;
        case HILLS:
            number_of_steps = SECONDS_IN_ONE_MINUTE / SECONDS_PER_ONE_STEP_IN_HILLS;
            break;
        default:
            number_of_steps = UNKNOWN;
            break;
        }
        return number_of_steps;
    }
} // namespace mammoth

namespace flea
{
    const int STEPS_PER_ONE_SECOND_IN_FOREST = 3;
    const int STEPS_PER_ONE_SECOND_IN_TUNDRA = 3;
    const int STEPS_PER_ONE_SECOND_IN_HILLS = 5;
    int number_of_steps(Landscape in_specific_landscape)
    {
        int number_of_steps{};
        switch (in_specific_landscape)
        {
        case FOREST:
            number_of_steps = SECONDS_IN_ONE_MINUTE * STEPS_PER_ONE_SECOND_IN_FOREST;
            break;
        case TUNDRA:
            number_of_steps = SECONDS_IN_ONE_MINUTE * STEPS_PER_ONE_SECOND_IN_TUNDRA;
            break;
        case HILLS:
            number_of_steps = SECONDS_IN_ONE_MINUTE * STEPS_PER_ONE_SECOND_IN_HILLS;
            break;
        default:
            number_of_steps = UNKNOWN;
            break;
        }
        return number_of_steps;
    }
} // namespace flea

void print(int number_of_steps, std::string const &in_specific_landscape);

int main()
{
    int steps = mammoth::number_of_steps(FOREST) + flea::number_of_steps(FOREST);
    print(steps, "in forest.");
    steps = mammoth::number_of_steps(TUNDRA) + flea::number_of_steps(TUNDRA);
    print(steps, "in tundra.");
    steps = mammoth::number_of_steps(HILLS) + flea::number_of_steps(HILLS);
    print(steps, "in hills.");
}

void print(int number_of_steps, std::string const &in_specific_landscape)
{
    std::cout << "Mammoth and flea made " << number_of_steps << " steps " << in_specific_landscape << '\n';
}