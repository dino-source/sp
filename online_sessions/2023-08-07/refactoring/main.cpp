#include <iostream>
#include <string>
#include <vector>

void print(std::string const &patient_data, std::string const &delim);

int main()
{
    std::vector<std::string> patient_properties{
        "first name", "last name", "ID number", "phone number",
        "email", "occupation", "marital status", "date of birth"};
    std::string delim = ": ";
    std::cout << "Hello! My name is Rob Ott. I am your virtual psychologist.\n"
                 "The first step we have to do is to fill a questionnaire.\n"
                 "It'll be a starting point in your therapy. So let's start.\n\n";

    print(patient_properties[0], delim);
    std::string first_name;
    std::cin >> first_name;

    print(patient_properties[1], delim);
    std::string last_name;
    std::cin >> last_name;

    print(patient_properties[2], delim);
    std::string id_number;
    std::cin >> id_number;

    print(patient_properties[3], delim);
    std::string phone;
    std::cin >> phone;

    print(patient_properties[4], delim);
    std::string email;
    std::cin >> email;

    print(patient_properties[5], delim);
    std::string occupation;
    std::cin >> occupation;

    print(patient_properties[6], delim);
    std::string marital_status;
    std::cin >> marital_status;

    print(patient_properties[7], delim);
    std::string date_of_birth;
    std::cin >> date_of_birth;
}

void print(std::string const &patient_data, std::string const &delim)
{
    std::cout << "Please enter your " << patient_data << delim;
}