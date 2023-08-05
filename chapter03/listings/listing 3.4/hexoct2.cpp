// hexoct2.cpp -- отображает значения в шестнадцатеричном и восьмеричном форматах

#include <iostream>

int main()
{
    using namespace std;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << endl << "Monsieur cuts a striking figure!" << endl << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // манипулятор для изменения основания системы счисления
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct; // манипулятор для изменения основания системы счисления
    cout << "inseam = " << inseam << " (octal for 42) " << endl << endl;
    
    return 0;
}