/* Перепишите код из листинга 5.4 с использованием объекта array
вместо встро­енного массива и типа long double вместо long long.
Найдите значение 100! */

#include <iostream>
#include <array>

int main()
{
    const int ArSize = 101;
    std::array<double, ArSize> factorials;

    factorials[1] = factorials[0] = 1LL;

    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];

    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;

    return 0;
}