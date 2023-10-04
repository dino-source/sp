/*The CandyBar structure contains three members, as described in Programming
Exercise 5.Write a program that creates an array of three CandyBar structures, ini-
tializes them to values of your choice, and then displays the contents of each struc-
ture.*/

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

    Candybar snack{"Mocha Munch", 350, 2.3};
    Candybar choco{"Choco Pie", 600, 85};
    Candybar coco{"Rafaello", 450, 3.4};

    std::cout
        << "Candy: " << snack.brand_name << '\n'
        << snack.kkal << " Kkal" << '\n'
        << "Weight: " << snack.weight << '\n'
        << "Candy: " << choco.brand_name << '\n'
        << choco.kkal << " Kkal" << '\n'
        << "Weight: " << choco.weight << '\n'
        << "Candy: " << coco.brand_name << '\n'
        << coco.kkal << " Kkal" << '\n'
        << "Weight: " << coco.weight << '\n';
};
