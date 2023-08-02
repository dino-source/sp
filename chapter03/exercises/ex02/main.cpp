/*Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors.*/

#include <iostream>
#include <cmath>

int main()
{
    const int INCHES_PER_FOOD{12};
    const double METERS_PER_INCHE{0.0254};
    double part_of_height_in_feet;
    double part_of_height_in_inches;
    std::cout << "Please, enter your weight height in feed and inches:\n";
    std::cin >> part_of_height_in_feet >> part_of_height_in_inches;

    const double POUNDS_PER_KILOGRAM{2.2};
    double height_in_inches = part_of_height_in_feet * INCHES_PER_FOOD + part_of_height_in_inches;
    double height_in_meters = height_in_inches * METERS_PER_INCHE;
    double weight_in_pounds;
    std::cout << "Please, enter your weight in pounds:\n";
    std::cin >> weight_in_pounds;
    double weight_in_kilograms = weight_in_pounds / POUNDS_PER_KILOGRAM;
    double square_of_height_in_meters = pow(height_in_meters, 2);
    double bmi = weight_in_kilograms / square_of_height_in_meters;
    std::cout << "So, your BMI is: " << bmi << "\nCongratulations!\n";
}