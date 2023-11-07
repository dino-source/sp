/*Вернитесь к программе из листинга 7.7 и замените три функции обработки 
мас­сивов версиями, которые работают с диапазонами значений, заданными парой
указателей. Функция fill_array() вместо возврата действительного количест­ва 
прочитанных значений должна возвращать указатель на место, следующее за
последним введенным элементом; прочие функции должны использовать его в
качестве второго аргумента для идентификации конца диапазона данных.*/

#include <iostream>
const int Max = 5;

double *fill_array(double *begin, const double *end);
void show_array(const double *begin, const double *end);
void revalue(double r, double *begin, const double *end);

int main()
{
    double properties[Max];
    double *pt_end = fill_array(properties, properties+Max);

    show_array(properties, pt_end);
    if ((pt_end - properties) > 0)
    {
        std::cout << "Enter revaluation factor: ";
        double factor;
        while (!(std::cin >> factor))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, pt_end);
        show_array(properties, pt_end);
    }
    std::cout << "Done.\n";
    std::cin.get();
    std::cin.get();
}

double *fill_array(double *begin, const double *end)
{
    double temp;
    double *pt;
    for (pt = begin; pt != end; pt++)
    {
        std::cout << "Enter value #" << (pt - begin)+1 << ": ";
        std::cin >> temp;
        if (!std::cin)
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        *pt = temp;
    }
    return pt;
}

void show_array(const double *begin, const double *end)
{
    const double *pt;
    for (pt = begin; pt != end; pt++)
    {
        std::cout << "Property #" << (pt - begin)+1 << ": $";
        std::cout << *pt << '\n';
    }
}

void revalue(double r, double *begin, const double *end)
{
    double *pt;
    for (pt = begin; pt != end; pt++)
        *pt *= r;
}