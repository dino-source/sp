/* Напишите программу, которая открывает текстовый файл, читает его символ
за символом до самого конца и сообщает количество символов в файле.*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main()
{
    std::string filename;
    std::ifstream fin;
    std::cout << "Enter name of data file: "; // scores.txt
    std::getline(std::cin, filename);
    fin.open(filename.c_str());
    if (!fin.is_open())
    {
        std::cout << "Could not open the file " << filename << '\n';
        std::cout << "Program termimating.\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    int count{};
    fin >> ch;
    while (fin.good())
    {
        ++count;
        fin >> ch;
    }
    std::cout << "Items read: " << count << '\n';

    fin.close();
}
