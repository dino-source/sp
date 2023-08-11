/* Write a program that asks you to enter an automobile gasoline consumption figure
in the European style (liters per 100 kilometers) and converts to the U.S. style of
miles per gallon.
Note that in addition to using different units of measurement, the U.S. approach
(distance / fuel) is the inverse of the European approach (fuel / distance).
Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters. Thus, 19
mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.

Made-up example of how it should work:
Enter the number of fuel(l): 12.4
Enter the number of distance(km): 100
12.4 l/100 km is 19 miles per gallon.

Напишите программу, которая запрашивает расход бензина в европейском
стиле (количество литров на 100 км) и преобразует его в стиль, принятый в
США — число миль на галлон. Обратите внимание, что кроме использования
других единиц измерений, принятый в США подход (расстояние/топливо)
противоположен европейскому (топливо/расстояние). Учтите, что 100 кило­метров
соответствуют 62.14 милям, а 1 галлон составляет 3.875 литра.
Таким образом, 19 миль на галлон примерно равно 12.4 литров на 100 км,
а 27 миль на галлон —примерно 8.7 литров на 100 км.*/

#include <iostream>
#include <string>

using Message = std::string const &;
using Gasoline = double;
using Converting = double;
void print(Message message);

namespace converting
{
    constexpr double gallon_to_liters{3.875};
    constexpr double hundred_km_to_miles{62.14};
}

int main()
{
}

void print(Message message)
{
    std::cout << message;
}

Gasoline convert(Gasoline amount, Converting converting)
{
    return amount * converting;
}