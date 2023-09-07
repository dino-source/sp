#include "../helper_library/hw_framework.h"
#include <iostream>

int main()
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
}
