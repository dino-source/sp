#include <iostream>
#include <string>
#include <algorithm>

void reverse(std::string &s);
int least_significant_digit(int n);
int most_significant_digit(int n);

int main()
{
    int x{29};
    int y{438};
    int z{7956};
    int w{-1249};
    int result = least_significant_digit(w);
    std::cout << result << '\n';

}

void reverse(std::string &s)
{
    for (size_t i = 0, k = s.size()-1; i < s.size()/2; i++, k--)
    {
        std::swap(s[i], s[k]);
    }
    return;
}

int least_significant_digit(int n)
{
    int result{-1};
    result = n%10;

    return result >= 0 ? result : -result;
}

int most_significant_digit(int n)
{
    int result{-1};

    if (n > -10 && n < 10)
    {
        result = n;
    }
    else if (n > -100 && n < 100)
    {
        result = n/10;
    }
    else if (n > -1000 && n < 1000)
    {
        result = n/100;
    }
    else if (n > -10000 && n < 10000)
    {
        result = n/1000;
    }
    return result >= 0 ? result : -result;
}