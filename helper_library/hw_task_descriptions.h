#ifndef HW_TASK_DESCRIPTIONS_H
#define HW_TASK_DESCRIPTIONS_H

#include <vector>
#include <string>

namespace cpps::helper_library::hw
{
using Chapter = std::vector<std::string>;

inline Chapter chapter01 {
    "", // Chapter 1 has no exercises, so it has to have one "empty" exercise
};

inline Chapter chapter02 {
    //ex01
    "Write a C++ program that displays your name and address(or if you "
    "value your privacy, a fictitious name and address).",

    //ex02
    "Write a C++ program that asks for a distance in furlongs "
    "and converts it to yards. (One furlong is 220 yards.)",

    //ex03
    "Write a C++ program that uses three user-defined functions (counting "
    "main as one) and produces the following output:\n"
    "Three blind mice\n"
    "Three blind mice\n"
    "See how they run\n"
    "See how they run\n"
    "One function, called two times, should produce the first two lines, and the "
    "remaining function, also called twice, should produce the remaining output.",

    //ex04
    "Write a program that asks the user to enter his or her age. "
    "The program then should display the age in months:\n"
    "Enter your age: 29\n"
    "Your age in months is 384.",

    //ex05
    "Write a program that has main() call a user-defined function that takes a Celsius "
    "temperature value as an argument and then returns the equivalent Fahrenheit value. "
    "The program should request the Celsius value as input from the user and display "
    "the result, as shown in the following code:\n"
    "Please enter a Celsius value: 20\n"
    "20 degrees Celsius is 68 degrees Fahrenheit.\n"
    "For reference, here is the formula for making the conversion:\n"
    "Fahrenheit = 1.8 × degrees Celsius + 32.0",

    //ex06
    "Write a program that has main() call a user-defined function that takes a distance "
    "in light years as an argument and then returns the distance in astronomical units. "
    "The program should request the light year value as input from the user and display "
    "the result, as shown in the following code:\n"
    "Enter the number of light years: 4.2\n"
    "4.2 light years = 265608 astronomical units.\n"
    "An astronomical unit is the average distance from the earth to the sun (about "
    "150,000,000 km or 93,000,000 miles), and a light year is the distance light travels in "
    "a year (about 10 trillion kilometers or 6 trillion miles). (The nearest star after the "
    "sun is about 4.2 light years away.) Use type double (as in Listing 2.4) and this "
    "conversion factor:\n"
    "1 light year = 63,240 astronomical units",

    //ex07
    "Write a program that asks the user to enter an hour value and a minute value. The "
    "main() function should then pass these two values to a type void function that "
    "displays the two values in the format shown in the following sample run:\n"
    "Enter the number of hours: 9\n"
    "Enter the number of minutes: 28\n"
    "Time: 9:28"
};

inline Chapter chapter03 {
    //ex01
    "Write a short program that asks for your height in integer inches and then converts "
    "your height to feet and inches. Have the program use the underscore character to "
    "indicate where to type the response. Also use a const symbolic constant to "
    "represent the conversion factor.",

    //ex02
    "Write a short program that asks for your height in feet and inches and your weight "
    "in pounds. (Use three variables to store the information.) Have the program report "
    "your body mass index (BMI). To calculate the BMI, first convert your height in feet "
    "and inches to your height in inches (1 foot = 12 inches). Then convert your height "
    "in inches to your height in meters by multiplying by 0.0254. Then convert your "
    "weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute "
    "your BMI by dividing your mass in kilograms by the square of your height in "
    "meters. Use symbolic constants to represent the various conversion factors.",

    //ex03
    "Write a program that asks the user to enter a latitude in degrees, minutes, and "
    "seconds and that then displays the latitude in decimal format. There are 60 seconds "
    "of arc to a minute and 60 minutes of arc to a degree; represent these values with "
    "symbolic constants. You should use a separate variable for each input value. "
    "A sample run should look like this:\n"
    "Enter a latitude in degrees, minutes, and seconds:\n"
    "First, enter the degrees: 37\n"
    "Next, enter the minutes of arc: 51\n"
    "Finally, enter the seconds of arc: 19\n"
    "37 degrees, 51 minutes, 19 seconds = 37.8553 degrees",

    //ex04
    "Write a program that asks the user to enter the number of seconds as an integer "
    "value (use type long, or, if available, long long) and that then displays the "
    "equivalent time in days, hours, minutes, and seconds. Use symbolic constants to "
    "represent the number of hours in the day, the number of minutes in an hour, and "
    "the number of seconds in a minute. The output should look like this:\n"
    "Enter the number of seconds: 31600000\n"
    "31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds",

    //ex05
    "Write a program that requests the user to enter the current world population and "
    "the current population of the U.S. (or of some other nation of your choice). Store "
    "the information in variables of type long long. Have the program display the "
    "percent that the U.S. (or other nation's) population is of the world's population. "
    "The output should look something like this:\n"
    "Enter the world's population: 6898758899\n"
    "Enter the population of the US: 310783781\n"
    "The population of the US is 4.50492% of the world population.",

    //ex06
    "Write a program that asks how many miles you have driven and how many gallons "
    "of gasoline you have used and then reports the miles per gallon your car has gotten. "
    "Or, if you prefer, the program can request distance in kilometers and petrol in liters "
    "and then report the result European style, in liters per 100 kilometers.",

    //ex07
    "Write a program that asks you to enter an automobile gasoline consumption figure "
    "in the European style (liters per 100 kilometers) and converts to the U.S. style of "
    "miles per gallon. Note that in addition to using different units of measurement, the "
    "U.S. approach (distance / fuel) is the inverse of the European approach "
    "(fuel / distance). Note that 100 kilometers is 62.14 miles, and 1 gallon is "
    "3.875 liters. Thus, 19 mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.",
};

inline Chapter chapter04 {
    //ex01
    "Write a C++ program that requests and displays information as shown in the "
    "following example of output:\n"
    "What is your first name? Betty Sue\n"
    "What is your last name? Yewe\n"
    "What letter grade do you deserve? B\n"
    "What is your age? 22\n"
    "Name: Yewe, Betty Sue\n"
    "Grade: C\n"
    "Age: 22\n\n"
    "Note that the program should be able to accept first names that comprise more "
    "than one word. Also note that the program adjusts the grade downward—that is, up "
    "one letter. Assume that the user requests an A, a B, or a C so that you don't "
    "have to worry about the gap between a D and an F.",

    //ex02
    "Rewrite Listing 4.4, using the C++ string class instead of char arrays.",

    //ex03
    "Write a program that asks the user to enter his or her first name and then last "
    "name, and that then constructs, stores, and displays a third string, consisting of the "
    "user's last name followed by a comma, a space, and first name. Use char arrays and "
    "functions from the cstring header file. A sample run could look like this:\n"
    "Enter your first name: Flip\n"
    "Enter your last name: Fleming\n"
    "Here's the information in a single string: Fleming, Flip",

    //ex04
    "Write a program that asks the user to enter his or her first name and then last "
    "name, and that then constructs, stores, and displays a third string consisting of the "
    "user's last name followed by a comma, a space, and first name. Use string objects "
    "and methods from the string header file. A sample run could look like this:\n"
    "Enter your first name: Flip\n"
    "Enter your last name: Fleming\n"
    "Here's the information in a single string: Fleming, Flip",

    //ex05
    "The CandyBar structure contains three members. The first member holds the brand "
    "name of a candy bar. The second member holds the weight (which may have a "
    "fractional part) of the candy bar, and the third member holds the number of calories "
    "(an integer value) in the candy bar. Write a program that declares such a structure "
    "and creates a CandyBar variable called snack, initializing its members to \"Mocha "
    "Munch\", 2.3, and 350, respectively. The initialization should be part of the "
    "declaration for snack. Finally, the program should display the contents of the snack "
    "variable.",

    //ex06
    "The CandyBar structure contains three members, as described in Programming "
    "Exercise 5. Write a program that creates an array of three CandyBar structures, "
    "initializes them to values of your choice, and then displays the contents of each "
    "structure.",

    //ex07
    "William Wingate runs a pizza-analysis service. For each pizza, he needs to record "
    "the following information:\n"
    "• The name of the pizza company, which can consist of more than one word\n"
    "• The diameter of the pizza\n"
    "• The weight of the pizza\n"
    "Devise a structure that can hold this information and write a program that uses a "
    "structure variable of that type.The program should ask the user to enter each of "
    "the preceding items of information, and then the program should display that "
    "information. Use cin (or its methods) and cout.",

    //ex08
    "Do Programming Exercise 7 but use new to allocate a structure instead of declaring "
    "a structure variable.Also have the program request the pizza diameter before it "
    "requests the pizza company name.",

    //ex09
    "Do Programming Exercise 6, but instead of declaring an array of three CandyBar "
    "structures, use new to allocate the array dynamically.",

    //ex10
    "Write a program that requests the user to enter three times for the 40-yd dash (or "
    "40-meter, if you prefer) and then displays the times and the average. Use an array "
    "object to hold the data. (Use a built-in array if array is not available.)",
};

inline Chapter chapter05 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
    "TODO: write task description for ex5",
    "TODO: write task description for ex6",
    "TODO: write task description for ex7",
    "TODO: write task description for ex8",
    "TODO: write task description for ex9",
    "TODO: write task description for ex10",};

