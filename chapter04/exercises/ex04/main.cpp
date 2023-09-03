/*Напишите программу, которая приглашает пользователя ввести его имя и фа­милию,
а затем построит, сохранит и отобразит третью строку, состоящую
из фамилии, за которой следует запятая, пробел и имя. Используйте объекты
string и методы из заголовочного файла string.
Пример запуска должен вы­глядеть так:
Enter your first name: Flip
Enter your last name: Fleming
Here's the information in a single string: Fleming, Flip*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your first name: ";
    std::string first_name;
    getline(std::cin, first_name);

    std::cout << "Enter your last name: ";
    std::string last_name;
    getline(std::cin, last_name);

    std::string info_in_single_string = last_name + ", " + first_name;
    std::cout << "Here's the information in a single string: "
              << info_in_single_string << '\n';
}