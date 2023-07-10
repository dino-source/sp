#include <iostream> 

int main ()
{
    
    std::cout << "Please, choose what to enter: either name (0) or address (1)\n";
    int flag = 0;
    std::cin >> flag;
    if (flag == 0)
    {
        std::cout << "Please, enter your address:\n";
        std::string address;
        std::cin >> address; 
        std::cout 
            << "Yei, now I know your address. The address is:\n" 
            << address
            << '\n';
    }
    else if (flag == 1)
    {
        std::cout << "Please, enter your name:\n";
        std::string name;
        std::cin >> name;
        std::cout 
            << "Yei, now I know your name. The name is:\n" 
            << name
            << '\n';
    }
    else 
    {
        std::cout << "Sorry, you have to choose either 0 or 1. The programm will be closed.\n";
    }



}