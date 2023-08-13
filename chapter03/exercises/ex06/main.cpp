/*Write a program that asks how many miles you have driven and how many gallons
of gasoline you have used and then reports the miles per gallon your car has gotten.
Or, if you prefer, the program can request distance in kilometers and petrol in liters
and then report the result European style, in liters per 100 kilometers.

Напишите программу, которая запрашивает количество миль, пройденных ав­томобилем,
и количество галлонов израсходованного бензина, а затем сообща­ет
значение количества миль на галлон. Или, если хотите, программа может
запрашивать расстояние в километрах, а объем бензина в литрах, и выдавать
результат в виде количества литров на 100 километров.*/

#include <iostream>
#include <string>
#include <vector>

using UserData = std::vector<std::string>;
void print(std::string const &user_data, std::string const &delim);
std::string get_string_from_user();
std::string gallons_of_gasoline();
UserData get_user_data(UserData &driven_miles_and_gallons_of_gasoline);

int main()
{
    std::vector<std::string> driven_miles_and_gallons_of_gasoline{
        "driven miles", "used gallons of gasoline"};
    std::string delim = ": ";
    UserData user_data = get_user_data(driven_miles_and_gallons_of_gasoline);
    std::cout << "you've driven " << get_string_from_user << " miles and used "
              << gallons_of_gasoline << " gallons of gasoline."
              << "\n\n";
}

void print(std::string const &user_data, std::string const &delim)
{
    std::cout << "Enter a number of " << user_data << delim;
}

std::string get_string_from_user()
{
    std::string user_input;
    std::cin >> user_input;
    return user_input;
}

std::string gallons_of_gasoline()
{
    std::string user_input_two;
    std::cin >> user_input_two;
    return user_input_two;
}

UserData get_user_data(UserData &driven_miles_and_gallons_of_gasoline)
{
    UserData user_data;
    std::string delim = ": ";
    for (size_t i = 0; i < driven_miles_and_gallons_of_gasoline.size(); i++)
    {
        print(driven_miles_and_gallons_of_gasoline[i], delim);
        std::string user_input = get_string_from_user();
        user_data.push_back(user_input);
    }
    return user_data;
}