#include <iostream>
#include <string>
#include <vector>
#include "../helper_library/hw_framework.h"

int get_number_from_user_in_allowed_range(
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

int get_number_of_exercises_in_chapter(int chapter)
{
    std::vector<int> number_of_exercises_in_chaper{
        7, 7, 10, 10, 9, 10, 7, 4, 8, 7, 6, 4, 5, 4, 10, 7, 4};
    size_t index = static_cast<size_t>(chapter) - 2;
    return number_of_exercises_in_chaper[index];
}

int main()
{
    std::string msg = "Please choose chapter (2-18): ";
    int lower_bound = 2;
    int upper_bound = 18;
    int chapter = get_number_from_user_in_allowed_range(msg, lower_bound, upper_bound);

    lower_bound = 1;
    upper_bound = get_number_of_exercises_in_chapter(chapter);
    msg = "Please choose number of exercise: ";
    int exercise = get_number_from_user_in_allowed_range(msg, lower_bound, upper_bound);

    Solution s(chapter, exercise);
    s.show_task_description();
    s.run_solution();
}
