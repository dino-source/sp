/*Напишите программу, которая читает слова по одному за раз, пока не будет вве­дена
отдельная буква q. После этого программа должна сообщить количество
слов, начинающихся с гласных, количество слов, начинающихся с согласных,
а также количество слов, не попадающих ни в одну из этих категорий. Одним
из возможных подходов может быть применение isalpha() для различения
слов, начинающихся с букв, и остальных, с последующим применением if или
switch для идентификации тех слов, прошедших проверку isalpha(), кото­рые начинаются
с гласных. Пример запуска может выглядеть так:
Enter words (q to quit):
The 12 awesome oxen am bled
quietly across 15 meters of lawn. q
5 words begining with vowels
4 words begining with consonants
2 others*/

#include <iostream>
#include <cctype>
#include <string>

int main()
{
    std::cout << "Enter words (q to quit): ";
    std::string word;
    int vowels{};
    int consonants{};
    int others{};
    while (std::cin >> word && word != "q")
    {
        if (isalpha(word[0]))
        {
            switch (word[0])
            {
            case /* constant-expression */:
                /* code */
                break;

            default:
                break;
            }
            else
            {
                consonants++;
            }
        }
        else
        {
            others++;
        }
        std::cin >> (word);
    }
    std::cout << vowels << " words begining with vowels "
              << consonants << " words begining with consonants "
              << others << " others.\n";
}
