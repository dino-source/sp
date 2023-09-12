#ifndef SIMPLE_EXAMPLE_01_H
#define SIMPLE_EXAMPLE_01_H

#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
#include <ranges>

#include "../../../helper_library/helper_functions.h"

namespace ch05::se01
{
    std::string td_header = "\n===== Task Description =====\n";
    std::string task_description =
        td_header + "Print all the elements of the given vector one by one.";
    std::string ps_header = "====== Possible solution =====";

    inline void play_with_loops()
    {
        namespace hlp = cpps::helper_library::utilities;
        hlp::print(task_description, "\n\n");
        hlp::print(ps_header, "\n");
        std::vector<int> ivec{10, 20, 30, 40, 50};
        hlp::print(ivec);

        task_description =
            td_header + "Print all the elements of the given vector backwards.";
        hlp::print(task_description, "\n\n");
        hlp::print(ps_header, "\n");
        std::ranges::sort(ivec, std::greater<>());
        hlp::print(ivec);
        hlp::print();
    }
} // namespace ch05::se01

#endif // SIMPLE_EXAMPLE_01_H