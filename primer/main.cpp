#include "chapter02/chapter02.h" //primer/chapter02/chapter02.h

int main()
{
    std::cout << "Please choose chapter(2-18): ";
    unsigned chapter;
    std::cin >> chapter;
    if (chapter >= 2 && chapter <= 18)
    {
        std::cout << "Please choose number of exercise: ";
        unsigned number_of_exercise;
        std::cin >> number_of_exercise;
        switch (chapter)
        {
        case 2:
            switch (number_of_exercise)
            {
            case 1:
                std::cout << ex01::task_description();
                ex01::run_solution();
                break;
            case 2:
                std::cout << ex02::task_description();
                ex02::run_solution();
                break;
            case 3:
                /* code */
                break;
            case 4:
                /* code */
                break;
            case 5:
                /* code */
                break;
            case 6:
                /* code */
                break;
            case 7:
                /* code */
                break;

            default:
                break;
            }
            break;

        default:
            break;
        }
    }
}