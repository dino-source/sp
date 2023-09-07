#include <iostream>
#include <string>

struct ex01
{
    static std::string task_description()
    {
        return "Stephen Prata's \"C++ Primer Plus\" (Sixth Edition)\n"

               "Chapter 2. Exercise 1.\n"

               "Write a C++ program that displays your name and"
               " address(or if you value your privacy,"
               " a fictitious name and address).\n\n";
    }
    static void run_solution()
    {
        std::cout << "Name: Lada\nAddress: Lemon St.11\n";
    }
};