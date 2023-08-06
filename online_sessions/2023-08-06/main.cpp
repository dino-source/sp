#include <iostream>
#include <string>
#include <vector>

void user_prompt(std::string const &msg, std::string const &delim)
{
    std::cout << msg << delim;
}

std::string get_string_from_user()
{
    std::string userAnswer;
    std::cin >> userAnswer;
    return userAnswer;
}

int main()
{
    std::vector<std::string> user_properties{
        "first name", "last name", "address", "email", "phone"};
    std::string delimiter = ": ";
    for (size_t i = 0; i < user_properties.size(); i++)
    {
        user_prompt("Please enter your " + user_properties[i], delimiter);
        std::string user_property = get_string_from_user();
        std::cout << "Now I know your " + user_properties[i] + delimiter << user_property << '\n';
    }
}
