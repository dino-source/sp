/*Write a program that requests the user to enter the current world population and
the current population of the U.S. (or of some other nation of your choice).
Store the information in variables of type long long. Have the program display the percent
that the U.S. (or other nation’s) population is of the world’s population.
The output should look something like this:
Enter the world's population: 6898758899
Enter the population of the US: 310783781
The population of the US is 4.50492% of the world population.
You can use the Internet to get more recent figures.

Напишите программу, которая запрашивает текущую численность населения
Земли и текущую численность населения США (или любой другой страны).
Сохраните эту информацию в переменных типа long long. В качестве резуль­
тата программа должна отображать процентное соотношение численности
населения США (или выбранной страны) и всего мира. Результат выполнения
программы должен выглядеть следующим образом:E
Enter the world's population: 6898758899
Enter the population of the US: 310783781
The population of the US is 4.50492% of the world population.
Можете поискать в Интернете более точные значения.*/

#include <iostream>

int main()
{
    std::cout << "Enter the world's population: ";
    long long worlds_population;
    std::cin >> worlds_population;
    std::cout << "Enter the population of US: ";
    long long US_population;
    std::cin >> US_population;
    long double persent_of_the_world_population = 100.0L * US_population / worlds_population;
    std::cout << "The population of the US is " << persent_of_the_world_population
              << '%' << " of the world population\n";
}
