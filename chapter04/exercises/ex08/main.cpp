/*Выполните упражнение 7, но с применением операции new для размещения
структуры в свободном хранилище вместо объявления структурной перемен­ной.
Кроме того, сделайте так, чтобы программа сначала запрашивала диаметр
пиццы, а потом — наименование компании.*/

#include <iostream>
#include <string>

struct PizzaInfo
{
    std::string company_name;
    double diameter;
    double weight;
};

int main()
{
    PizzaInfo *NewPizza = new PizzaInfo;
    std::cout << "Enter the diameter of the pizza: ";
    std::cin >> NewPizza->diameter;
    std::cin.get();
    std::cout << "Enter the name of the pizza company: ";
    std::getline(std::cin, NewPizza->company_name);
    std::cout << "Enter the weight of the pizza: ";
    std::cin >> NewPizza->weight;
    std::cout << "\nThe company name: " << NewPizza->company_name << '\n';
    std::cout << "Diameter: " << NewPizza->diameter << '\n';
    std::cout << "Weight: " << NewPizza->weight << '\n';
    delete NewPizza;
}