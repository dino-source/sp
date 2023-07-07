// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 1.

// Write a C++ program that displays your name and address (or if you value your
// privacy, a fictitious name and address).
#include <iostream>
#include <string>

int main()
{
    std::string address = "Gantiadi, 24";
    std::string first_name = "Nadia";
    std::string last_name = "Sitkareva";
    char delimiter = '\n';
    std::cout 
        << "First name: " << first_name << delimiter 
        << "Last name: " << last_name << delimiter
        << "Address: " << address << delimiter;
}