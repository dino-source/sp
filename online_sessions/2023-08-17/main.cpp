#include <iostream>
#include <vector>
#include <string>

bool is_even(int n);
bool is_odd(int n);
bool is_positive(int n);
bool is_negative(int n);
bool is_zero(int n);
bool is_multiply_by(int n, int m);

int main()
{
    int x = 9;
    int y = 3;
    std::cout << std::boolalpha << is_multiply_by(x, y) << '\n';
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