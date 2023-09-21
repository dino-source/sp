/* Когда вы вступите в Благотворительный Орден Программистов (БОП), к вам
могут обращаться на заседаниях БОП по вашему реальному имени, по должно­сти
либо секретному имени БОП. Напишите программу, которая может выво­дить списки
членов по реальным именам, должностям, секретным именам либо по предпочтению
самого члена. В основу положите следующую структуру:

// Структура имен Благотворительного Ордена Программистов (БОП)
struct bop {
char fullname [strsize]; // реальное имя

char title [strsize]; // должность

char bopname [strsize]; // секретное имя БОП

int preference; // 0 = полное имя, 1 = титул, 2 = имя БОП
};

В этой программе создайте небольшой массив таких структур и инициализируй­те
его соответствующими значениями. Пусть программа запустит цикл, кото­рый даст
возможность пользователю выбирать разные альтернативы:
a. display by name
c. display by bopname
q. quit
b. display by title
d. display by preference
Обратите внимание, что “display by preference” (отображать по предпочтениям)
не означает, что нужно отобразить член preference; это значит, что необходи­мо
отобразить член структуры, который соответствует значению preference.
Например, если preference равно 1, то выбор d должен вызвать отображение
должности данного программиста.
Пример запуска этой программы может вы­глядеть следующим образом:

Benevolent Order of Programmers Report
a. display by name
b. display by title
c. display by bopname
d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
Next choice: q
Bye!*/

#include <iostream>

void show_menu();
void preference();
void fullname();
void title();
void bop_name();

const int SIZE{20};
struct bop
{
    char fullname[SIZE]; // реальное имя

    char title[SIZE]; // должность

    char bopname[SIZE]; // секретное имя БОП

    int preference; // 0 = полное имя, 1 = должность, 2 = имя БОП
};

bop programmers[5]{
    {"Wimp Macho", "Senior Programmer", "SUGAR", 0},
    {"Raki Rhodes", "Junior Programmer", "NOODLE", 1},
    {"Celia Laiter", "Senior Programmer", "MIPS", 2},
    {"Hoppy Hipman", "Analyst Trainee", "HOPE", 1},
    {"Pat Hand", "Middle Engineer", "LOOPY", 2},
};

int main()
{
    show_menu();
    char choice;
    std::cin >> choice;
    while (choice != 'q')
    {
        switch (choice)
        {
        case 'a':
            fullname();
            break;
        case 'b':
            title();
            break;
        case 'c':
            bop_name();
            break;
        case 'd':
            preference();
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
    std::cout << "Thank you. Bye!\n";
    return 0;
}

void show_menu()
{
    std::cout << "Benevolent Order of Programmers Report\n"
                 "a.display by name\n"
                 "b.display by title\n"
                 "c.display by bopname\n"
                 "d.display by preference\n"
                 "q.quit\n";
    std::cout << "Enter a, b, c, d, or q to quit: ";
}

void fullname()
{
    std::cout << programmers[0].fullname << '\n';
    std::cout << programmers[1].fullname << '\n';
    std::cout << programmers[2].fullname << '\n';
    std::cout << programmers[3].fullname << '\n';
    std::cout << programmers[4].fullname << "\n\n";
}

void title()
{
    std::cout << programmers[0].title << '\n';
    std::cout << programmers[1].title << '\n';
    std::cout << programmers[2].title << '\n';
    std::cout << programmers[3].title << '\n';
    std::cout << programmers[4].title << "\n\n";
}

void bop_name()
{
    std::cout << programmers[0].bopname << '\n';
    std::cout << programmers[1].bopname << '\n';
    std::cout << programmers[2].bopname << '\n';
    std::cout << programmers[3].bopname << '\n';
    std::cout << programmers[4].bopname << "\n\n";
}

void preference()
{
    std::cout << programmers[0].fullname << '\n';
    std::cout << programmers[1].title << '\n';
    std::cout << programmers[2].bopname << '\n';
    std::cout << programmers[3].title << '\n';
    std::cout << programmers[4].bopname << "\n\n";
}
