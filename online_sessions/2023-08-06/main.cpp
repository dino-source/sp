#include <iostream>
#include <string>

void user_prompt(std::string const &msg)
{
    std::cout << msg << '\n';
}

int main()
{
    int w = 88;
    std::cout << "address of variable w: " << &w << '\n';
    std::cout << "Please enter your age: ";
    int userAge = 0;
    std::cin >> userAge;
    std::cout << "You just entered: " << userAge << '\n';

    std::cout << "Please enter your name: ";
    std::string userName;
    std::cin >> userName;
    std::cout << "Now I know your name: " << userName << '\n';
}
