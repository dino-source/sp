/*Пусть имеется следующее объявление структуры:
struct box
{
char maker[40];
float height;
float width;
float length;
float volume;
};

а. Напишите функцию, принимающую структуру box по значению и отображаю­щую 
все ее члены.
б. Напишите функцию, принимающую адрес структуры box и устанавливающую
значение члена volume равным произведению остальных трех членов.
в. Напишите простую программу, которая использует эти две функции.*/

#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_info(box b);
void volume_change(box *b);

int main()
{
    box carton = {"BoxCompany", 4, 50, 10, 0};
    volume_change(&carton);
    show_info(carton);
}

void show_info(box b)
{
    std::cout << "Maker: " << b.maker << "\n";
    std::cout << "Height: " << b.height << "\n";
    std::cout << "Width: " << b.width << "\n";
    std::cout << "Length: " << b.length << "\n";
    std::cout << "Volume: " << b.volume << "\n";
}

void volume_change(box *b)
{
    b->volume = b->height * b->width * b->length;
}