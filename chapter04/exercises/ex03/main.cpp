/*Напишите программу, которая запрашивает у пользователя имя, фамилию, а
затем конструирует, сохраняет и отображает третью строку, состоящую из фа­милии
пользователя, за которой следует запятая, пробел и его имя. Используйте
массивы char и функции из заголовочного файла cstring.
Пример запускадолжен выглядеть так:
Enter your first name: Flip
Enter your last name: Fleming
Here's the information in a single string: Fleming, Flip*/

#include <iostream>
#include <cstring>

int main()
{
    const int SIZE = 30;
    std::cout << "Enter your first name: ";
    char first_name[SIZE];
    std::cin.getline(first_name, SIZE);

    std::cout << "Enter your last name: ";
    char last_name[SIZE];
    std::cin.getline(last_name, SIZE);

    strcat(last_name, ", ");
    std::cout << "Here's the information in a single string: "
              << last_name << first_name << '\n';
}