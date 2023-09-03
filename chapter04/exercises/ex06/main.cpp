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
    CandyBar desert[3]{
        {"Tiramisu", 200.5, 566},
        {"Brownie", 50.8, 233},
        {"Chocho Pudding", 70.5, 271},
    };

    std::cout << desert[0].name << ", " << desert[0].weight << ", "
              << desert[0].calories << ".\n";
    std::cout << desert[1].name << ", " << desert[1].weight << ", "
              << desert[1].calories << ".\n";
    std::cout << desert[2].name << ", " << desert[2].weight << ", "
              << desert[2].calories << ".\n";
}
