/*Напишите программу C++, которая запрашивает и отображает информацию,
как показано в следующем примере вывода:
1
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? В
What is your age? 22
Name: Yewe, Betty Sue
Grade: С
Age: 22
Обратите внимание, что программа должна принимать имена, состоящие из
более чем одного слова. Кроме того, программа должна уменьшать значение
grade на одну градацию —т.е. на одну букву выше. Предполагается, что пользо­ватель
может ввести А, В или С, поэтому вам не нужно беспокоиться о пропус­ке между D и F.*/

#include <iostream>

int main()
{
    const int char_size = 20;
    std::cout << "What is your first name? ";
    char first_name[char_size];
    std::cin.getline(first_name, char_size);

    std::cout << "\nWhat is your last name? ";
    char last_name[char_size];
    std::cin.getline(last_name, char_size);

    std::cout << "\nWhat grade do you deserve? ";
    char grade;
    std::cin >> grade;

    std::cout << "\nWhat is your age? ";
    int age;
    std::cin >> age;

    std::cout << "\nName: " << last_name << ", " << first_name << '\n';
    std::cout << "Grade: " << ++grade << '\n';
    std::cout << "Age: " << age << '\n';
}