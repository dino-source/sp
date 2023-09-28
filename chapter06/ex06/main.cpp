/*Постройте программу, которая отслеживает пожертвования в Общество
Защиты Влиятельных Лиц.
Она должна запрашивать у пользователя количест­во
меценатов, а затем приглашать вводить их имена и суммы пожертвований от
каждого.
Информация должна сохраняться в динамически выделяемом массиве
структур. Каждая структура должна иметь два члена: символьный массив (или
объект string) для хранения имени и переменную-член типа double — для
хранения суммы пожертвования.
После чтения всех данных программа должна отображать имена и суммы пожертвований
тех, кто не пожалел $10 000 и бо­лее. Этот список должен быть озаглавлен меткой
“Grand Patrons”. После этого программа должна выдать список остальных жертвователей.
Он должен быть озаглавлен “Patrons”.
Если в одной из двух категорий не окажется никого, про­грамма должна напечатать
“none”. Помимо отображения двух категорий, ника­кой другой сортировки делать не нужно.*/

#include <iostream>
#include <string>

struct contibutor
{
    std::string name;
    double donation_amount{};
};

int main()
{
    std::cout << "Please, enter the number of members: ";
    unsigned member{0}, count{0};
    (std::cin >> member).get();
    contibutor *patron = new contibutor[member];
    for (unsigned i{}; i < member; i++)
    {
        std::cout << '\n'
                  << i + 1 << " Name: ";
        std::getline(std::cin, patron[i].name);
        std::cout << "Amount of donation: ";
        (std::cin >> patron[i].donation_amount).get();
    }

    std::cout << "\nGreat Patrons: ";
    for (unsigned gp{}; gp < member; gp++)
    {
        if (patron[gp].donation_amount >= 10000)
        {
            std::cout << patron[gp].name << '\t' << patron[gp].donation_amount << '\t';
            count++;
        }
        std::cout << '\n';
    }

    if (count == 0)
    {
        std::cout << "none.\n";
    }

    std::cout << "Patrons: ";
    if (count == member)
    {
        std::cout << "none.";
    }
    else
    {
        for (unsigned p{}; p < member; p++)
        {
            if (patron[p].donation_amount < 10000)
            {
                std::cout << patron[p].name << '\t' << patron[p].donation_amount << ' ';
            }
        }
        std::cout << '\n';
    }
    delete[] patron;
}