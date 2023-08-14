/*Write a program that asks how many miles you have driven and how many gallons
of gasoline you have used and then reports the miles per gallon your car has gotten.
Or, if you prefer, the program can request distance in kilometers and petrol in liters
and then report the result European style, in liters per 100 kilometers.

Напишите программу, которая запрашивает количество миль, пройденных ав­томобилем,
и количество галлонов израсходованного бензина, а затем сообща­ет
значение количества миль на галлон. Или, если хотите, программа может
запрашивать расстояние в километрах, а объем бензина в литрах, и выдавать
результат в виде количества литров на 100 километров.*/

#include <iostream>

int main()
{
    std::cout << "Enter the number of driven miles: ";
    double distance;
    std::cin >> distance;
    std::cout << "Enter the amount of fuel consumed: ";
    double gallons_of_gasoline;
    std::cin >> gallons_of_gasoline;
    double number_of_miles_per_gallon = distance / gallons_of_gasoline;
    std::cout << "Your car has gotten " << number_of_miles_per_gallon << " miles per gallon\n";
}
