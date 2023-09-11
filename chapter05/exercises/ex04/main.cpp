/* Дафна инвестировала $100 под простые 10%. Другими словами, ежегодно
инве­стиция должна приносить 10% инвестированной суммы, т.е. $10 каждый год:
прибыль = 0,10 х исходный баланс;

В то же время Клео инвестировала $100 под сложные 5%. Это значит, что прибыль
составит 5% от текущего баланса, включая предыдущую накопленную прибыль:
прибыль = 0,05 х текущий баланс;
Клео зарабатывает 5% от $100 в первый год, что дает ей $105. На следующий
год она зарабатывает 5% от $105, что составляет $5.25, и т.д.

Напишите про­грамму, которая вычислит, сколько лет понадобится для того,
чтобы сумма ба­ланса Клео превысила сумму баланса Дафны, с отображением
значений обоих балансов за каждый год. */

#include <iostream>

int main()
{
    unsigned HUNDRED_DOLLARS = 100;
    double daphne_investment = HUNDRED_DOLLARS;
    double cleo_investment = HUNDRED_DOLLARS;
    double persent_of_original_investment = 10;
    double persent_of_current_balance = 0.05;

    for (int i = 1; daphne_investment >= cleo_investment; i++)
    {
        daphne_investment += persent_of_original_investment;
        cleo_investment += cleo_investment * persent_of_current_balance;
        std::cout << i << " year: Daphne = " << daphne_investment
                  << "; Cleo = " << cleo_investment << '\n';
    }
    return 0;
}