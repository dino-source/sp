/* Напишите программу, которая использует массив char и цикл для чтения по
одному слову за раз до тех пор, пока не будет введено слово done. Затем
про­грамма должна сообщить количество введенных слов (исключая done).
Пример запуска должен быть таким:
Вводите слова (для завершения введите слово done):
anteater birthday category dumpster
envy finagle geometry done for sure
Вы ввели 7 слов.
Вы должны включить заголовочный файл cstring и применять функцию
strcmp() для выполнения проверки.*/

#include <iostream>
#include <cstring>

int main()
{
    const int MAX_WORD_SIZE{40};
    char words[MAX_WORD_SIZE];
    int count{0};
    std::cout << "Enter some words. (Enter \"done\" to quit): ";
    std::cin >> words;

    for (; strcmp(words, "done");)
    {
        std::cin >> words;
        ++count;
    }

    std::cout << '\n'
              << "You entered the total of " << count << " words.\n";
    return 0;
}