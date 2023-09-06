/*Вильям Вингейт (William Wingate) заведует службой анализа рынка пиццы.
О каждой пицце он записывает следующую информацию:
• наименование компании — производителя пиццы, которое может состоять
из более чем одного слова;
• диаметр пиццы;
• вес пиццы.
• Разработайте структуру, которая может содержать всю эту информацию, и
напишите программу, использующую структурную переменную этого типа.
Программа должна запрашивать у пользователя каждый из перечисленных
показателей и затем отображать введенную информацию. Применяйте cin
(или его методы) и cout.*/

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
    PizzaInfo cheeze_pizza{};
    std::cout << "Enter the name of the pizza company: ";
    std::getline(std::cin, cheeze_pizza.company_name);
    std::cout << "Enter the diameter of the pizza: ";
    std::cin >> cheeze_pizza.diameter;
    std::cout << "Enter the weight of the pizza: ";
    std::cin >> cheeze_pizza.weight;
    std::cout << "\nCompany name: " << cheeze_pizza.company_name << '\n';
    std::cout << "Diameter: " << cheeze_pizza.diameter << '\n';
    std::cout << "Weight: " << cheeze_pizza.weight << '\n';
}