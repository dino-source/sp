/* Напишите программу, которая читает клавиатурный ввод до символа @ и
повто­ряет его, за исключением десятичных цифр, преобразуя каждую букву верхнего
регистра в букву нижнего регистра и наоборот.
(Не забудьте о семействе функ­ций cctype.) */

#include <iostream>
#include <cctype>

int main()
{
    std::cout << "Enter text, and type @ to treminate input: ";
    char user_input;
    std::cin.get(user_input);

    while (user_input != '@')
    {
        if (islower(user_input))
        {
            user_input = toupper(user_input);
        }
        else if (isupper(user_input))
        {
            user_input = tolower(user_input);
        }
        else if (isdigit(user_input))
        {
            std::cin.get(user_input);
            continue;
        }
        std::cout << user_input;
        std::cin.get(user_input);
    }
    std::cout << '\n';

    return 0;
}