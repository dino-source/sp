#include <iostream>
#include <vector>
#include <string>
#include <functional>

#include "hw_framework.h"
#include "hw_task_descriptions.h"

#include "../primer/chapter02/exercises/ex01/ex01.h"
#include "../primer/chapter02/exercises/ex02/ex02.h"
#include "../primer/chapter02/exercises/ex03/ex03.h"
#include "../primer/chapter02/exercises/ex04/ex04.h"
#include "../primer/chapter02/exercises/ex05/ex05.h"
#include "../primer/chapter02/exercises/ex06/ex06.h"
#include "../primer/chapter02/exercises/ex07/ex07.h"

#include "../primer/chapter03/exercises/ex01/ex01.h"
#include "../primer/chapter03/exercises/ex02/ex02.h"
#include "../primer/chapter03/exercises/ex03/ex03.h"
#include "../primer/chapter03/exercises/ex04/ex04.h"
#include "../primer/chapter03/exercises/ex05/ex05.h"
#include "../primer/chapter03/exercises/ex06/ex06.h"
#include "../primer/chapter03/exercises/ex07/ex07.h"

namespace cpps::helper_library::hw::utilities
{
    int get_number_of_exercises_in_chapter(int chapter)
    {
        std::vector<int> number_of_exercises_in_chaper{
            7, 7, 10, 10, 9, 10, 7, 4, 8, 7, 6, 4, 5, 4, 10, 7, 4};
        size_t index = static_cast<size_t>(chapter) - 2;
        return number_of_exercises_in_chaper[index];
    }
} // namespace cpps::helper_library::hw::utilities

namespace cpps::helper_library::hw::types
{
using fn_ptr = void (*)();
using Solutions = std::vector<fn_ptr>;

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
    std::vector<Solutions> solutions
    {
        {
            ch02::ex01::display_name_and_address,
            ch02::ex02::convert_furlongs_to_yards,
            ch02::ex03::show_running_mice,
            ch02::ex04::show_age_in_months,
            ch02::ex05::run_temperature_converter,
            ch02::ex06::run_space_distance_units_converter,
            ch02::ex07::show_time_in_hours_and_seconds,
        },
        {
            ch03::ex01::inches_to_feet_and_inches,
            ch03::ex02::calculate_bmi,
            ch03::ex03::inches_to_feet_and_inches,
            ch03::ex04::seconds_to_dhms,
            ch03::ex05::calculate_population,
            ch03::ex06::gasoline_per_distance,
            ch03::ex07::gas_per_distance_to_distance_per_gas,
        },
    };
    // We have to subtract 2, due to two facts:
    // 1. Indices in C arrays starts from 0
    // 2. There is no exercises in chapter 1, so we start from chapter 2
    unsigned ch_index = m_chapter - 2;

    // We have to subtract 1, because indices in C arrays start from 0
    unsigned ex_index = m_exercise - 1;

    solutions[ch_index][ex_index]();

}
    
} // namespace cpps::helper_library::hw::types
