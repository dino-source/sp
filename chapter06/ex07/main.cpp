/*Напишите программу, которая читает слова по одному за раз, пока не будет вве­дена
отдельная буква q. После этого программа должна сообщить количество
слов, начинающихся с гласных, количество слов, начинающихся с согласных,
а также количество слов, не попадающих ни в одну из этих категорий. Одним
из возможных подходов может быть применение isalpha() для различения
слов, начинающихся с букв, и остальных, с последующим применением if или
switch для идентификации тех слов, прошедших проверку isalpha(), кото­рые начинаются
с гласных. Пример запуска может выглядеть так:
Enter words (q to quit):
The 12 awesome oxen ambled
quietly across 15 meters of lawn. q
5 words begining with vowels
4 words begining with consonants
2 others*/

#include <iostream>
#include <cctype>
#include <string>

bool is_vowel(char ch);
bool is_consonant(char ch);
bool starts_from_vowel(const std::string &word);
bool starts_from_consonant(const std::string &word);

int main()
{
    std::cout << "Enter words (q to quit): ";
    int vowels{};
    int consonants{};
    int others{};
    for (std::string word; std::cin >> word && word != "q";)
    {
        if (starts_from_vowel(word))
        {
            ++vowels;
        }
        else if (starts_from_consonant(word))
        {
            ++consonants;
        }
        else
        {
            ++others;
        }
    }
    std::cout << vowels << " words begining with vowels;\n"
              << consonants << " words begining with consonants;\n"
              << others << " others.\n";
}

bool is_vowel(char ch)
{
    ch = tolower(ch);
    return std::string("aeiou").contains(ch);
}

bool is_consonant(char ch)
{
    return isalpha(ch) && !is_vowel(ch);
}

bool starts_from_vowel(const std::string &word)
{
    return is_vowel(word.front());
}

bool starts_from_consonant(const std::string &word)
{
    return is_consonant(word.front());
}