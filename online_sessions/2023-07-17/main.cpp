#include <iostream>
#include <string>
namespace nadia
{
    void output(std::string const &message)
    {
        std::cout << message;
    }
    
    void output(int number)
    {
        std::cout << number;
    }
    
    int request_integer_from_user()
    {
        int integer_from_user;
        std::cin >> integer_from_user;
        return integer_from_user;
    } 
    
}

namespace dima
{
    void output(std::string const &message, char delim = '\n')
    {
        std::cout << message << delim;
    }

    void output(int number, char delim = '\n')
    {
        std::cout << number << delim;
    }
}


int main()
{
    nadia::output("Hi! I am Nadia. Please, enter an integer: ");
    int x = nadia::request_integer_from_user();
    nadia::output("Here is your integer: ");
    nadia::output(x);
    nadia::output("\n\n");

    dima::output("Hi! I am Dima. Please, enter an integer:", ' ');
    int z = nadia::request_integer_from_user();
    dima::output("Here is your integer:", ' ');
    dima::output(z);
}