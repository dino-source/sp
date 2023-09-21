#ifndef CHAPTER_06_SIMPLE_EXAMPLE_01_H
#define CHAPTER_06_SIMPLE_EXAMPLE_01_H

#include <iostream>
#include <vector>
#include <string>

namespace ch06::se01
{
    inline void play_with_if_statements()
    {
        std::vector<std::string> companies{"audi", "ford", "bmw", "fiat", "kia"};
        std::vector<std::string> customers{"lada", "igor", "oleg", "alex", "jonah"};

        for (std::size_t i = 0; i < companies.size() - 1; i++)
        {
            if (companies[i][0] > companies[i + 1][0])
            {
                /* code */
            }
        }
    }
} // namespace ch06::se01

#endif // CHAPTER_06_SIMPLE_EXAMPLE_01_H