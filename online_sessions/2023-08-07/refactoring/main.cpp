#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello! My name is Rob Ott. I am your virtual psychologist.\n"
                 "The first step we have to do is to fill a questionnaire.\n"
                 "It'll be the starting point in your therapy. So let's start.\n\n";

    std::cout << "Please enter your first name: ";
    std::string first_name;
    std::cin >> first_name;

    std::cout << "Please enter your last name: ";
    std::string last_name;
    std::cin >> last_name;

    std::cout << "Please enter your ID number: ";
    std::string id_number;
    std::cin >> id_number;

    std::cout << "Please enter your phone number: ";
    std::string phone;
    std::cin >> phone;

    std::cout << "Please enter your email: ";
    std::string email;
    std::cin >> email;

    std::cout << "Please enter your occupation: ";
    std::string occupation;
    std::cin >> occupation;

    std::cout << "Please enter your marital status: ";
    std::string marital_status;
    std::cin >> marital_status;

    std::cout << "Please enter your date of birth: ";
    std::string date_of_birth;
    std::cin >> date_of_birth;
}
