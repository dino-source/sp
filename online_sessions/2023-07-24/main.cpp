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
        std::cout <<"\nEnter an integer: ";
        int num;
        std::cin >> num;
        if (num < 0)
        {
            std::cout << "Num < 0\n";
        }
        else if (num > 0)        
        {
            std::cout << "Num > 0\n";
        }
        else
        {
            std::cout << "Num = 0\n";
            break;
        }
    }
    
    while (true)
    {
        switch (expression)
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }
    }
    
}
