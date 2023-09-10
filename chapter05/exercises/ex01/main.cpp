/* Напишите программу, запрашивающую у пользователя ввод двух целых чисел.
Затем программа должна вычислить и выдать сумму всех целых чисел, лежащих
между этими двумя целыми. Предполагается, что меньшее значение вводится
первым. Например, если пользователь ввел 2 и 9, программа должна сообщить,
что сумма всех целых чисел от 2 до 9 равна 44.*/

#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int first_integer;
    std::cin >> first_integer;
    std::cout << "Enter bigger integer: ";
    int second_bigger_integer;
    std::cin >> second_bigger_integer;
    int sum;
    for (int i = first_integer; i <= second_bigger_integer; i++)
    {
        sum += i;
    }
    std::cout << "The sum of all integers from " << first_integer << " to "
              << second_bigger_integer << " is " << sum << '\n';
}