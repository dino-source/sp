#ifndef CHAPTER_05_SIMPLE_EXAMPLE_03_H
#define CHAPTER_05_SIMPLE_EXAMPLE_03_H

#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
#include <ranges>

#include "../../../helper_library/helper_functions.h"

namespace ch05::se03
{
    std::string td_header = "\n===== Task Description =====\n";
    std::string task_description =
        td_header + "Print all positive elements of the given vector that multiply"
                    " by five one by one.";
    std::string ps_header = "====== Possible solution =====";

    inline void play_with_loops()
    {
        namespace hlp = cpps::helper_library::utilities;
        hlp::print(task_description, "\n\n");
        hlp::print(ps_header, "\n");
        std::vector<int> ivec{23, 40, 72, 55, -1, -5, 92, -9, 43, -7, 22};
        for (const auto &elem : ivec)
        {
            if (elem >= 20 && elem < 50)
                std::cout << elem << ' ';

            if (elem >= 80 && elem < 99)
                std::cout << elem << ' ';
        }
        std::cout << '\n';
    }
} // namespace ch05::se03

#endif // CHAPTER_05_SIMPLE_EXAMPLE_03_H
