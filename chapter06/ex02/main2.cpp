/* Напишите программу, читающую в массив double до 10 значений пожертво­ваний.
(Или, если хотите, используйте шаблонный объект array.)
Программа должна прекращать ввод при получении нечисловой величины.
Она должна выдавать среднее значение полученных чисел, а также количество
значений в массиве, превышающих среднее. */

#include <iostream>

int main()
{
    constexpr unsigned NUMBER_OF_DONATIONS{10};
    double donations[NUMBER_OF_DONATIONS];
    std::cout << "Please, enter donation amounts. Max number of donations is "
              << NUMBER_OF_DONATIONS
              << ".\nTo enter less, just input any word (not a number):\n";

    double sum_of_donations{};
    for (unsigned i{}; i < NUMBER_OF_DONATIONS && std::cin >> donations[i]; ++i)
    {
        sum_of_donations += donations[i];
    }

    double average_donation = sum_of_donations / NUMBER_OF_DONATIONS;
    std::cout << "Sum of donations: " << sum_of_donations
              << ".\nAverage donation: " << average_donation << ".\n";

    unsigned number_of_donations_greater_than_average{};

    for (auto donation : donations)
    {
        if (donation > average_donation)
        {
            ++number_of_donations_greater_than_average;
        }
    }

    std::cout << number_of_donations_greater_than_average
              << " donations are greater than average.\n\n";
}
