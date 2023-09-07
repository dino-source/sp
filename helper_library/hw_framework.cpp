#include "hw_framework.h"
#include "hw_task_descriptions.h"
#include <iostream>
#include <vector>
#include <string>

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
                  << "Task description:\n"
                  << hw::task_descriptions[m_chapter - 1][m_exercise - 1] << "\n\n";
    }
}

void Solution::run_solution() const
{
    // TODO: implement this member function
}
