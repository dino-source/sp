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

void message_about_three_blind_mice(); // function prototype
void message_about_see_how_they_run(); // function prototype

void three_blind_mice()
{
    using namespace std;
   
    cout << "Three blind mice\n";
}

void see_how_they_run()
{
    using namespace std;

    cout << "See how they run\n";
}

int main()
{
    using namespace std;
    cout << "Three blind mice\n";
    cout << "Three blind mice\n";
    cout << "See how they run\n";
    cout << "See how they run\n";
    
    return 0; 
}