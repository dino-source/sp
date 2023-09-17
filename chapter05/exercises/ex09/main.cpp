/* Напишите программу, соответствующую описанию программы из упражнения 8,
но с использованием объекта string вместо символьного массива. Включите
заголовочный файл string и применяйте операции отношений для выполне­ния
проверки. */

#include <iostream>
#include <string>

int main()
{
    std::string words;
    int count{0};
    std::cout << "Enter some words. (Enter \"done\" to quit): ";
    std::cin >> words;

    while (words != "done")
    {
        std::cin >> words;
        ++count;
    }

    std::cout << '\n'
              << "You entered the total of " << count << " words.\n";
}