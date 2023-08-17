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
    int x = 15;
    int y = 4;
    std::cout << "Please enter an integer: ";
    int n;
    std::cin >> n;
    if ((is_positive(n) && is_even(n)) || (is_positive(n) && is_multiply_by(n, 5)))
    {
        std::cout << ":>\n";
    }
    else
    {
        if (is_negative(n) || is_zero(n))
        {
            std::cout << ":<\n";
        }
        else
        {
            std::cout << "0_0\n";
        }
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