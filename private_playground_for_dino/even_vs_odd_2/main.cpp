/*
Given a vector of integers: 14, 23, -4, 90, -7, 24, 33, 77, -6, 11, -5
Implement three functions.
The first named print_emojis
should use for loop to iterate over the vector and display different emojis for each element:
if the element is even and positive, print value of the element and :)
if the element is even and negative, print value of the element and :(
if the element is odd and positive, print value of the element and 8)
if the element is odd and negative, print value of the element and 8(
Expected output:
14 :)
23 8)
-4 :(
90 :)
-7 8(
24 :)
33 8)
77 8)
-6 :(
11 8)
-5 8(
Remaining functions should have the following prototypes:
bool is_even(int n);
bool is_positive(int n);*/

#include <iostream>
#include <vector>

void print_emojis(std::vector<int> const &intvector);
bool is_even(int n);
bool is_positive(int n);

int main()
{
    std::vector<int> intvector{14, 23, -4, 90, -7, 24, 33, 77, -6, 11, -5};
    print_emojis(intvector);
}

bool is_even(int n)
{
    return (n % 2 == 0);
}

bool is_positive(int n)
{
    return n > 0;
}

void print_emojis(std::vector<int> const &intvector)
{
    for (int element : intvector)
    {
        std::cout << element << ' ';

        if (is_even(element))
        {
            std::cout << ':';
        }
        else
        {
            std::cout << '8';
        }

        if (is_positive(element))
        {
            std::cout << ')';
        }
        else
        {
            std::cout << '(';
        }

        std::cout << '\n';
    }
}