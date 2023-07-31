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
    void eat();
    void sleep();
    void run();
    void sound();
    void info();   
};

void Cat::eat()
{
    std::cout << "crunch-crunch-crunch";
}
void Cat::sleep()
{
    std::cout << "Z-z-Z-z";
}
void Cat::run()
{
    std::cout << "*Thrump-thrump*";
}
void Cat::sound()
{
    std::cout << "purr";
}
void Cat::info()
{
    std::string breed; name; date_of_birth; fur_color; eyes_color; weight; height; length;
}




int main()
{
    Cat Bun
    {
        std::string breed = "brown cat"; 
        std::string name = "Bun";
        std::string date_of_birth = "2010_12_03";
        std::string fur_color = "orange";
        std::string eyes_color = "dark brown";
        std::string weight = "4 kg";
        std::string height = "30 cm";
        std::string length = "76 cm";
    }      
}
