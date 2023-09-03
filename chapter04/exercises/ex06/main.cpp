/*Структура CandyBar включает три члена, как описано в предыдущем упражне­нии.
Напишите программу, которая создает массив из трех структур CandyBar,
инициализирует их значениями по вашему усмотрению и затем отображает
со­держимое каждой структуры.*/

#include <iostream>
#include <string>

struct CandyBar
{
    std::string name;
    double weight;
    int calories;
};

int main()
{
    CandyBar dessert[3]{
        {"Tiramisu", 200.5, 566},
        {"Brownie", 50.8, 233},
        {"Chocho Pudding", 70.5, 271},
    };

    std::cout << dessert[0].name << ", " << dessert[0].weight << ", "
              << dessert[0].calories << ".\n";
    std::cout << dessert[1].name << ", " << dessert[1].weight << ", "
              << dessert[1].calories << ".\n";
    std::cout << dessert[2].name << ", " << dessert[2].weight << ", "
              << dessert[2].calories << ".\n";
}
