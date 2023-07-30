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

int main(int argc, char const *argv[])
{
    while (true)
    {
        std::cout << "\nWhat do you wanna know about the cat?";
        std::cout << "\nChoose a number (breed - 1, name - 2, date of birth - 3, fur color - 4, eyes color - 5, weight - 6, height - 7, length - 8). To quit enter 0.";
        std::cout << "\nEnter a number: ";  
        int number;
        std::cin >> number;

        switch (number)
        {
        case 1:
        std::cout << "His breed is the Norwegian Forest cat\n";
        break;

        case 2:
        std::cout << "His name is Bob\n";
        break;

        case 3:
        std::cout << "His date of birth is June 1, 2012\n";
        break;

        case 4:
        std::cout << "He's a calico cat\n";
        break;

        case 5:
        std::cout << "He has green eyes\n";
        break;

        case 6:
        std::cout << "It weighs 7 kg\n";
        break;

        case 7:
        std::cout << "His height is 35 cm\n";
        break;

        case 8:
        std::cout << "His length is 90 cm\n";
        break;

        case 0:
        std::cout << "You've chosen to qiut\n";
        goto end_infinite_while_loop;

        default:
        std::cout << "I don't understand you. Could you pick a number from 1 to 4?\n";
        break;
        }
    } end_infinite_while_loop:
    ;
}
