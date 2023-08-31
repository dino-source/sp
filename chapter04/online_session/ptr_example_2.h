#ifndef PTR_EXAMPLE_2_H
#define PTR_EXAMPLE_2_H
#include <iostream>
#include <vector>
#include <memory>
#include "../../helper_library/pointers.h"
// chapter04/online_session/ptr_example_2.h
void play_with_ptr_wrapper();

inline void play_with_ptr_wrapper()
{
    namespace hlp = cpps::helper_library::pointers;

    unsigned sun{1};
    hlp::raw_ptr<unsigned> ptr{std::addressof(sun)};
    std::cout << "hlp::dereference(ptr): " << hlp::dereference(ptr) << '\n';

    unsigned int satellite{9};
    ptr = std::addressof(satellite); // assignment operator '='
    std::cout << "hlp::dereference(ptr): " << hlp::dereference(ptr) << '\n';
    *ptr = 15;

    double height{172.4};
    hlp::raw_ptr<double> p_height{std::addressof(height)};
    std::cout << "hlp::dereference(p_height): " << hlp::dereference(p_height) << '\n';
}

#endif // PTR_EXAMPLE_2_H