/*Do Programming Exercise 7 but use new to allocate a structure instead of declaring
a structure variable.Also have the program request the pizza diameter before it
requests the pizza company name.*/

#include <iostream>
#include <string>

struct Pizza
{
    std::string name_of_company;
    double diameter_of_pizza;
    double weight_of_pizza;
};

int main()
{
    Pizza *pizza = new Pizza;
    std::cout << "Name of company\n";
    std::cin >> pizza->name_of_company;
    std::cout << "Diameter\n";
    std::cin >> pizza->diameter_of_pizza;
    std::cout << "Weight\n";
    std::cin >> pizza->weight_of_pizza;

    std::cout << "Diameter: " << pizza->diameter_of_pizza << '\n';
    std::cout << "Name of company: " << pizza->name_of_company << '\n';
    std::cout << "Weight: " << pizza->weight_of_pizza << '\n';
}