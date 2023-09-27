/* Напишите программу, которая открывает текстовый файл, читает его символ
за символом до самого конца и сообщает количество символов в файле.*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main()
{
    std::string filename{"scores.txt"};
    std::ifstream fin;

    if (fin.open(filename.c_str()); !fin.is_open())
    {
        std::cout << "Could not open the file " << filename
                  << "\nProgram terminating.\n";
        exit(EXIT_FAILURE);
    }

    int count{};

    for (char ch{}; fin.good() && fin >> ch;)
    {
        ++count;
    }
    std::cout << "Items read: " << count << '\n';

    fin.close();
}
