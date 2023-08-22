#include <iostream>
#include <vector>
#include <string>
#include <limits>

void print(int number, std::string const &name_of_parameter_type);

int main()
{
    std::cout
        << "type\t│ lowest()\t│ min()\t\t│ max()\n"
        << "bool\t│ "
        << std::numeric_limits<bool>::lowest() << "\t\t│ "
        << std::numeric_limits<bool>::min() << "\t\t│ "
        << std::numeric_limits<bool>::max() << '\n'
        << "char\t│ "
        << +std::numeric_limits<char>::lowest() << "\t\t│ "
        << +std::numeric_limits<char>::min() << "\t\t│ "
        << +std::numeric_limits<char>::max() << '\n'
        << "short\t│ "
        << std::numeric_limits<short>::lowest() << "\t│ "
        << std::numeric_limits<short>::min() << "\t│ "
        << std::numeric_limits<short>::max() << '\n'
        << "int\t│ "
        << std::numeric_limits<int>::lowest() << "\t│ "
        << std::numeric_limits<int>::min() << "\t│ "
        << std::numeric_limits<int>::max() << '\n'
        << "long\t│ "
        << std::numeric_limits<long>::lowest() << "\t│ "
        << std::numeric_limits<long>::min() << "\t│ "
        << std::numeric_limits<long>::max() << '\n'
        << "ll\t│ "
        << std::numeric_limits<long long>::lowest() << "\t│ "
        << std::numeric_limits<long long>::min() << "\t│ "
        << std::numeric_limits<long long>::max() << '\n'
        << "double\t│ "
        << std::numeric_limits<double>::lowest() << "\t│ "
        << std::numeric_limits<double>::min() << "\t│ "
        << std::numeric_limits<double>::max() << '\n';

    bool bool_variable = true;
    print(bool_variable, "bool");

    char char_variable = 'A';
    print(char_variable, "char");

    short short_number = 32767;
    print(short_number, "short");

    int integer_number = 2147483647;
    print(integer_number, "int");

    long l_number = 9223372036854775807;
    print(l_number, "long");

    long long ll_number = -9223372036854775808;
    print(ll_number, "long long");

    double d_number = 1.79769e+308;
    print(d_number, "double");
}

void print(int number, std::string const &name_of_parameter_type)
{
    std::cout << "I am a number of type " << name_of_parameter_type << ": " << number << '\n';
}
