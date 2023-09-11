#ifndef SIMPLE_EXAMPLE_01_H
#define SIMPLE_EXAMPLE_01_H

#include <iostream>
#include <vector>
#include <string>

namespace ch05::se01
{
    std::string task_description("\n===== Task Description =====\n"
                                 "Print all the elements of the given vector one by one.\n\n"
                                 "====== Possible solution =====\n");
    inline void play_with_loops()
    {
        std::cout << task_description;
        std::vector<int> ivec{10, 20, 30, 40, 50};
        for (int element : ivec)
        {
            std::cout << element << ' ';
        }

        task_description = "\n\n===== Task Description =====\n"
                           "Print all the elements of the given vector backwards.\n\n"
                           "====== Possible solution =====\n";
        std::cout << task_description;
        for (int i = static_cast<int>(ivec.size()) - 1; i >= 0; i--)
        {
            std::cout << ivec[i] << ' ';
        }
    }
} // namespace ch05::se01

#endif // SIMPLE_EXAMPLE_01_H