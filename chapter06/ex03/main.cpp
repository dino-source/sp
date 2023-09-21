/*Напишите предшественник программы, управляемой меню. Она должна
отображать меню из четырех пунктов, каждый из них помечен буквой.
Если пользователь вводит букву, отличающуюся от четырех допустимых, программа
должна повторно приглашать его ввести правильное значение до тех пор, пока
он этого не сделает. Затем она должна выполнить некоторое простое действие
на основе пользовательского выбора.
Работа программы должна выглядеть при­мерно так:

Please enter one of the following choices:
c) carnivore    p) pianist
t) tree         g) game
f
Please enter a c, p, t, or g: r
Please enter a c, p, t, or g: t
A maple is a tree. */

#include <iostream>

void show_menu();
void carnivore();
void pianist();
void tree();
void game();

int main()
{
    show_menu();
    char choice;
    std::cin >> choice;
    while (choice != 'q')
    {
        switch (choice)
        {
        case 'c':
            carnivore();
            break;
        case 'p':
            pianist();
            break;
        case 't':
            tree();
            break;
        case 'g':
            game();
            break;
        case 'q':
            break;
        default:
            std::cout << "Oops, there is nothing here. Please, try again.\n";
            break;
        }
        show_menu();
        std::cin >> choice;
    }
    std::cout << "Thanks for using our program. Bye!\n";
    return 0;
}

void show_menu()
{
    std::cout << "Please enter on of the following choices:\n";
    std::cout << "c) carnivore"
              << "\t"
              << "p) pianist\n";
    std::cout << "t) tree"
              << "\t\t"
              << "g)game\n";
    std::cout << "Enter a c, p, t, g, or q to quit: ";
}

void carnivore()
{
    std::cout << "A carnivore is an animal that feeds on flesh.\n\n";
}

void pianist()
{
    std::cout << "A pianist is an individual musician who plays the piano.\n\n";
}

void tree()
{
    std::cout << "A maple is a tree\n\n";
}

void game()
{
    std::cout << "A game is a form of play or sport,"
              << " especially a competitive one played according to rules "
              << "and decided by skill, strength, or luck.\n\n";
}