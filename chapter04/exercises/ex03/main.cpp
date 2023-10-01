/*Write a program that asks the user to enter his or her first name and then last
name, and that then constructs, stores, and displays a third string, consisting of the
user’s last name followed by a comma, a space, and first name. Use char arrays and
functions from the cstring header file.A sample run could look like this:
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip*/

#include <iostream>

int main()
{
    char first_name[20];
    char last_name[20];
    std::cout << "What is your first name?" << '\n';
    std::cin.getline(first_name, 20);
    std::cout << "What is your last name?" << '\n';
    std::cin.getline(last_name, 20);
    std::cout << "Name: " << last_name << ", " << first_name << '\n';
}