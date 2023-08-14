#include <iostream>
#include <vector>

bool is_odd(int num);
bool is_even(int num);
bool is_negative(int num);
int main()
{
    std::vector<int> ivec{23, -66, 45, 12, -11, 90, 77, -95, 50};
    // odd: 23, 45, 11, 77, 95 (нечётные)
    // even: 66, 12, 90, 50 (чётные)

    for (int element : ivec)
    {
        if (is_even(element))
        {
            std::cout << element << " is even! :D\n";
        }

        if (is_odd(element))
        {
            std::cout << element << " is odd! O_O\n";
        }

        if (is_negative(element))
        {
            std::cout << element << " is negative >:(\n";
        }
    }
}

bool is_odd(int num)
{
    return !is_even(num);
}

bool is_even(int num)
{
    return (num % 2 == 0);
}

bool is_negative(int num)
{
    return num < 0;
}