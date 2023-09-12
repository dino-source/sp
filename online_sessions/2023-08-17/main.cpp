#include <iostream>
#include <vector>
#include <string>

bool is_even(int n);
bool is_odd(int n);
bool is_positive(int n);
bool is_negative(int n);
bool is_zero(int n);
bool is_multiply_by(int n, int m);
bool is_less_than_or_equal_to(int n, int m);
bool is_greater_than_equal_to(int n, int m);
bool is_not_equal_to(int n, int m);
bool invert_sign(int n);

int main()
{
    int x = 44;
    int y = 15;
    std::cout << "Please enter an integer: ";
    int n;
    std::cin >> n;
    if (is_less_than_or_equal_to(n, x) && is_greater_than_equal_to(n, y))
    {
        std::cout << ":)\n";
    }
    else
    {
        std::cout << ":(\n";
    }
}

bool is_even(int n)
{
    return (n % 2 == 0);
}

bool is_odd(int n)
{
    return (n % 2 != 0);
}

bool is_positive(int n)
{
    return n > 0;
}

bool is_negative(int n)
{
    return !is_positive(n);
}

bool is_zero(int n)
{
    return !n;
}

bool is_multiply_by(int n, int m)
{
    return (n % m == 0);
}

bool is_less_than_or_equal_to(int n, int m)
{
    return (n <= m);
}

bool is_greater_than_equal_to(int n, int m)
{
    return (n >= m);
}

bool is_not_equal_to(int n, int m)
{
    return (n != m);
}

bool invert_sign(int n)
{
    return n * -1;
}