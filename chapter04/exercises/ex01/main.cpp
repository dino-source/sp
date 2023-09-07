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
#include <string>

int main()
{
    std::cout << "What is your first name? ";
    std::string first_name;
    std::getline(std::cin, first_name);

    std::cout << "\nWhat is your last name? ";
    std::string last_name;
    std::getline(std::cin, last_name);

    std::cout << "\nWhat grade do you deserve? ";
    char grade;
    std::cin >> grade;

    std::cout << "\nHow old are you? ";
    int age;
    std::cin >> age;

    std::cout << "\nName: " << last_name << ", " << first_name << '\n';
    std::cout << "Grade: " << ++grade << '\n';
    std::cout << "Age: " << age << '\n';
}