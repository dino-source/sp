/* Write a program that asks you to enter an automobile gasoline consumption figure
in the European style (liters per 100 kilometers) and converts to the U.S. style of
miles per gallon.
Note that in addition to using different units of measurement, the U.S. approach
(distance / fuel) is the inverse of the European approach (fuel / distance).
Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters. Thus, 19
mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.

Made-up example of how it should work:
Enter the number of fuel(l) per 100km: 12.4
12.4 l/100 km is 19 miles per gallon.

Напишите программу, которая запрашивает расход бензина в европейском
стиле (количество литров на 100 км) и преобразует его в стиль, принятый в
США — число миль на галлон. Обратите внимание, что кроме использования
других единиц измерений, принятый в США подход (расстояние/топливо)
противоположен европейскому (топливо/расстояние). Учтите, что 100 кило­метров
соответствуют 62.14 милям, а 1 галлон составляет 3.875 литра.
Таким образом, 19 миль на галлон примерно равно 12.4 литров на 100 км,
а 27 миль на галлон —примерно 8.7 литров на 100 км.*/
/* 12.4 L -> 100 km
 1 L -> (100 / 12.4) km
1 L -> 8.064516129 km
1 L -> 5.011290323 miles
3.875 L -> (5.011290323 * 3.875) miles
1 gallon -> 19.41875 miles
*/

#include <iostream>
#include <string>

using Gasoline = double;
using Distance = double;
using Message = std::string const &;

Distance converting_liters_per_km_to_miles_per_gallon(Gasoline fuel_amount_in_liters);
void print(Message message);

int main()
{
    print("Enter the number of fuel(l) per 100km: ");
    Gasoline fuel_amount_in_liters{};
    std::cin >> fuel_amount_in_liters;
    Distance miles_per_gallon = converting_liters_per_km_to_miles_per_gallon(fuel_amount_in_liters);
    std::cout << fuel_amount_in_liters << " l/100 km is " << miles_per_gallon << " miles per gallon.\n";
}

Distance converting_liters_per_km_to_miles_per_gallon(Gasoline fuel_amount_in_liters)
{
    constexpr Distance ONE_HUNDRED_MILES = {100};
    constexpr Distance ONE_KM_TO_MILES = {0.6214};
    constexpr Gasoline LITERS_IN_ONE_GALLON = {3.875};

    Distance distance_in_km_per_one_liter_of_fuel = ONE_HUNDRED_MILES / fuel_amount_in_liters;
    Distance distance_in_miles_per_one_liter_of_fuel = distance_in_km_per_one_liter_of_fuel * ONE_KM_TO_MILES;
    Distance distance_in_miles_per_one_gallon_of_fuel = distance_in_miles_per_one_liter_of_fuel * LITERS_IN_ONE_GALLON;
    return distance_in_miles_per_one_gallon_of_fuel;
}

void print(Message message)
{
    std::cout << message;
}
