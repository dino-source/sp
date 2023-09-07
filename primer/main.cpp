#include "../helper_library/hw_framework.h"
#include <iostream>
#include <string>

int main()
{
    for (std::string user_choice; user_choice != "1" || user_choice != "2"; /* no 3rd section */)
    {
        std::cout << "Please choose what to explore - either online sessions (1) or hw-exercises (2): ";
        std::getline(std::cin, user_choice);
        if (user_choice == "1")
        {
            // TODO: implement this feature
            break;
        }
        else if (user_choice == "2")
        {
            std::cout << "Please choose chapter(2-18): ";
            unsigned chapter;
            std::cin >> chapter;
            std::cout << "Please choose number of exercise: ";
            unsigned number_of_exercise;
            std::cin >> number_of_exercise;

            Solution s(chapter, number_of_exercise);
            s.show_task_description();
            s.run_solution(); // TODO: implement this member function
            break;
        }
        else
        {
            std::cout << "Please choose either 1 or 2. Other options are not allowed.\n";
        }
    }
}
