#ifndef CHAPTER_02_EXERCISE_01_H
#define CHAPTER_02_EXERCISE_01_H

// Stephen Prata's "C++ Primer Plus" (Sixth Edition). Chapter 2. Exercise 1.

// Write a C++ program that displays your name and address (or if you value your
// privacy, a fictitious name and address).

#include <iostream>
#include <string>

namespace ch02::ex01
{
    inline void display_name_and_address()
    {
        std::cout << "Name: Lada\nAddress: Lemon St.11\n";
    }
} // namespace ch02::ex01

#endif // CHAPTER_02_EXERCISE_01_H
