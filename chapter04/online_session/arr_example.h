#ifndef ARR_EXAMPLE_H
#define ARR_EXAMPLE_H
#include <iostream>

void play_with_arrays();
bool is_even(int number);
bool is_odd(int number);

inline void play_with_arrays()
{
    const unsigned NUMBER_OF_PLANETS{8};
    enum Planets
    {
        MERCURY = 62,
        VENUS,
        EARTH,
        MARS,
        JUPITER,
        SATURN,
        URANUS,
        NEPTUNE,
    };
    int solar_system_planets[NUMBER_OF_PLANETS]{MERCURY, VENUS, EARTH, MARS, JUPITER, SATURN, URANUS, NEPTUNE};
    for (unsigned planet_index = 0; planet_index < NUMBER_OF_PLANETS; planet_index++)
    {
        if (!is_odd(planet_index))
        {
            std::cout << solar_system_planets[planet_index] << '\n';
        }
    }
}

bool is_even(int number)
{
    return !is_odd(number);
}

bool is_odd(int number)
{
    return number % 2;
}
#endif // ARR_EXAMPLE_H