#include <iostream>
#include <vector>
#include <string>

#include "hw_framework.h"
#include "hw_task_descriptions.h"

#include "../primer/chapter02/exercises/ex01/ex01.h"
#include "../primer/chapter02/exercises/ex02/ex02.h"

Solution::Solution() : m_chapter{2u}, m_exercise{1u}
{
}

Solution::Solution(unsigned ch, unsigned ex) : m_chapter{ch}, m_exercise{ex}
{
}

void Solution::show_task_description() const
{
    namespace hw = cpps::helper_library::hw;
    if (m_chapter <= 1)
    {
        std::cout << "There is no exercises in chapter 1.\n\n";
    }
    else if (m_chapter > 18)
    {
        std::cout << "There are only 18 chapters.\n\n";
    }
    else
    {
        // TODO: add m_exercise range checking
        std::cout << "\nStephen Prata's \"C++ Primer Plus\" (Sixth Edition).\n\n"
                  << "Chapter " << m_chapter << ". Exercise " << m_exercise << ".\n\n"
                  << "===== Task description =====\n"
                  << hw::task_descriptions[m_chapter - 1][m_exercise - 1] << "\n\n";
    }
}

void Solution::run_solution() const
{
    std::cout << "===== Possible solution =====\n";
    switch (m_chapter)
    {
    case 2:
        switch (m_exercise)
        {
        case 1:
            ch02::ex01::display_name_and_address();
            break;
        case 2:
            ch02::ex02::convert_furlongs_to_yards();
            break;        
        default:
            break;
        }
        break;
    
    default:
        break;
    }
}
