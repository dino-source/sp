#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
    constexpr int LIMIT{10};
    int s{0};
    while (s < LIMIT) {
        std::cout << s++ << ' ';
    }
    std::cout << '\n';
    do
    {
        std::cout << "Here is your variable: ";
        std::cout << s-- << '\n';
    }
    while (s > 0);
    return 0;
}
