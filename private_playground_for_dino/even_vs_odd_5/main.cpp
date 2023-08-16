/*
Given a vector of integers: 14, 23, -4, 90, -7, 24, 33, 77, -6, 11, -5
Implement three functions. The first named print_emojis should use for loop
to iterate over the vector and displays different emojis for each element:
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
Remaining functions have to have following prototypes:
bool is_even(int n);
bool is_positive(int n);
*/

#include <iostream>

int main()
{
    using std::cout;
    int n{7};
    for (cout << "This is for loop!\n"; n--; cout << "We count numbers in strange manner: " << n << '\n')
    {
        // Yes, this is empty for loop body. It's weird, right? But it works!
    }
}

// void print_emojis(Numbers const &numbers)
// {
//     for (Item number : numbers)
//     {
//         char eyes = is_even(number) ? ':' : '8';
//         char mouth = is_positive(number) ? ')' : '(';
//         std::cout << number << ' ' << eyes << mouth << '\n';
//     }
// }

// bool is_even(Item n)
// {
//     return n % 2 == 0;
// }

// bool is_positive(Item n)
// {
//     return n > 0;
// }