/* Разработайте структуру по имени car, которая будет хранить следующую
ин­формацию об автомобиле:
название производителя в виде строки в символьном массиве или в объекте
string, а также год выпуска автомобиля в виде целого числа.

Напишите программу, которая запросит пользователя, сколько автомо­билей
необходимо включить в каталог. Затем программа должна применить new для
создания динамического массива структур саг указанного пользователем размера.
Далее она должна пригласить пользователя ввести название произво­дителя и
год выпуска для наполнения данными каждой структуры в массиве (см.главу 4).
И, наконец, она должна отобразить содержимое каждой структуры.

Пример запуска программы должен выглядеть подобно следующему:
Сколько автомобилей поместить в каталог? 2
Автомобиль #1:
Введите производителя: Hudson Hornet
Укажите год выпуска: 1952
Автомобиль #2:
Введите производителя: Kaiser
Укажите год выпуска: 1951
Вот ваша коллекция:
1952 Hudson Hornet
1951 Kaiser*/

#include <iostream>
#include <string>

struct car
{
    std::string brand;
    int release_year;
};

int main()
{
    std::cout << "How many cars do you wish for catalog? ";
    int num_of_cars;
    (std::cin >> num_of_cars).get();
    car *catalog_cars = new car[num_of_cars];

    for (int car_number = 0; car_number < num_of_cars; car_number++)
    {
        std::cout << "Car #" << car_number + 1 << ": \n";

        std::cout << "Please enter the brand: ";
        std::getline(std::cin, catalog_cars[car_number].brand);

        std::cout << "Please enter the release year: ";
        (std::cin >> catalog_cars[car_number].release_year).get();
    }

    std::cout << "\nHere is your collection:\n";
    for (int car_number = 0; car_number < num_of_cars; car_number++)
    {
        std::cout << catalog_cars[car_number].brand << ", "
                  << catalog_cars[car_number].release_year << '\n';
    }

    delete[] catalog_cars;
    return 0;
}
