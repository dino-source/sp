/* Предположим, что вы продаете книгу по программированию на языке C++ для
начинающих. Напишите программу, которая позволит ввести ежемесячные
объемы продаж в течение года (в количестве книг, а не в деньгах). Программа
должна использовать цикл, в котором выводится приглашение с названием ме­сяца,
применяя массив указателей на char (или массив объектов string , если
вы предпочитаете его), инициализированный строками — названиями месяцев,
и сохраняя введенные значения в массиве int. Затем программа должна найти
сумму содержимого массива и выдать общий объем продаж за год.*/

#include <iostream>
#include <string>

int main()
{
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
    int number_of_sold_books[MONTHS_IN_ONE_YEAR];
    int total_amount_of_sales{0};
    std::cout << "Enter how many sales were in ";

    for (int m{0}; m < MONTHS_IN_ONE_YEAR; m++)
    {
        std::cout << months[m] << ": ";
        std::cin >> number_of_sold_books[m];
        total_amount_of_sales += number_of_sold_books[m];
    };
    std::cout << "The total sales for the year is " << total_amount_of_sales << '\n';
    return 0;
}