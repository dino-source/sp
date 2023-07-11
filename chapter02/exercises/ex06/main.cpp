// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 6.

// Write a program that has main() call a user-defined function that takes a distance
// in light years as an argument and then returns the distance in astronomical units.
// The program should request the light year value as input from the user and display
// the result, as shown in the following code:
// Enter the number of light years: 4.2
// 4.2 light years = 265608 astronomical units.
// An astronomical unit is the average distance from the earth to the sun (about
// 150,000,000 km or 93,000,000 miles), and a light year is the distance light travels in
// a year (about 10 trillion kilometers or 6 trillion miles). (The nearest star after the
// sun is about 4.2 light years away.) Use type double (as in Listing 2.4) and this con-
// version factor:
// 1 light year = 63,240 astronomical units


#include <iostream>
#include <cmath>

int main ()
{
    constexpr double ASTONOMICAL_UNITS_IN_LIGHT_YEARS = 63240;
    double light_years;
    std::cout << "Please, enter the number of light years: ";
    std::cin >> light_years;
    double astronomical_units;
    astronomical_units = light_years * ASTONOMICAL_UNITS_IN_LIGHT_YEARS;
    std::cout
        << light_years
        << " light years is "
        << astronomical_units
        << " astonomical units!\n";

    return 0;
}