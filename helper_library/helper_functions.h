#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>

namespace cpps::helper_library::utilities
{
    /*
    This function is to generate random floating point number in range
    from lower_bound to upper_bound
    */
    template <typename T>
    [[nodiscard]] T random_number(T const &&lower_bound, T const &&upper_bound)
    {
        static std::mt19937 generator(time(0));
        std::uniform_real_distribution<> distribution(lower_bound, upper_bound);
        return distribution(generator);
    }

    [[nodiscard]] std::string get_string_from_user()
    {
        std::string user_input;
        std::cin >> user_input;
        return user_input;
    }

    void print(char ch = '\n')
    {
        std::cout << ch;
    }

    template <typename T>
    void print(std::string const &msg, T const &delim = '\n')
    {
        std::cout << msg << delim;
    }

    template <typename T>
    void print(const T &arr)
    {
        for (const auto &elem : arr)
            std::cout << elem << ' ';
        std::cout << '\n';
    }

    inline int get_number_from_user_in_allowed_range(
        std::string const &message_to_user, int lower_bound, int upper_bound)
    {
        std::cout << message_to_user;
        std::string user_choice;
        std::getline(std::cin, user_choice);
        int num = std::stoi(user_choice);
        while (num < lower_bound || num > upper_bound)
        {
            std::cout << "Please choose a number greater than or equal to "
                    << lower_bound
                    << " and less than or equal to "
                    << upper_bound
                    << ".\nOther options are not allowed.\n";
            std::getline(std::cin, user_choice);
            num = std::stoi(user_choice);
        }
        return num;
    }

} // namespace cpps::helper_library::utilities

#endif // HELPER_FUNCTIONS_H
