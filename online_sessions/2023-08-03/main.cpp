#include <iostream>
// 0.91 - usd to eur
// 93.79 - usd to rub
// 103.00 - eur to rub
// 1.09 - eur to usd

int main()
{
    double money_amount{100};
    
    const double CURRENCY_USD_TO_EUR{0.91};
    double eur = money_amount * CURRENCY_USD_TO_EUR;
    std::cout << "Usd to eur: " << eur << "\n";

    const double CURRENCY_USD_TO_RUB{93.79};
    double rub = money_amount * CURRENCY_USD_TO_RUB;
    std::cout << "Usd to rub: " << rub << "\n";

    const double CURRENCY_EUR_TO_RUB{103.00};
    rub = money_amount * CURRENCY_EUR_TO_RUB;
    std::cout << "Eur to rub: " << rub << "\n"; 

}