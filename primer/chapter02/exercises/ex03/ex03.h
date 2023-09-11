// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 3.

// Write a C++ program that uses three user-defined functions (counting main() as
// one) and produces the following output:
// Three blind mice
// Three blind mice
// See how they run
// See how they run
// One function, called two times, should produce the first two lines, and the remain-
// ing function, also called twice, should produce the remaining output.

#include <iostream>

namespace ch02::ex03
{
    void three_blind_mice(); // function prototype
    void see_how_they_run(); // function prototype
    void show_running_mice();

    inline void show_running_mice()
    {
        three_blind_mice();
        three_blind_mice();
        see_how_they_run();
        see_how_they_run();
    }

    inline void three_blind_mice()
    {
        std::cout << "Three blind mice\n";
    }

    inline void see_how_they_run()
    {
        std::cout << "See how they run\n";
    }
} // namespace ch02::ex03
