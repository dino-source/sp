#include <iostream>
#include <string>

using std::cout;
using std::string;

template <typename T>
bool is_null_pointer(T *ptr)
{
    return ptr == nullptr;
}

template <typename T>
void try_to_dereference(T *ptr)
{
    string msg;
    if (is_null_pointer(ptr))
    {
        msg = "Dereferencing null "
              "pointers is UB! "
              "Never ever do that!";
        cout << msg << '\n';
    }
    else
    {
        msg = "Dereferenced pointer,"
              " i.e. the value the "
              "pointer points to: ";
        cout << msg << *ptr << '\n';
    }
}

int main()
{
    int n = 42;
    int *pn = &n;
    int **ppn = &pn;

    cout << "n: " << n           // 42
         << "\n*pn: " << *pn     // 42
         << "\n**ppn: " << **ppn // 42
         << '\n';

    int *ptr = nullptr;
    try_to_dereference(ptr);

    ptr = &n;
    try_to_dereference(ptr);
}