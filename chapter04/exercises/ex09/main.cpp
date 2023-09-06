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
    CandyBar *dessert = new CandyBar[3];
} // I don't understand how to do it at all :/