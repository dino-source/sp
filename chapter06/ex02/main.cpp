/* Напишите программу, читающую в массив double до 10 значений пожертво­ваний.
(Или, если хотите, используйте шаблонный объект array.)
Программа должна прекращать ввод при получении нечисловой величины.
Она должна выдавать среднее значение полученных чисел, а также количество
значений в массиве, превышающих среднее. */

#include <iostream>
#include <cctype>

int main()
{
    int max_value{10};
    double donation[max_value];
    std::cout << "Enter the donation value. ";
    std::cout << "You may enter " << max_value << " donations.\n";
    std::cout << "donation #1: ";
    int donation_number{0};
    int donation_value{0};

    while (donation_number < max_value && std::cin >> donation[donation_number])
    {
        if (++donation_number < max_value)
        {
            std::cout << "donation #" << donation_number + 1 << ": ";
        }
    }

    double total{0.0};
    for (donation_value = 0; donation_value < donation_number; donation_value++)
    {
        total += donation[donation_value];
    }
    double average_value = total / donation_value;
    std::cout << "Sum of donations is " << total << ".\n";
    std::cout << average_value << " average value of donation.\n";

    while (donation[donation_value] > average_value)
    {
        std::cout << donation[donation_value] << " is above average.";
    }

    return 0;
}
