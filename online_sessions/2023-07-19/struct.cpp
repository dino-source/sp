#include <iostream>
#include <string>
#include <vector>

#include "Person.h"


int main()
{
    std::vector<Person> employees;

    Person employee1;
    employee1.set_age(23);
    employee1.set_height(183.5);
    employee1.set_weight(83.5);
    employee1.set_first_name("Nadia");
    employee1.set_last_name("White");

    employees.push_back(employee1);

    Person employee2;
    employee2.set_age(24);
    employee2.set_height(184.5);
    employee2.set_weight(84.5);
    employee2.set_first_name("Teddy");
    employee2.set_last_name("Bear");

    employees.push_back(employee2);

    for (auto const &employee : employees)
    {
        std::cout
            << "First name: " << employee.get_first_name()
            << "\nLast name: " << employee.get_last_name()
            << "\nAge: " << employee.get_age()
            << '\n';
    }
}
