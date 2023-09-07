/*Выполните упражнение 6, но вместо объявления массива из трех структур
CandyBar используйте операцию new для динамического размещения массива.*/

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
    std::cout << "Enter the number of desserts: ";
    unsigned num_of_desserts;
    std::cin >> num_of_desserts;
    CandyBar *dessert = new CandyBar[num_of_desserts];

    *(dessert + 0) = {"Tiramisu", 200.5, 566};
    *(dessert + 1) = {"Brownie", 50.8, 233};
    *(dessert + 2) = {"Chocho Pudding", 70.5, 271};

    std::cout << dessert[0].name << ", " << dessert[0].weight << ", "
              << dessert[0].calories << ".\n";
    std::cout << dessert[1].name << ", " << dessert[1].weight << ", "
              << dessert[1].calories << ".\n";
    std::cout << dessert[2].name << ", " << dessert[2].weight << ", "
              << dessert[2].calories << ".\n";
    delete[] dessert;
}