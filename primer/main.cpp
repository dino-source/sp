#include "../helper_library/hw_framework.h"
#include <iostream>
#include <string>

int main()
{
    struct ExerciseT
    {
        const std::string online_session {"1"};
        const std::string homework {"2"};
    } type_of_exercise;

    for (std::string user_choice;
        user_choice != type_of_exercise.online_session || user_choice != type_of_exercise.homework;
        /* there is no 3rd section in this loop */)
    {
        std::cout << "Please choose what to explore - either online sessions (1) or hw-exercises (2): ";
        std::getline(std::cin, user_choice);
        if (user_choice == type_of_exercise.online_session)
        {
            // TODO: implement this feature
            break;
        }
        else if (user_choice == type_of_exercise.homework)
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
