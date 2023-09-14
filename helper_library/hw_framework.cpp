#include <iostream>
#include <vector>
#include <string>
#include <functional>

#include "hw_framework.h"
#include "hw_task_descriptions.h"
#include "hw_exercise_headers.h"

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
        {
            ch04::ex01::show_name_and_grade,
            ch04::ex02::read_space_separated_words,
            ch04::ex03::show_full_name,
            ch04::ex04::show_full_name,
            ch04::ex05::show_candy_bar,
            ch04::ex06::show_candy_bars,
            ch04::ex07::show_pizza_info,
            ch04::ex08::show_pizza_info,
            ch04::ex09::show_candy_bars,
            ch04::ex10::show_average_result_of_three_40m_dashes,
        },
        {
            ch05::ex01::run_solution,
            ch05::ex02::run_solution,
            ch05::ex03::run_solution,
            ch05::ex04::run_solution,
            ch05::ex05::run_solution,
            ch05::ex06::run_solution,
            ch05::ex07::run_solution,
            ch05::ex08::run_solution,
            ch05::ex09::run_solution,
            ch05::ex10::run_solution,
        },
        {
            ch06::ex01::run_solution,
            ch06::ex02::run_solution,
            ch06::ex03::run_solution,
            ch06::ex04::run_solution,
            ch06::ex05::run_solution,
            ch06::ex06::run_solution,
            ch06::ex07::run_solution,
            ch06::ex08::run_solution,
            ch06::ex09::run_solution,
        },
        {
            ch07::ex01::run_solution,
            ch07::ex02::run_solution,
            ch07::ex03::run_solution,
            ch07::ex04::run_solution,
            ch07::ex05::run_solution,
            ch07::ex06::run_solution,
            ch07::ex07::run_solution,
            ch07::ex08::run_solution,
            ch07::ex09::run_solution,
            ch07::ex10::run_solution,
        },
        {
            ch08::ex01::run_solution,
            ch08::ex02::run_solution,
            ch08::ex03::run_solution,
            ch08::ex04::run_solution,
            ch08::ex05::run_solution,
            ch08::ex06::run_solution,
            ch08::ex07::run_solution,
        },
        {
            ch09::ex01::run_solution,
            ch09::ex02::run_solution,
            ch09::ex03::run_solution,
            ch09::ex04::run_solution,
        },
        {
            ch10::ex01::run_solution,
            ch10::ex02::run_solution,
            ch10::ex03::run_solution,
            ch10::ex04::run_solution,
            ch10::ex05::run_solution,
            ch10::ex06::run_solution,
            ch10::ex07::run_solution,
            ch10::ex08::run_solution,
        },
        {
            ch11::ex01::run_solution,
            ch11::ex02::run_solution,
            ch11::ex03::run_solution,
            ch11::ex04::run_solution,
            ch11::ex05::run_solution,
            ch11::ex06::run_solution,
            ch11::ex07::run_solution,
        },
        {
            ch12::ex01::run_solution,
            ch12::ex02::run_solution,
            ch12::ex03::run_solution,
            ch12::ex04::run_solution,
            ch12::ex05::run_solution,
            ch12::ex06::run_solution,
        },
        {
            ch13::ex01::run_solution,
            ch13::ex02::run_solution,
            ch13::ex03::run_solution,
            ch13::ex04::run_solution,
        },
        {
            ch14::ex01::run_solution,
            ch14::ex02::run_solution,
            ch14::ex03::run_solution,
            ch14::ex04::run_solution,
            ch14::ex05::run_solution,
        },
        {
            ch15::ex01::run_solution,
            ch15::ex02::run_solution,
            ch15::ex03::run_solution,
            ch15::ex04::run_solution,
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
