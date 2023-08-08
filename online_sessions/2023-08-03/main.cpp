/*
What to do:
    Implement currency converter.

How to do: 
    Move the code we have in main function to the following functions:
        Money convert(Money amount, ExchangeRate exchange_rate);
        void print(Message message);
        void print(Money converted_amount, Delimiter delim);

    Use the following type-aliases:
        using Message = std::string const &;
        using Delimiter = std::string const &;
        using Money = double;
        using ExchangeRate = double;
*/


#include <iostream>

constexpr double USD_TO_EUR = 0.91;
constexpr double USD_TO_RUB = 93.79;
constexpr double EUR_TO_USD = 1.09;
constexpr double EUR_TO_RUB = 103.00;
constexpr double RUB_TO_USD = 0.011;
constexpr double RUB_TO_EUR = 0.0097;

int main()
{
    double money_amount{100};

    double eur = money_amount * USD_TO_EUR;
    std::cout << "Usd to eur: " << eur << "\n";

    double rub = money_amount * USD_TO_RUB;
    std::cout << "Usd to rub: " << rub << "\n";

    rub = money_amount * EUR_TO_RUB;
    std::cout << "Eur to rub: " << rub << "\n";
}