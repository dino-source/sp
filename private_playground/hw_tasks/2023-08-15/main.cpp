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
bool is_positive(int n)

1. Найти способ обойтись тремя инструкциями if-else.

2. Найти способ обойтись двумя инструкциями if-else.

3. Найти способ задействовать std::cout только 1 раз.

4*. Найти способ сократить функцию print_emojis до одного цикла for,
а этот цикл for - до трёх однострочных стейтментов,
вообще не используя ни одной инструкции if-else.

5*. Найти способ сократить функцию main до одного однострочного стейтмента.;*/

#include <iostream>
#include <vector>

using Item = std::vector<int>;
bool is_even(int n);
bool is_positive(int n);
void print_emojis(Item numbers);

int main()
{
    Item numbers{14, 23, -4, 90, -7, 24, 33, 77, -6, 11, -5};
    // positive odd: 23, 33, 77, 11
    // negative odd: -7, -5
    // positive even: 14, 90, 24
    // negative even: -4, -6
    print_emojis(numbers);
}

bool is_even(int n)
{
    return (n % 2 == 0);
}

bool is_positive(int n)
{
    return n > 0;
}

void print_emojis(Item numbers)
{
    for (int element : numbers)
    {
        if (is_even(element))
        {
            if (is_even(element) && is_positive(element))
            {
                std::cout << element << " :)\n";
            }
            else
            {
                std::cout << element << " :(\n";
            }
        }

        else
        {
            if (!is_even(element) && is_positive(element))
            {
                std::cout << element << " 8)\n";
            }
            else
            {
                std::cout << element << " 8(\n";
            }
        }
    }
}
