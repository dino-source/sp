#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>

void reverse(std::string &s);
int least_significant_digit(int n);
int most_significant_digit(int n);
void reverse(int &n);
void compute_number_of_steps(int &n);
bool is_greater_than_and_even(int a, int b);
bool is_less_than_and_even(int a, int b); // doesn't work

int main()
{
    std::vector<int> numbers{1, 48, 92, 7, 13, 5, 9};
    auto is_less_than_and_odd = [](int a, int b){return a<b && a%2;};
    std::sort(numbers.begin(), numbers.end(), is_less_than_and_odd);
    for (auto i : numbers)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

void reverse(std::string &s)
{
    int number_of_steps{0};

    for (size_t i = 0, k = s.size()-1; i < s.size()/2; i++, k--)
    {
        std::swap(s[i], s[k]);
        compute_number_of_steps(number_of_steps);
    }
    std::cout << "Total number of steps: " << number_of_steps << '\n';
    return ;
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

void reverse(int &number)
{
    std::string number_as_string{std::to_string(number)};
    reverse(number_as_string);
    number = std::stoi(number_as_string); 
}

void compute_number_of_steps(int &n)
{
    n++;
}


bool is_greater_than_and_even(int a, int b)
{
    return a>b && !(a%2);
}

bool is_less_than_and_even(int a, int b)
{
    return a<b && !(a%2);
}