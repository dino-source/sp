/*Write a C++ program that requests and displays information as shown in the fol-
lowing example of output:
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
Note that the program should be able to accept first names that comprise more
than one word.Also note that the program adjusts the grade downward—that is, up
one letter.Assume that the user requests an A, a B, or a C so that you don’t have to
worry about the gap between a D and an F.*/

#include <iostream>
#include <string>

int main()
{
    char first_name[20];
    char last_name[20];
    char letter;
    int age;
    std::cout << "What is your first name?\n";
    std::cin.getline(first_name, 20);
    std::cout << "What is your last name?\n";
    std::cin.getline(last_name, 20);
    std::cout << "What letter grade do you deserve?\n";
    std::cin >> letter;
    std::cout << "What is your age?\n";
    std::cin >> age;
    std::cout
        << "Name: "
        << last_name
        << ", "
        << first_name
        << ".\n"
        << "Grade: "
        << char(letter + 1)
        << ".\n"
        << "Age: "
        << age
        << ".\n";
}
