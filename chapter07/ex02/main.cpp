/*Напишите программу, которая запрашивает у пользователя 10 результатов игры
в гольф, сохраняя их в массиве. При этом необходимо обеспечить возможность
прекращения ввода до ввода всех 10 результатов. Программа должна отобразить
все результаты в одной строке и сообщить их среднее значение. Реализуйте ввод, 
отображение и вычисление среднего в трех отдельных функциях, рабо­тающих с массивами
.*/

#include <iostream>

const int MAX{10};
void message();
int fill_array(double ar[], int limit);
void print_results(const double ar[], int n);
void average_score(double ar[], int n);

int main()
{
    message();
    double scores[MAX];
    int size = fill_array(scores, MAX);
    print_results(scores, size);
    average_score(scores, MAX);
    std::cout << "Done.\n";
}

void message()
{
    std::cout << "Enter ten golf scores (enter q to quit).\n";
}

int fill_array(double ar[], int limit)
{
    limit = 10;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        std::cout << "Enter score #" << (i + 1) << ": ";
        std::cin >> temp;
        if (!std::cin)
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
            {
                continue;
            }
            std::cout << "Bad input; Input process terminated.\n";
            break;
        }
        else if (temp < 0)
        {
            break;
        }
        ar[i] = temp;
    }
    return i;
}

void print_results(const double ar[], int n)
{
    std::cout << "\nResults: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << ar[i] << ";" << ' ';
    }
}

void average_score(double ar[], int n)
{
    double sum_of_scores{};
    for (int i = 0; i < n; i++)
    {
        sum_of_scores += ar[i];
    }
    double average_score = sum_of_scores / n;
    std::cout << "\nAverage score: " << average_score << '\n';
}