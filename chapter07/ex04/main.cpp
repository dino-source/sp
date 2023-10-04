/*Многие лотереи в США организованы подобно той, что была смоделирована 
в листинге 7.4. Во всех их вариациях вы должны выбрать несколько чисел 
из одного набора, называемого полем номеров. (Например, вы можете выбрать 
5 чисел из поля 1-47.) Вы также указываете один номер (называемый меганоме­ром) 
из второго диапазона, такого как 1-27. Чтобы выиграть главный приз, вы должны 
правильно угадать все номера. Шанс выиграть вычисляется как веро­ятность угадывания 
всех номеров в поле, умноженная на вероятность угадыва­ния меганомера. Например, 
вероятность выигрыша в описанном здесь приме­ре вычисляется как вероятность 
угадывания 5 номеров из 47, умноженная на вероятность угадывания одного номера из 
27. Модифицируйте листинг 7.4 для вычисления вероятности выигрыша в такой лотерее.*/

#include <iostream>

void message();
long double probability(unsigned numbers, unsigned picks);

int main()
{
    message();
    double total{};
    double choices{};
    double meganum{};
    double limit{};
    while ((std::cin >> total >> choices) && choices <= total)
    {
        std::cout << "Enter the total number of choices on the game card and\n"
                  << "the number of picks allowed for the Mega Number:\n";
        if((std::cin >> limit >> meganum) && meganum <= limit);
        {
            std::cout << "You have one chance in ";
            std::cout << probability(total, choices) * probability(limit, meganum);
            std::cout << " of winning. \n";
        }
        std::cout << "Next two numbers(q to quit): ";
    }
    std::cout << "Done\n";
}

void message()
{
    std::cout << "Enter the total number of choices on the game card and\n"
              << "the number of picks allowed:\n" ;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}