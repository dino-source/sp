// chartype.срр — тип char

#include <iostream>

int main()
{
    using namespace std;

    char ch; // объявление переменной char
    cout << endl << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl << endl;

    return 0;
}