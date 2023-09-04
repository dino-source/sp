#ifndef HELPER_LIBRARY_POINTERS_H
#define HELPER_LIBRARY_POINTERS_H

namespace cpps::helper_library::pointers
{
    template <typename T>
    using raw_ptr = T *;

    template <typename T>
    auto dereference(raw_ptr<T> ptr);

    template <typename T>
    void assign(T new_value, raw_ptr<T> ptr);

    template <typename T>
    auto dereference(raw_ptr<T> ptr)
    {
        return *ptr;
    }

    template <typename T>
    void assign(T new_value, raw_ptr<T> ptr)
    {
        *ptr = new_value;
    }

} // namespace cpps::helper_library::pointers

#endif // HELPER_LIBRARY_POINTERS_H