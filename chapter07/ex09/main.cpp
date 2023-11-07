/*Следующее упражнение позволит попрактиковаться в написании функций, ра­ботающих 
с массивами и структурами. Ниже представлен каркас программы. Дополните его 
функциями, описанными в комментариях.

getinfo() принимает два аргумента: указатель на первый элемент массива 
структур student и значение int, представляющее количество элементов в массиве. 
Функция запрашивает и сохраняет данные о студентах. Ввод прекращается либо после
наполнения массива, либо при вводе пустой строки в качестве имени студента. 
Функция возвращает действительное количество введенных элементов.

displayl() принимает в качестве аргумента структуру student
и отображает ее содержимое.

display2() принимает адрес структуры student в качестве аргумента
и отображает ее содержимое.

display3() принимает указатель на первый элемента массива структур student
и количество элементов в этом массиве и отображает содержимое всех структур 
в массиве.*/

#include <iostream>

const int SLEN = 30;

struct student 
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfо(student ра[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    std::cout << "Enter class size: ";
    int class_size;
    std::cin >> class_size;

    while (std::cin.get() != '\n')
        continue;

    student *ptr_stu = new student[class_size];
    int entered = getinfо(ptr_stu, class_size);

    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }

    display3(ptr_stu, entered);
    delete [] ptr_stu;
    std::cout << "Done\n";
}

int getinfо(student pa[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        std::cout << "Student #" << i+1 << "\n Full name: ";
        if(!(std::cin.get(pa[i].fullname, SLEN)))
            return i;
        while(std::cin.get() != '\n') 
        continue;

        std::cout << " Hobby: ";
        std::cin.getline(pa[i].hobby, SLEN);

        std::cout << " opplevel: ";
        std::cin >> pa[i].ooplevel;

        std::cin.get();
    }
    return i;
}

void display1(student st)
{
    std::cout << "\n Full name: " << st.fullname
         << "\n Hobby: " << st.hobby
         << "\n opplevel: " << st.ooplevel << '\n';
}

void display2(const student *ps)
{
    std::cout << "\n Full name: " << ps->fullname
         << "\n Hobby: " << ps->hobby
         << "\n opplevel: " << ps->ooplevel << '\n';
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "\n Full name: " << pa[i].fullname
                << "\n Hobby: " << pa[i].hobby
                << "\n opplevel: " << pa[i].ooplevel << '\n';
    }
}