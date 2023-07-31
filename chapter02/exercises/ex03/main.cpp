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

void func1();
void func2();

int main()
{
    func1();
    func1();
    func2();
    func2();
}

void func1()
{
    std::cout << "Thee blind mice\n";
}

void func2()
{
    std::cout << "See how they run\n";
}