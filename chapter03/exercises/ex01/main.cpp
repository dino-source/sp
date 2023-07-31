#include <iostream>

int main()
{
    const int INCH_PER_POUND = 12;
    int height_in_inches{};
    std::cout << "Please, enter your height in inches:_______\b\b\b\b\b\b\b";
    std::cin >> height_in_inches;
    int pounds = height_in_inches / INCH_PER_POUND;
    int inches = height_in_inches % INCH_PER_POUND;
    std::cout
        << "Then your height is: "
        << pounds
        << " pounds and "
        << inches
        << " inches.\n";
}