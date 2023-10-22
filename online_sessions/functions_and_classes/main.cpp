#include <iostream>
#include <string>
#include <algorithm>

void reverse(std::string &s);

int main()
{
    std::string text("redruma");
    std::cout << "Before: " << text;
    reverse(text);
    std::cout << "\nAfter: " << text << '\n';
}

void reverse(std::string &s)
{
    for (size_t i = 0, k = s.size()-1; i < s.size()/2; i++, k--)
    {
        std::swap(s[i], s[k]);
    }
}