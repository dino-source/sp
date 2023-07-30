// Stephen Prata's "C++ Primer Plus" (Sixth Edition)

// Chapter 2. Exercise 5.

// Write a program that has main() call a user-defined function that takes a Celsius
// temperature value as an argument and then returns the equivalent Fahrenheit value.
// The program should request the Celsius value as input from the user and display
// the result, as shown in the following code:
// Please enter a Celsius value: 20
// 20 degrees Celsius is 68 degrees Fahrenheit.
// For reference, here is the formula for making the conversion:
// Fahrenheit = 1.8 × degrees Celsius + 32.0

#include <iostream>
double celsius_to_fahrenheit(double temperature_in_celsius);



int main()
{
    using namespace std;
    int celsius_value;
    cout << "Please enter a Celsius value: ";
    cin >> celsius_value;
    char delimeter = '\n';
    int fahrenheit_value = celsius_to_fahrenheit(celsius_value);
    cout << celsius_value << " degrees Celsius is " 
         << fahrenheit_value << " degrees Fahrenheit" << delimeter; 
}

double celsius_to_fahrenheit(double temperature_in_celsius)
{
    double temperature_in_fahrenheit = 1.8 * temperature_in_celsius +32.0;
    return temperature_in_fahrenheit;
}