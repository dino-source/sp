#ifndef HELPERS_H
#define HELPERS_H

#include <random>
#include <ctime>

template <typename T>
T random(const T &&begin, const T &&end)
{
    static std::mt19937 generator(time(0));
    std::uniform_real_distribution<> distribution(begin, end);
    return distribution(generator);
}
#endif // HELPERS_H
