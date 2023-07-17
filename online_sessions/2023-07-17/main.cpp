#include <iostream>
#include <string>
namespace nadia
{
    void output(std::string const &message, bool dummy)
    {
        std::cout << message;
    }
    
    void output(int number, bool dummy)
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
    void output(std::string const &message, char delim = '\n');
    void output(int number, char delim = '\n');


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
    nadia::output("Please, enter an integer.\n", true);
    int x = nadia::request_integer_from_user();
    nadia::output(x, true);
}