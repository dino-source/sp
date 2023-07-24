#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
    constexpr int LIMIT{10};
    int i{0};
    while (i <= LIMIT) {
        std::cout << i << ' ';
        i++;
    }

    std::cout << '\n';
    do
    {
        std::cout << "Here is your variable: ";
        std::cout << i-- << '\n';
    }
    while (i >= 0);

    std::cout << "Here is your for loop:\n";
    int x {0};
    for (; x <= LIMIT; x++)
    {
        std::cout << x << ' ';
    }
    std::cout << "\n x: " << x;
    
    for (;;)
    {
        std::cout <<"Enter an integer: ";
        int num;
        
    }
    
    while (true)
    {
        /* code */
    }
    
}
