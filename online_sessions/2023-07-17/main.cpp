#include <iostream>
#include <string>

void output(std::string const &message);
int request_integer_from_user(int);

void output(std::string const &message)
{
    std::cout << message;
}

int request_integer_from_user(int)
{
    int integer_from_user;
    std::cin >> integer_from_user;
    return integer_from_user;
}

int main()
{

}