#include <iostream>
#include <string>

void output(std::string const &message, char delim = '\n');
void output(int number, char delim = '\n');
int request_integer_from_user(int);

void output(std::string const &message, char delim = '\n')
{
    std::cout << message << delim;
}

void output(int number, char delim = '\n')
{
    std::cout << number << delim;
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