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
#include <string>

void output_message_about_three_blind_mice(); // function declaration (function prototype)
void output_message_about_how_mice_run();     // function declaration (function prototype)
void output(const std::string &message);      // function declaration (function prototype)

int main()
{
   output_message_about_three_blind_mice();   // function call
   output_message_about_three_blind_mice();   // function call
   output_message_about_how_mice_run();       // function call
   output_message_about_how_mice_run();       // function call
   output("Three blind mice!\n");             // function call
   output("Three blind mice!\n");             // function call
   output("See how they run!\n");             // function call
   output("See how they run!\n");             // function call
}

void output_message_about_three_blind_mice()  // function definition
{
    std::cout << "Three blind mice\n";
}

void output_message_about_how_mice_run()      // function definition
{
    std::cout << "See how they run\n";
}

void output(const std::string &message)       // function definition
{
    std::cout << message;
}