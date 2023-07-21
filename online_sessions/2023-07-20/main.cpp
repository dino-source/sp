#include <iostream>
#include <string>
#include <vector>


struct Student
{
    std::string first_name {"John"};
    std::string last_name {"Doe"};
    std::string id {"A-0000-0000"};
    std::string mobile_phone {"++1(253)632-32-32"};
    std::string address {"Seattle WA, 92 NW st., apt. 11"};
    std::string email {"noname@anonymous.us"};
    int age {18};
    int grade {1};
    double health {100.0};

    void introduce_yourself(bool report_age = true, std::string const &delim = "\n") const
    {
        std::cout << "My name is " << first_name << ' ' << last_name << '.';
        if (report_age) {
            std::cout << " I am " << age << " years old.";            
        }
        std::cout << delim;
    }
    
    void confess() const
    {
        std::cout << "Now I am drinking. I loose my health: " << health << '\n';
    }

    void drink(int shots)
    {
        health /= shots; // health = health / shots;
    }
};

using Students = std::vector<Student>;

void print(Students const &students, std::string const &delim = "\n\n") 
{
    for (auto const &student : students)
    {
        student.introduce_yourself();
    }
    std::cout << delim;
}

void print(Student const &student, std::string const &delim = "\n") 
{
    student.introduce_yourself();
    std::cout << delim;
}

void live(Students &students)
{
    static bool one_of_students_is_dead = false;
    if (!one_of_students_is_dead)
    {
        for (auto &s : students)
        {
            s.drink(2);
            s.introduce_yourself(false, " ");
            s.confess();

            if (s.health < 1)
            {
                std::cout << s.first_name << ' ' << s.last_name << " is dead.\n\n\n\n";
                one_of_students_is_dead = true;
                std::erase_if(students, [](Student &s){ return s.health < 1; });
                return;
            }
        }
        std::cout << "\n";        
    }
} 

int main()
{
    Student george
    {
        .first_name = "George",
        .last_name = "Blake",
        .id = "A-0000-0001",
        .mobile_phone = "+1(253)632-32-32",
        .address = "Seattle WA, 11 NW st., apt. 34B",
        .email = "george.black@gmail.com",
        .age = 18,
        .grade = 1,
        .health = 150.6
    };

    Student nataly
    {
        .first_name = "Nataly",
        .last_name = "White",
        .id = "F-0000-0002",
        .mobile_phone = "+1(253)535-35-35",
        .address = "Redmond WA, 52 NS st., apt. 23C",
        .email = "nataly.rostova@hotmail.com",
        .age = 19,
        .grade = 2,
        .health = 112.4
    };

    Student robert
    {
        .first_name = "Robert",
        .last_name = "Young",
        .id = "D-0000-0003",
        .mobile_phone = "+1(253)453-53-53",
        .address = "Auburn WA, 92 NW st., apt. 13B",
        .email = "robert.young@hotmail.com",
        .age = 20,
        .grade = 3,
        .health = 109.8
    };

    Student donald
    {
        .first_name = "Donald",
        .last_name = "Smith",
        .id = "C-0000-0004",
        .mobile_phone = "+1(253)425-25-25",
        .address = "Kirkland WA, 23 NE st., apt. 33C",
        .email = "ronald.smith@hotmail.com",
        .age = 18,
        .grade = 1,
        .health = 124.2
    };

    std::vector<Student> students {george, nataly, robert, donald};

    print(students);

    for (int i = 0; i < 10; ++i)
    {
        live(students);
    }

    print(students);
}