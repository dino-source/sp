#include <iostream>
#include <string>
#include <vector>

#include "../helper_library/hw_framework.h"
#include "../helper_library/helper_functions.h"
#include "../helper_library/common_types.h"
#include "../primer/chapter05/online_session/se02.h"

int main()
{
    namespace hlp = cpps::helper_library::utilities;
    namespace hwu = cpps::helper_library::hw::utilities;
    namespace hwt = cpps::helper_library::hw::types;

    for (std::string user_choice{"y"};
         user_choice[0] != 'n' && user_choice[0] != 'N';
         std::getline(std::cin, user_choice))
    {
        std::string msg = "Please choose either hw-exercises (1) or online-sessions (2): ";
        uint lower_bound = 1;
        uint upper_bound = 2;
        uint hw_vs_os = hlp::get_number_from_user_in_allowed_range(msg, lower_bound, upper_bound);

        msg = "Please choose chapter (2-18): ";
        lower_bound = 2;
        upper_bound = 18;
        uint chapter = hlp::get_number_from_user_in_allowed_range(msg, lower_bound, upper_bound);

        lower_bound = 1;
        upper_bound = hwu::get_number_of_exercises_in_chapter(chapter);
        msg = "Please choose number of exercise: ";
        uint exercise = hlp::get_number_from_user_in_allowed_range(msg, lower_bound, upper_bound);

        if (hw_vs_os == 1) {
            hwt::Solution s(chapter, exercise);
            s.show_task_description();
            s.run_solution();
        }
        else if (hw_vs_os == 2) {
            // TODO: implement hwt::Solution-like class to be able to run 
            // specified se (aka simple example) from chapterX/online_session
            ch05::se02::play_with_loops();
        }

        std::cout << "\nWould you like run another one? (y/n): ";
        
    }
    std::cout << "Thank you for using our program. Have a nice day!\n\n";
}
