#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>

#include "common_types.h"

namespace cpps::helper_library::utilities
{
    /*
    This function is to generate random floating point number in range
    from lower_bound to upper_bound
    */
    [[nodiscard]] auto random_number(auto const &&lower_bound, auto const &&upper_bound)
    {
        static std::mt19937 generator(static_cast<unsigned long>(time(0)));
        std::uniform_real_distribution<> distribution(lower_bound, upper_bound);
        return distribution(generator);
    }

    [[nodiscard]] inline std::string get_string_from_user()
    {
        std::string user_input;
        std::cin >> user_input;
        return user_input;
    }

    inline void print(char ch = '\n')
    {
        std::cout << ch;
    }

    void print(std::string const &msg, auto const &delim = '\n')
    {
        std::cout << msg << delim;
    }

    void print(auto const &arr)
    {
        for (const auto &elem : arr)
        {
            std::cout << elem << ' ';
        }
        std::cout << '\n';
    }

    inline bool is_in_allowed_range(std::string const &user_choice) {
        return user_choice == "1" || user_choice == "2" || user_choice == "3" ||
            user_choice == "4" || user_choice == "5" || user_choice == "6" ||
            user_choice == "7" || user_choice == "8" || user_choice == "9" ||
            user_choice == "10" || user_choice == "11" || user_choice == "12" ||
            user_choice == "13" || user_choice == "14" || user_choice == "15" ||
            user_choice == "16" || user_choice == "17" || user_choice == "18";
    }

    inline uint get_number_from_user_in_allowed_range(
        std::string const &message_to_user, unsigned lower_bound, unsigned upper_bound)
    {
        std::cout << message_to_user;
        std::string user_choice;
        std::getline(std::cin, user_choice);
        
        uint num {};
        if (is_in_allowed_range(user_choice))
        {
            num = static_cast<uint>(std::stoi(user_choice));
        }
        
        while (num < lower_bound || num > upper_bound)
        {
            std::cout << "Please choose a number greater than or equal to "
                    << lower_bound
                    << " and less than or equal to "
                    << upper_bound
                    << ".\nOther options are not allowed.\n";
            std::getline(std::cin, user_choice);
            if (is_in_allowed_range(user_choice))
            {
                num = static_cast<uint>(std::stoi(user_choice));
            }
        }
        return num;
    }

} // namespace cpps::helper_library::utilities

#endif // HELPER_FUNCTIONS_H
