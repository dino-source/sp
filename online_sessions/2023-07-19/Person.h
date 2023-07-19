#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person
{
private:
    int age {18};
    double height {180};
    double weight {80};
    std::string first_name {"John"};
    std::string last_name {"Doe"};
    std::string id {"1234-5678"};
    std::string mobile_phone {"+1234567890"};
    std::string address {"Seattle WA, 92 NW st., apt. 11"};
    std::string email {"noname@anonymous.us"};

public:
    void set_age(int a) { age = a; }
    int get_age() const { return age; }

    void set_height(double h) { height = h; }
    double get_height() const { return height; }

    void set_weight(double w) { weight = w; } 
    double get_weight() const { return weight; }

    void set_first_name(std::string const &fn) { first_name = fn; }
    std::string get_first_name() const { return first_name; }

    void set_last_name(std::string const &ln) { last_name = ln; }
    std::string get_last_name() const { return last_name; }
};

#endif // PERSON_H
