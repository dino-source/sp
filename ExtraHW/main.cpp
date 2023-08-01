/* Implement Cat class with the following data members:
1. breed (for example, "Maine Coon")
2. name (for example, "Wendy")
3. date_of_birth (for example, "2016-07-25")
4. fur_color (for example, "brown")
5. eyes_color (for example, "green")
6. weight (for example, 7 kg)
7. height (for example, 35 cm)
8. length (for example, 80 cm)
Provide the following member functions:
1. eat()
2. sleep()
3. run()
4. sound()
5. info()
Use std::cout object to output cat status to console. Define std::vector of 4
objects of type Cat. Use range-based 'for' loop to visit each element of the
vector and output each cat info to console.
Cat member functions have to be defined with respect to constness (constant
member functions are those functions that are denied permission to change the
values of the data members of their class).
Use 'if-else' statement where applicable. */

#include <iostream>
#include <vector>
#include <string>

struct Cat
{
    std::string breed{"Norwegian Forest cat"};
    std::string name{"Bun"};
    std::string date_of_birth{"2010-11-05"};
    std::string fur_color{"brown"};
    std::string eyes_color{"brown"};
    std::string weight{"5 kg"};
    std::string height{"28 cm"};
    std::string length{"72 cm"};

    void eat()
    {
        std::cout << "crunch-crunch-crunch";
    }
    void sleep()
    {
        std::cout << "Z-z-Z-z";
    }
    void run()
    {
        std::cout << "*Thrump-thrump*";
    }
    void sound()
    {
        std::cout << "purr";
    }
    void show_info() const
    {
        std::cout << "Say hi to " << name << "."
                  << "I think she likes you a lot."
                  << "\n";
    };
};

using Cats = std::vector<Cat>;

int main()
{
    Cat boba{
        .breed = "Turkish Van",
        .name = "Boba",
        .date_of_birth = "2010_12_03",
        .fur_color = "white & orange",
        .eyes_color = "dark brown",
        .weight = "4 kg",
        .height = "23 cm",
        .length = "56 cm"};

    Cat richi{
        .breed = "Japanese Bobtail",
        .name = "Richi",
        .date_of_birth = "2019_08_20",
        .fur_color = "black & white",
        .eyes_color = "green",
        .weight = "5 kg",
        .height = "25 cm",
        .length = "45 cm"};

    Cat mimi{
        .breed = "Calico",
        .name = "Mimi",
        .date_of_birth = "2015_02_28",
        .fur_color = "black & white & orange",
        .eyes_color = "yellow",
        .weight = "3.5 kg",
        .height = "24 cm",
        .length = "62 cm"

    };

    Cat rosie{
        .breed = "Oriental Short Hair",
        .name = "Rosie",
        .date_of_birth = "2017_03_15",
        .fur_color = "white & beige & black",
        .eyes_color = "green",
        .weight = "4.2 kg",
        .height = "26 cm",
        .length = "74 cm"

    };

    std::vector<Cat> cats{boba, richi, mimi, rosie};
};
