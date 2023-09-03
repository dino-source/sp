/*Структура CandyBar содержит три члена. Первый из них хранит название
ко­робки конфет. Второй — ее вес (который может иметь дробную часть),
а тре­тий — число калорий (целое значение). Напишите программу, объявляющую
эту структуру и создающую переменную типа CandyBar по имени snack, ини­циализируя
ее члены значениями "Mocha Munch", 2.3 и 350, соответственно.
Инициализация должна быть частью объявления snack. И, наконец, программа
должна отобразить содержимое этой переменной.*/

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
    CandyBar snack{"Mocha Munch", 2.3, 350};
    std::cout << snack.name << ", "
              << snack.weight << ", "
              << snack.calories << '\n';
}