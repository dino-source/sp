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

void output_message_about_three_blind_mice(); // function prototype
void output_message_about_how_mice_run();   // function prototype

int main()
{
    output_message_about_three_blind_mice(); // function call
    output_message_about_three_blind_mice(); // function call
    output_message_about_how_mice_run();    // function call
    output_message_about_how_mice_run();    // function call
}

void output_message_about_three_blind_mice()    // function definition
{
    std::cout << "Three blind mice\n";
}

void output_message_about_how_mice_run()    // function definition
{
    std::cout << "See how they run\n";
}