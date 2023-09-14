#include <iostream>
#include <string>
#include <vector>
#include "../helper_library/hw_framework.h"
#include "../helper_library/helper_functions.h"

int main()
{
    namespace hlp = cpps::helper_library::utilities;
    namespace hwu = cpps::helper_library::hw::utilities;
    namespace hwt = cpps::helper_library::hw::types;

    for (std::string user_choice; user_choice != "n" || user_choice != "no";)
    {
        std::string msg = "Please choose chapter (2-18): ";
        int lower_bound = 2;
        int upper_bound = 18;
        int chapter = hlp::get_number_from_user_in_allowed_range(msg, lower_bound, upper_bound);

        lower_bound = 1;
        upper_bound = hwu::get_number_of_exercises_in_chapter(chapter);
        msg = "Please choose number of exercise: ";
        int exercise = hlp::get_number_from_user_in_allowed_range(msg, lower_bound, upper_bound);

        hwt::Solution s(chapter, exercise);
        s.show_task_description();
        s.run_solution();

        std::cout << "\nWould you like run another one? (y/n): ";
        std::getline(std::cin, user_choice);
    }
}
