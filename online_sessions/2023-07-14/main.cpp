#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> user_data_fields {
        "first name: ",
        "last name: ",
        "address: ",
        "e-mail: ",        
        "mobile phone: ",
    };
    std::string user_input;
    std::vector<std::string> user_data;
    // range based for loop
    for (auto &element : user_data_fields)
    {
        std::cout << "Please, enter your " << element;
        std::cin >> user_input;
        user_data.push_back(user_input);
    }
    
    std::cout << "\n\nHere is your data:\n";

    for (auto const &element : user_data)
    {
        std::cout << element << '\n';
    }
}