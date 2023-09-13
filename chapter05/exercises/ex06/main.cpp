/* Выполните упражнение 5, но используя двумерный массив для сохранения дан­ных
о месячных продажах за 3 года. Выдайте общую сумму продаж за каждый
год и за все годы вместе.*/

#include <iostream>
#include <string>

int main()
{
    const int YEARS = 3;
    const int MONTHS_IN_ONE_YEAR = 12;
    const std::string months[MONTHS_IN_ONE_YEAR]{
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };
    int number_of_sold_books[YEARS][MONTHS_IN_ONE_YEAR];
    int amount_of_sales_in_one_year[YEARS]{0};
    int total_amount_of_sales{0};

    std::cout << "Enter how many books were sold in ";
    for (int year{0}; year < YEARS; year++)
    {
        std::cout << "a year " << year + 1 << '\n';

        for (int sales = 0; sales < MONTHS_IN_ONE_YEAR; sales++)
        {
            std::cout << months[sales] << ": ";
            std::cin >> number_of_sold_books[year][sales];
            amount_of_sales_in_one_year[year] += number_of_sold_books[year][sales];
        }
        total_amount_of_sales += amount_of_sales_in_one_year[year];
    }

    for (int i{0}; i < YEARS; i++)
    {
        std::cout << i + 1 << " year sales: " << amount_of_sales_in_one_year[i] << '\n';
    }
    std::cout << "The total amount of sales is " << total_amount_of_sales << '\n';
    return 0;
}