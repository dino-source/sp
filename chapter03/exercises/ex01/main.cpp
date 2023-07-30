#include <iostream>

int main()
{
    const int inch_per_pound = 12;
    int hight_in_inches();
    std::cout << "Please, enter your hight in inches:_______\b\b\b\b\b\b\b";
    std::cin >> hight_in_inches;
    int pounds = hight_in_inches / inch_per_pound;
    int inches = hight_in_inches % inch_per_pound;
    std::cout 
        << "Than your hight is: " 
        << pounds 
        << " pounds and " 
        << inches 
        << " inches.\n";


}