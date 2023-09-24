/*Королевство Нейтрония, где денежной единицей служит тварп, использует
сле­дующую шкалу налогообложения:
первые 5 ООО тварпов — налог 0%
следующие 10 ООО тварпов — налог 10%
следующие 20 000 тварпов — налог 15%
свыше 35 000 тварпов — налог 20%
Например, если некто зарабатывает 38 000 тварпов, то он должен заплатить
на­логов 5000 х 0,00 + 10000 х 0,10 + 20000 х 0,15 + 3000 х 0,20, или 4600 тварпов.
Напишите программу, которая использует цикл для запроса доходов и выдачи
подлежащего к выплате налога. Цикл должен завершаться, когда пользователь
вводит отрицательное или нечисловое значение.*/

#include <iostream>

void tax_payment_output(double tax_in_tvarps);

int main()
{
    int const TAX_LEVEL_1{5000};
    int const TAX_LEVEL_2{15000};
    int const TAX_LEVEL_3{35000};

    double const ZERO_PERCENT_TAX{0};       // first 5 000 tvarps
    double const TEN_PERCENT_TAX{0.1};      // next 10 000 tvarps
    double const FIFTEEN_PERCENT_TAX{0.15}; // next 20 000 tvarps
    double const TWENTY_PERCENT_TAX{0.2};   // greater than 35 000 tvarps

    std::cout << "Enter your income in tvarps: ";

    for (double income{0}, tax_in_tvarps{0};
         std::cin >> income && income >= 0;
         std::cout << "Next: ")
    {
        if (income <= TAX_LEVEL_1)
        { // 4000 -> tax = 0
            // 5000 -> tax = 0
            tax_in_tvarps = ZERO_PERCENT_TAX;
        }
        else if (TAX_LEVEL_1 < income && income <= TAX_LEVEL_2)
        {
            // 14000 -> tax = (14000 - 5000)
            tax_in_tvarps = (income - TAX_LEVEL_1) * TEN_PERCENT_TAX;
        }
        else if (TAX_LEVEL_2 < income && income <= TAX_LEVEL_3)
        { // 11000 -> tax = (10000 * 0.1) + ((11000 - 10000) * 0.15)
            tax_in_tvarps = (10000 * TEN_PERCENT_TAX) +
                            ((income - TAX_LEVEL_2) * FIFTEEN_PERCENT_TAX);
        }
        else if (income > TAX_LEVEL_3)
        {
            tax_in_tvarps = (10000 * TEN_PERCENT_TAX) +
                            (20000 * FIFTEEN_PERCENT_TAX) +
                            (income - TAX_LEVEL_3) * TWENTY_PERCENT_TAX;
        }
        tax_payment_output(tax_in_tvarps);
    }
}

void tax_payment_output(double tax_in_tvarps)
{
    std::cout << "Your payment of tax is " << tax_in_tvarps << " tvarps.\n";
}