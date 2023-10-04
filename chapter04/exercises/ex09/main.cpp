/*Do Programming Exercise 6, but instead of declaring an array of three CandyBar
structures, use new to allocate the array dynamically.*/

#include <iostream>
#include <string>
#include <vector>

struct Candybar
{
    std::string brand_name;
    int kkal;
    double weight;
};

int main()
{
    Candybar *candybar = new Candybar;
    std::cout << "Name of company\n";
    std::cin >> candybar->brand_name;
    std::cout << "Diameter\n";
    std::cin >> candybar->kkal;
    std::cout << "Weight\n";
    std::cin >> candybar->weight;

    std::cout
        << "Candy: " << candybar->brand_name << '\n'
        << candybar->kkal << " Kkal" << '\n'
        << "Weight: " << candybar->weight << '\n';
}