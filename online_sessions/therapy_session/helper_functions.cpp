#include "helper_functions.h"
#include <iostream>

void print(std::string const &patient_data, std::string const &delim)
{
    std::cout << "Please enter your " << patient_data << delim;
}

void print(std::string const &message)
{
    std::cout << message;
}

std::string get_string_from_user()
{
    std::string user_input;
    std::cin >> user_input;
    return user_input;
}
