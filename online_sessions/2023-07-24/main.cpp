#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
    constexpr int LIMIT{10};
    int i{0};
    while (i < LIMIT) {
        std::cout << i << ' ';
        i++;
    }

    std::cout << '\n';
    do
    {
        std::cout << "Here is your variable: ";
        std::cout << i-- << '\n';
    }
    while (i > 0);
    std::cout << "Here is your for loop:\n";
    for (int x {0}; x < LIMIT; x++)
    {
        std::cout << x << ' ';
    }
    
}
