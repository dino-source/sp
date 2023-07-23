// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 5.

// Write a program that has main() call a user-defined function that takes a Celsius
// temperature value as an argument and then returns the equivalent Fahrenheit value.
// The program should request the Celsius value as input from the user and display
// the result, as shown in the following code:
// Please enter a Celsius value: 20
// 20 degrees Celsius is 68 degrees Fahrenheit.
// For reference, here is the formula for making the conversion:
// Fahrenheit = 1.8 × degrees Celsius + 32.0

#include <iostream>

int main ()
{
    int degrees_celsius;
    int fahrenheit;

    std::cout << "Please, enter a Celsius value: ";
    std::cin >> degrees_celsius;
    fahrenheit = 1.8 * degrees_celsius + 32;
    std::cout
        << degrees_celsius
        << " degrees Celsius is "
        << fahrenheit
        << " degrees Fahrenheit.\n";

    return 0;
}


