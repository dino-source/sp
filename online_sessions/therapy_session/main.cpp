#include <iostream>
#include <string>
#include <vector>

void print(std::string const &patient_data, std::string const &delim);
std::string get_string_from_user();
using PatientData = std::vector<std::string>;
PatientData get_patient_data(PatientData &patient_properties);

int main()
{
    std::vector<std::string> patient_properties{
        "first name", "last name", "ID number", "phone number",
        "email", "occupation", "marital status", "date of birth"};
    print("Hello! My name is Rob Ott. I am your virtual psychologist.\n"
          "The first step we have to do is to fill a questionnaire.\n"
          "It'll be a starting point in your therapy. So let's start.\n\n");
    PatientData patient_data = get_patient_data(patient_properties);
}

void print(std::string const &patient_data, std::string const &delim)
{
    std::cout << "Please enter your " << patient_data << delim;
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