#include <iostream>
#include <string>

struct Student
{
    std::string first_name {"John"};
    std::string last_name {"Doe"};
    std::string id {"1234-5678"};
    std::string mobile_phone {"+1234567890"};
    std::string address {"Seattle WA, 92 NW st., apt. 11"};
    std::string email {"noname@anonymous.us"};
    int age {18};
    int grade {1};
    void introduce_yourself()
    {
        std::cout << "My name is " << first_name << ' ' << last_name << '\n';
        std::cout << "I am " << age << " years old.\n";
    }
};

int main()
{
    Student george;
    george.introduce_yourself();

}