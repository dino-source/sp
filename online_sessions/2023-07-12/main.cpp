#include <iostream>
#include <string>

/*
Built-in types (встроенные типы):
int
unsigned int
long int
long long int
bool
char
double
float
*/

// These function protoypes supposed to be in some header file,
// for example, in helper_functions.h
int add(int a, int b); // function declaration (function prototype)
int sub(int, int);
std::string concatenate(std::string const &str1, std::string const &str2);
void print(std::string const &message, std::ostream &out);
void print(int number, std::ostream &out);

void square(int number, int &result);
int square(int number);

int main()
{
    int result = add(sub(square(4), square(3)), sub(square(5), square(4))); // function call
    // a = sub(sq(4), sq(3)) = sub(16, 9) = 7
    // b = sub(sq(5), sq(4)) = sub(25, 16) = 9
    // add(sub(16, 9), sub(25, 16))
    // add(7, 9)

    print("add(sub(square(4), square(3)), sub(square(5), square(4))): ", std::cout);
    print(result, std::cout);
    print("\n\n", std::cout);
}


// Function defenitions supposed to be in some source file,
// for example, in helper_function.cpp
int add(int potato, int meat) // function definition
{
    int dish = potato + meat; // cooking process
    return dish;
}

int sub(int a, int b)
{
    return a - b;
}

std::string concatenate(std::string const &str1, std::string const &str2)
{
    return str1 + str2;
}

void print(std::string const &message , std::ostream &out)
{
    out << message;
}

void print(int number, std::ostream &out)
{
    out << number;
}

void square(int number, int &result)
{
    result = number * number;
    return;
}

int square(int number)
{
    return number * number;
}