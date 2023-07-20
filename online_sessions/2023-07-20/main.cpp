#include <iostream>
#include <string>
#include <vector>

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
    george.first_name = "George";
    george.introduce_yourself();
    Student nataly;
    nataly.first_name = "Nataly";
    nataly.last_name = "Rostova";
    nataly.age = 19;
    nataly.introduce_yourself();
    Student robert;
    robert.first_name = "Robert";
    robert.age = 20;
    robert.introduce_yourself();

    std::vector<Student> students;
    students.push_back(george);
    students.push_back(nataly);
    students.push_back(robert);
    
    
}