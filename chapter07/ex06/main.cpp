/*Напишите программу, использующую описанные ниже функции.
Fill_array() принимает в качестве аргумента имя массива элементов типа
double и размер этого массива. Она приглашает пользовате­ля ввести значения double
для помещения их в массив. Ввод прекращается при наполнении массива либо когда 
пользова­тель вводит нечисловое значение и возвращает действитель­ное количество 
элементов.
Show_array() принимает в качестве аргументов имя массива значений double,
а также его размер, и отображает содержимое массива.
Reverse_array() принимает в качестве аргумента имя массива значений
double, а также его размер, и изменяет порядок его элемен­тов на противоположный.
Программа должна использовать эти функции для наполнения массива, обра­щения 
порядка его элементов, кроме первого и последнего, с последующим отображением.*/

#include <iostream>
#include <algorithm>

int Fill_array(double *arr, int n);
void Reverse_array(double *arr, int n);
void Show_array(const double *arr, int n);

int main()
{
    int SIZE{10};
    double array[SIZE];
    int size = Fill_array(array, SIZE);
    Show_array(array, size);
    Reverse_array(array, size);
    Show_array(array, size);
}

int Fill_array(double *arr, int n)
{
    int i{0};
    double num;
    std::cout << "Enter up to " << n << " values.\n";
    for (i = 0; i < n; i++)
    {
        std::cout << "Value #" << i + 1 << ": ";
        std::cin >> num;
        if (!std::cin)
        {
            break;
        }
        arr[i] = num;
    }
    return i;
}


void Reverse_array(double *arr, int n)
{
    for (int j = 1, i = n - 2; j < i; i--, j++)
    {
      std::swap(arr[j], arr[i]);
    }
}

void Show_array(const double *arr, int n)
{
    std::cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}
