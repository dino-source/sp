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
#include <string>

using Money = double;
using ExchangeRate = double;
using Message = std::string const &;
using Delimiter = std::string const &;

namespace exchange_rate
{
    constexpr double USD_TO_EUR = 0.91;
    constexpr double USD_TO_RUB = 93.79;
    constexpr double EUR_TO_USD = 1.09;
    constexpr double EUR_TO_RUB = 103.00;
    constexpr double RUB_TO_USD = 0.011;
    constexpr double RUB_TO_EUR = 0.0097;
}

namespace currency_pair
{
    constexpr int USD_TO_EUR = 1;
    constexpr int USD_TO_RUB = 2;
    constexpr int EUR_TO_USD = 3;
    constexpr int EUR_TO_RUB = 4;
    constexpr int RUB_TO_USD = 5;
    constexpr int RUB_TO_EUR = 6;
}

Money convert(Money amount, ExchangeRate exchange_rate);
void print(Message message);
void print(Money converted_amount, Delimiter delim);

int main()
{
    const int WRONG_USER_INPUT = -1;
    Money amount{100};
    print("Please enter currency pair to convert:\n"
          "USD_TO_EUR - 1\n"
          "USD_TO_RUB - 2\n"
          "EUR_TO_USD - 3\n"
          "EUR_TO_RUB - 4\n"
          "RUB_TO_USD - 5\n"
          "RUB_TO_EUR - 6\n");
    int user_choice{};
    std::cin >> user_choice;
    Money converted_amount{};
    switch (user_choice)
    {
    case currency_pair::USD_TO_EUR:
        converted_amount = convert(amount, exchange_rate::USD_TO_EUR);
        break;
    case currency_pair::USD_TO_RUB:
        converted_amount = convert(amount, exchange_rate::USD_TO_RUB);
        break;
    case currency_pair::EUR_TO_USD:
        converted_amount = convert(amount, exchange_rate::EUR_TO_USD);
        break;
    case currency_pair::EUR_TO_RUB:
        converted_amount = convert(amount, exchange_rate::EUR_TO_RUB);
        break;
    case currency_pair::RUB_TO_USD:
        converted_amount = convert(amount, exchange_rate::RUB_TO_USD);
        break;
    case currency_pair::RUB_TO_EUR:
        converted_amount = convert(amount, exchange_rate::RUB_TO_EUR);
        break;
    default:
        converted_amount = WRONG_USER_INPUT;
        break;
    }
    print("Converted amount:  ");
    print(converted_amount, "\n");
}

Money convert(Money amount, ExchangeRate exchange_rate)
{
    return amount * exchange_rate;
}

void print(Message message)
{
    std::cout << message;
}

void print(Money converted_amount, Delimiter delim)
{
    std::cout << converted_amount << delim; 
}