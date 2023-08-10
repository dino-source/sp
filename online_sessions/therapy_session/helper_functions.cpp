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

PatientData get_patient_data(PatientData &patient_properties)
{
    PatientData patient_data;
    std::string delim = ": ";
    for (size_t i = 0; i < patient_properties.size(); i++)
    {
        print(patient_properties[i], delim);
        std::string user_input = get_string_from_user();
        patient_data.push_back(user_input);
    }
    return patient_data;
}