#ifndef PTR_AND_REF_H
#define PTR_AND_REF_H
#include <iostream>
#include <vector>

void play_with_ptr_and_ref();

inline void play_with_ptr_and_ref()
{
    int fruit = 9;
    int *p_fruit = &fruit;

    std::cout << "fruit: " << fruit << '\n';
    std::cout << "&fruit: " << &fruit << '\n';

    std::cout << "*p_fruit: " << *p_fruit << '\n';
    std::cout << "&p_fruit: " << &p_fruit << '\n';
    std::cout << "p_fruit: " << p_fruit << '\n';

    int &r_fruit = fruit;
    std::cout << "r_fruit: " << r_fruit << '\n';
    std::cout << "&r_fruit: " << &r_fruit << '\n';

    int apple = 1;
    int banana = 2;
    int peach = 3;
    std::vector<int *> p_fruits;
    p_fruits.push_back(&apple);
    p_fruits.push_back(&banana);
    p_fruits.push_back(&peach);
    for (auto const &ptr_fruit : p_fruits)
    {
        std::cout << ptr_fruit << '\n';
    }
}
#endif // PTR_AND_REF_H