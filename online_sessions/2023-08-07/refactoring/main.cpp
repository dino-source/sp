#include <iostream>
#include <string>
#include <vector>

void print(std::string const &patient_data, std::string const &delim);
std::string get_string_from_user();

int main()
{
    std::vector<std::string> patient_properties{
        "first name", "last name", "ID number", "phone number",
        "email", "occupation", "marital status", "date of birth"};
    std::vector<std::string> patient_data;
    std::string delim = ": ";
    std::cout << "Hello! My name is Rob Ott. I am your virtual psychologist.\n"
                 "The first step we have to do is to fill a questionnaire.\n"
                 "It'll be a starting point in your therapy. So let's start.\n\n";

    print(patient_properties[0], delim);
    std::string user_input = get_string_from_user();
    patient_data.push_back(user_input);

    print(patient_properties[1], delim);
    user_input = get_string_from_user();
    patient_data.push_back(user_input);

    print(patient_properties[2], delim);
    user_input = get_string_from_user();
    patient_data.push_back(user_input);

    print(patient_properties[3], delim);
    user_input = get_string_from_user();
    patient_data.push_back(user_input);

    print(patient_properties[4], delim);
    user_input = get_string_from_user();
    patient_data.push_back(user_input);

    print(patient_properties[5], delim);
    user_input = get_string_from_user();
    patient_data.push_back(user_input);

    print(patient_properties[6], delim);
    user_input = get_string_from_user();
    patient_data.push_back(user_input);

    print(patient_properties[7], delim);
    user_input = get_string_from_user();
    patient_data.push_back(user_input);
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