#ifndef PTR_AND_REF_H
#define PTR_AND_REF_H
#include <iostream>
#include <vector>

void play_with_ptr_and_ref();

inline void play_with_ptr_and_ref()
{
    int fruit = 9;
    int *ptr_fruit = &fruit;

    std::cout << "fruit: " << fruit << '\n';
    std::cout << "&fruit: " << &fruit << '\n';

    std::cout << "*ptr_fruit: " << *ptr_fruit << '\n';
    std::cout << "&ptr_fruit: " << &ptr_fruit << '\n';
    std::cout << "ptr_fruit: " << ptr_fruit << '\n';

    int &ref_fruit = fruit;
    std::cout << "ref_fruit: " << ref_fruit << '\n';
    std::cout << "&ref_fruit: " << &ref_fruit << '\n';

    int apple = 1;
    int melon = 2;
    int peach = 3;
    std::vector<int *> p_fruits;
    p_fruits.push_back(&apple);
    p_fruits.push_back(&melon);
    p_fruits.push_back(&peach);
    for (auto const p_fruit : p_fruits)
    {
        std::cout << *p_fruit << '\n';
    }
}
#endif // PTR_AND_REF_H