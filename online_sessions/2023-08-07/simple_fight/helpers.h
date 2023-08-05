#ifndef HELPERS_H
#define HELPERS_H

#include <random>
#include <ctime>

/*
This function is to get random floating point number
in range from lower_bound to upper_bound
*/
template <typename T>
T get_random_number(const T &&lower_bound, const T &&upper_bound)
{
    static std::mt19937 generator(time(0));
    std::uniform_real_distribution<> distribution(lower_bound, upper_bound);
    return distribution(generator);
}
#endif // HELPERS_H
