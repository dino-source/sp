/*Напишите программу, которая многократно запрашивает у пользователя пару
чисел до тех пор, пока хотя бы одно из этой пары не будет равно 0. С каж­дой 
парой программа должна использовать функцию для вычисления среднего
гармонического этих чисел. Функция должна возвращать ответ main() для ото­бражения 
результата. Среднее гармоническое чисел — это инверсия среднего
значения их инверсий;
она вычисляется следующим образом:
среднее гармоническое = 2.0 * х * у / (х+у)*/

#include <iostream>

double harmonic(double x, double y);

int main()
{
    std::cout << "Enter pair of humber(0 to terminate): ";
    double x{0}, y{0};
    while ((std::cin >> x && x != 0) && (std::cin >> y && y !=0))
    {
        std::cout << "Harmonic (" << x << ", " << y << ") = " << harmonic(x, y);
        std::cout << "\nEnter pair of numbers: ";
    }
}

double harmonic(double x, double y)
{
    return (2.0 * x * y) / (x+y);
}