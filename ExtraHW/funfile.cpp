/* Add some member functions and data members to the Cat function*/ 

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
        std::cout << "\n*sounds of a broken vase*\n";
    }
    void sound()
    {
        std::cout << "purr";
    }

    void meet_the_cat() const
    {
        std::cout << "Say hi to " << name << "."
                  << "I think she likes you a lot."
                  << "\n\n";
    }
    void trauma_escape() const
    {
        std::cout << "Watch out!" << run;
        std::cout << "Rosie could've knocked you down, and she has pretty sharp claws.";
        std::cout << " But it's a pity that the vase is broken now\n";
    }

    void find_the_cat()
    {
        std::cout << "Oh, I don't really know where the cats are. ";
        std::cout << "They always hide when someone new enters the house... ";
        std::cout << "Should we find them? \n\n";
        std::cout << "Do you want to find the cat? Enter yes(1) or no(2): ";
        int choice;
        std::cin >> choice;

        switch (choice)
        {
            case 1:
            std::cout << "Okay, what can we do now.. \n" << "..meow?\n" << "oh, here they are";
            break;

            case 2:
            std::cout << "Well, okay. So now we can go.";
            break;

            default:
            std::cout << "I didn't understad what you said. Could you repeat please?";
            break;
        }

    }    
};

using Cats = std::vector<Cat>;
void print(Cat);

int main()
{
    Cat boba
    {
        .breed = "Turkish Van",
        .name = "Boba",
        .date_of_birth = "2010_12_03",
        .fur_color = "white & orange",
        .eyes_color = "dark brown",
        .weight = "4 kg",
        .height = "23 cm",
        .length = "56 cm"
    };

    Cat richi
    {
        .breed = "Japanese Bobtail",
        .name = "Richi",
        .date_of_birth = "2019_08_20",
        .fur_color = "black & white",
        .eyes_color = "green",
        .weight = "5 kg",
        .height = "25 cm",
        .length = "45 cm"
    };

    Cat mimi
    {
        .breed = "Calico",
        .name = "Mimi",
        .date_of_birth = "2015_02_28",
        .fur_color = "black & white & orange",
        .eyes_color = "yellow",
        .weight = "3.5 kg",
        .height = "24 cm",
        .length = "62 cm"

    };

    Cat rosie
    {
        .breed = "Oriental Short Hair",
        .name = "Rosie",
        .date_of_birth = "2017_03_15",
        .fur_color = "white & beige & black",
        .eyes_color = "green",
        .weight = "4.2 kg",
        .height = "26 cm",
        .length = "74 cm"

    };

    Cats cats{rosie};

    print(Cats);
};

void print(Cats const &cats)
{
    for (auto const &Cat : cats)
    {
       Cat.find_the_cat();
    }
}

