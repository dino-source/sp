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
        std::cout <<"\nEnter a color (red - 1, green - 2, blue - 3); to quit enter 0: ";
        int color;
        std::cin >> color;

        switch (color)
        {
        case 1:
            std::cout << "You've chosen red color\n";
            break;

        case 2:
            std::cout << "You've chosen green color\n";
            break;

        case 3:
            std::cout << "You've chosen blue color\n";
            break;

        case 0:
            std::cout << "You've chosen to quit\n";
            break;
        
        default:
            std::cout << "You have to choose 1 or 2 or 3 or 0. Another numbers are not allowed.\n";
            break;
        }
    }
    
}
