#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <map>
#include <string_view>

struct user
{
    std::string name;
    int id_number;
    int age;
};

template<typename T>
void print(const T &collection)
{
    for (auto elem : collection)
    {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}

template<typename T1, typename T2>
void print(std::string_view comment, const std::map<T1, T2> &m)
{
    std::cout << comment;
    // Iterate using C++17 facilities
    for (const auto& [key, value] : m)
        std::cout << '[' << key << "] = " << value << "; ";
    std::cout << '\n';
}

int main()
{
    std::vector IDs{1, 19, 74, 52, 66, 3, 4, 66, 19};
    print(IDs);
    std::set<int> unique_ids(IDs.begin(), IDs.end());
    print(unique_ids);
    std::map<std::string, int> m{{"CPU", 10}, {"GPU", 15}, {"RAM", 20}};
    print("а вот и твои кроссовки ", m);
    std::cout << m["GPU"] << '\n';
    std::vector<user> users {{"Lola", 9110752 , 9}, {"Martin", 8179065, 6}, {"Rose", 759, 78}};
    for (const auto& [name, id, age] : users)
    {
         std::cout << '[' << id << "] = " << name << ", " << age << "; ";
    }
    std::cout << '\n';
    
}