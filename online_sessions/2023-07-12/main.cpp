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

void square(int number, int &power_2_of_the_number);
int square(int number);



//=============================================================================
int main()
{
    int result_1 =
        add( // function call - here we call function add
            sub( // function call - here we call function sub
                square(6), // function call - here we call function square
                square(5) // function call - here we call function square
            ),
            sub( // function call - here we call function sub
                square(4), // function call - here we call function square
                square(3) // function call - here we call function square
            )
        );
    print("add(sub(square(6), square(5)), sub(square(4), square(3))): ", std::cout);
    print(result_1, std::cout);
    print("\n\n", std::cout);

    int x = square(10);
    int y = square(9);
    int diff_1 = sub(x, y);
    int a = square(8);
    int b = square(7);
    int diff_2 = sub(a, b);
    int result_2 = add(diff_1, diff_2);
    print("add(sub(square(10), square(9)), sub(square(8), square(7))): ", std::cout);
    print(result_2, std::cout);
    print("\n\n", std::cout);
}
//=============================================================================



// Function definitions supposed to be in some source file,
// for example, in helper_function.cpp
int add(int potato, int meat) // function definition
{
    int dish = potato + meat; // cooking process
    return dish;
}

int sub(int a, int b)
{
    int diff = a - b;
    return diff;
}

std::string concatenate(std::string const &str1, std::string const &str2)
{
    std::string result_string = str1 + str2;
    return result_string;
}

void print(std::string const &message , std::ostream &out)
{
    out << message;
}

void print(int number, std::ostream &out)
{
    out << number;
}

void square(int number, int &power_2_of_the_number)
{
    power_2_of_the_number = number * number;
    return;
}

int square(int number)
{
    int power_2_of_the_number = number * number;
    return power_2_of_the_number;
}