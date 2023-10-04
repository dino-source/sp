/*Определите рекурсивную функцию, принимающую целый аргумент и возвра­щающую 
его факториал. Вспомните, что факториал 3 записывается, как 3! и вычисляется
как 3x2! и т.д., 
причем 0! равно 1. В общем случае, если n больше нуля, то n! = n * (n-1)!.
Протестируйте функцию в программе, использующей цикл, где пользователь может 
вводить различные значения, для которых про­грамма вычисляет и отображает факториалы.*/

#include <iostream>

unsigned long int factorial(int n);

int main()
{
    std::cout << "Enter non-negative value (q to quit): ";
    int value{};
    while (std::cin >> value && value >= 0)
    {
        std::cout << value << "! " << factorial(value) << "\nNext value: ";
    }
}

unsigned long int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n*factorial(n - 1);
}