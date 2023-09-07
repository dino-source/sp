/*Напишите программу, которая приглашает пользователя ввести три результа­
та забега на 40 ярдов (или 40 метров, если желаете) и затем отображает эти
значения и их среднее. Для хранения данных применяйте объект array. (Если
объект array не доступен, воспользуйтесь встроенным массивом.)*/

#include <iostream>
#include <array>

int main()
{
    std::array<double, 3> dash_result;
    std::cout << "Enter the first dash result: ";
    std::cin >> dash_result[0];
    std::cout << "Enter second dash result: ";
    std::cin >> dash_result[1];
    std::cout << "Enter third dash result: ";
    std::cin >> dash_result[2];

    std::cout << "\nResults: " << dash_result[0] << ", " << dash_result[1] << ", "
              << dash_result[2] << ";\n";

    double average_value = (dash_result[0] + dash_result[1] + dash_result[2]) / 3;
    std::cout << "Average value: " << average_value << '\n';
}