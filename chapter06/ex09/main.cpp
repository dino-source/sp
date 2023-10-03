/*Выполните упражнение 6, но измените его так, чтобы данные можно было по­
лучать из файла. Первым элементом файла должно быть количество меценатов,
а остальная часть состоять из пар строк, в которых первая строка содержит
имя, а вторая — сумму пожертвования. То есть файл должен выглядеть пример­
но так:
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

struct contibutor
{
    std::string name;
    double donation_amount{};
};

int main()
{
    std::string filename{"contibutor_info.txt"};
    std::ifstream fin;
    fin.open(filename.c_str());

    if (!fin.is_open())
    {
        std::cout << "Could not open the file " << filename
                  << "\nProgram terminating.\n";
        exit(EXIT_FAILURE);
    };

    unsigned member{};
    unsigned count{};

    (fin >> member).get();

    contibutor *patron = new contibutor[member];

    for (unsigned i{}; i < member; i++)
    {
        std::getline(fin, patron[i].name);
        (fin >> patron[i].donation_amount).get();
    }

    std::cout << "Great Patrons:\n";
    for (unsigned gp{}; gp < member; gp++)
    {
        if (patron[gp].donation_amount >= 10000)
        {
            std::cout << patron[gp].name << '\t'
                      << patron[gp].donation_amount << '\n';
            count++;
        }
    }

    if (count == 0)
    {
        std::cout << "none.\n";
    }

    std::cout << "\nPatrons:\n";

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
                std::cout << patron[p].name << '\t' << patron[p].donation_amount << '\n';
            }
        }
    }

    fin.close();
    delete[] patron;
}