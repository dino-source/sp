/*
Implement Dog class with the following data members:
1. breed (for example, "Siberian Husky")
2. name (for example, "Wolf")
3. date_of_birth (for example, "2015-08-25")
4. fur_color (for example, "white/black")
5. eyes_color (for example, "blue")
6. weight (for example, 23 kg)
7. height (for example, 52 cm)

Provide the following member functions:
1. eat()
2. sleep()
3. play()
4. sound()
5. info()

Use std::cout object to output dog status to console. Define std::vector of 4
objects of type Dog. Use range-based 'for' loop to visit each element of the
vector and output each dog info to console.
Dog member functions have to be defined with respect to constness (constant
member functions are those functions that are denied permission to change the
values of the data members of their class).
Use 'if-else' statement where applicable.
*/

#include <iostream>
#include <string>
#include <vector>

using Delim = std::string const &;
struct Dog
{
    std::string breed {"Malamute"};
    std::string name {"Rex"};
    std::string date_of_birth {"2015-08-25"};
    std::string fur_color {"white"};
    std::string eyes_color {"blue"};
    int age {5};
    int training_a_week {2};
    double weight {28.5};
    double height {52};

    void introduce_dog_pet() const
    {
        std::cout << "This is " << name << '.';
        std::cout << " It is " << age << " years old.";
        std::cout << '\n';
    }

    void awards(int training_a_week)
    {
        int awards = training_a_week * 0.5 * age;
    }

    void report() const
    {
        std::cout << "Now it is training. It got " << awards << "awards.\n";
    }
};


using Dogs = std::vector<Dog>;
void print(Dogs const &dogs, Delim delim = "\n\n");
void print(Dog const &dog, Delim delim = "\n");

int main ()
{
    Dog gina
    {
        .breed = "sheperd",
        .name = "Gina",
        .date_of_birth = "2014-03-08",
        .fur_color = "brown",
        .eyes_color = "black",
        .training_a_week = 2,
        .age = 9,
        .weight = 22.5,
        .height = 45
    };

    Dog art
    {
        .breed = "golden retriever",
        .name = "Art",
        .date_of_birth = "2021-05-31",
        .fur_color = "biege",
        .eyes_color = "brown",
        .age = 3,
        .training_a_week = 4,
        .weight = 35,
        .height = 54.5
    };

    Dog feliny
    {
        .breed = "dachshund",
        .name = "Feliny",
        .date_of_birth = "2019-04-25",
        .fur_color = "chocolate",
        .eyes_color = "brown",
        .age = 5,
        .training_a_week = 1,
        .weight = 6,
        .height = 23.5
    };

    Dog marta
    {
        .breed = "metis",
        .name = "Marta",
        .date_of_birth = "2015-03-20",
        .fur_color = "light brown with spots",
        .eyes_color = "green",
        .age = 8,
        .training_a_week = 3,
        .weight = 36,
        .height = 48
    };

    std::vector<Dog> dogs {gina, art, feliny, marta};

    print(dogs);

};
