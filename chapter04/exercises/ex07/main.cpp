/*William Wingate runs a pizza-analysis service. For each pizza, he needs to record
the following information:
The name of the pizza company, which can consist of more than one word
The diameter of the pizza
The weight of the pizza*/

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> pizza_data_fields{
        "name of the pizza company: ",
        "the diameter of pizza: ",
        "the weigth of the pizza: ",

    };
    std::string user_input;
    std::vector<std::string> pizza_data;
    for (auto &element : pizza_data_fields)
    {
        std::cout << "Please, enter the information about pizza: " << element;
        std::cin >> user_input;
        pizza_data.push_back(user_input);
    }

    std::cout << "\n\nHere is the information about your pizza:\n";

    for (auto const &element : pizza_data)
    {
        std::cout << element << '\n';
    }
}