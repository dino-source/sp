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

void print_emojis(std::vector<int> intvector);
bool is_even(int n);
bool is_positive(int n);

int main()
{
    std::vector<int> intvector{14, 23, -4, 90, -7, 24, 33, 77, -6, 11, -5};
    // positive odd: 23, 33, 77, 11
    // negative odd: -7, -5
    // positive even: 14, 90, 24
    // negative even: -4, -6
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

void print_emojis(std::vector<int> intvector)
{
    for (int element : intvector)
    {
        if (is_even(element) && is_positive(element))
        {
            std::cout << element << " :)\n";
        }

        if (is_even(element) && !is_positive(element))
        {
            std::cout << element << " :(\n";
        }

        if (!is_even(element) && is_positive(element))
        {
            std::cout << element << " 8)\n";
        }

        if (!is_even(element) && !is_positive(element))
        {
            std::cout << element << " 8(\n";
        }
    }
}
