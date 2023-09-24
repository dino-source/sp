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

int tax_in_tvarps{0};
void tax_payment_output();

int main()
{
    double const ZERO_PERCENT_TAX{0};       // first 5 000 tvarps
    double const TEN_PERCENT_TAX{0.1};      // next 10 000 tvarps
    double const FIFTEEN_PERCENT_TAX{0.15}; // next 20 000 tvarps
    double const TWENTY_PERCENT_TAX{0.2};   // above 35 000 tvarps

    std::cout << "Enter your income in tvarps: ";
    int income{0};
    std::cin >> income;

    while (std::cin && income >= 0)
    {

        if (income <= 5000)
        {
            tax_in_tvarps = ZERO_PERCENT_TAX;
            tax_payment_output();
        }
        else if (5000 < income <= 15000)
        {
            tax_in_tvarps = (income - 5000) * TEN_PERCENT_TAX;
            tax_payment_output();
        }
        else if (15000 < income <= 35000)
        {
            tax_in_tvarps = (10000 * TEN_PERCENT_TAX) + (income - 15000) * FIFTEEN_PERCENT_TAX;
            tax_payment_output();
        }
        else if (income > 35000)
        {
            tax_in_tvarps = (10000 * TEN_PERCENT_TAX) + (20000 * FIFTEEN_PERCENT_TAX) + (income - 350000) * TWENTY_PERCENT_TAX;
            tax_payment_output();
        }
        std::cout << "Next: ";
        std::cin >> income;
    }
    return 0;
}

void tax_payment_output()
{
    std::cout << "Your payment of tax is " << tax_in_tvarps << " tvarps.\n";
}