inline Chapter chapter06 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
    "TODO: write task description for ex5",
    "TODO: write task description for ex6",
    "TODO: write task description for ex7",
    "TODO: write task description for ex8",
    "TODO: write task description for ex9",
};

inline Chapter chapter07 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
    "TODO: write task description for ex5",
    "TODO: write task description for ex6",
    "TODO: write task description for ex7",
    "TODO: write task description for ex8",
    "TODO: write task description for ex9",
    "TODO: write task description for ex10",
};

inline Chapter chapter08 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
    "TODO: write task description for ex5",
    "TODO: write task description for ex6",
    "TODO: write task description for ex7",
};

inline Chapter chapter09 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
};

inline Chapter chapter10 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
    "TODO: write task description for ex5",
    "TODO: write task description for ex6",
    "TODO: write task description for ex7",
    "TODO: write task description for ex8",
};

inline Chapter chapter11 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
    "TODO: write task description for ex5",
    "TODO: write task description for ex6",
    "TODO: write task description for ex7",
};

inline Chapter chapter12 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
    "TODO: write task description for ex5",
    "TODO: write task description for ex6",
};

inline Chapter chapter13 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
};

inline Chapter chapter14 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
    "TODO: write task description for ex5",
};

inline Chapter chapter15 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
};

inline Chapter chapter16 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
    "TODO: write task description for ex5",
    "TODO: write task description for ex6",
    "TODO: write task description for ex7",
    "TODO: write task description for ex8",
    "TODO: write task description for ex9",
    "TODO: write task description for ex10",
};

inline Chapter chapter17 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
    "TODO: write task description for ex5",
    "TODO: write task description for ex6",
    "TODO: write task description for ex7",
};

inline Chapter chapter18 {
    "TODO: write task description for ex1",
    "TODO: write task description for ex2",
    "TODO: write task description for ex3",
    "TODO: write task description for ex4",
};

inline std::vector<Chapter> task_descriptions {
    chapter01, chapter02, chapter03, chapter04, chapter05, chapter06,
    chapter07, chapter08, chapter09, chapter10, chapter11, chapter12,
    chapter13, chapter14, chapter15, chapter16, chapter17, chapter18,
};

} // !cpps::helper_library::hw

#endif // !HW_TASK_DESCRIPTIONS_H
