#include <iostream>
#include <string>


int main()
{
    std::cout << "Please enter your name: ";
    std::string username;
    std::cin >> username;
    std::cout << "Yay! Now I know your name! The name is " << username << "\n"; 
}