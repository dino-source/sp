/* Напишите программу, которая приглашает пользователя вводить числа. После
каждого введенного значения программа должна выдавать накопленную сумму
введенных значений. Программа должна завершаться при вводе 0.*/

#include <iostream>

int main()
{
    std::cout << "Enter a number(type \"0\" to end a cycle): ";
    int number = 0;
    int sum = 0;
    std::cin >> number;
    for (; number != 0;)
    {
        std::cout << "Sum = " << (sum += number) << '\n';
        std::cout << "Enter a number: ";
        std::cin >> number;
    }
    return 0;
}