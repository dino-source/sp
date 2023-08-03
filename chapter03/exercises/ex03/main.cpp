/*Write a program that asks the user to enter a latitude in degrees, minutes, and sec-
onds and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with sym-
bolic constants.You should use a separate variable for each input value.A sample
run should look like this:
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees*/

#include <iostream>
#include <cmath>

int main()
{
    std::cout
        << "Enter a latitude in degrees, minutes, and seconds:\n"
        << "First, enter the degrees:\n";
    double degrees;
    std::cin >> degrees;
    std::cout << "\nNext, enter the minutes of arc:\n";
    const int MINUTES_PER_DEGREE{60};
    double minutes;
    std::cin >> minutes;
    std::cout << "\nFinally, enter the seconds of arc:\n";
    const int SECONDS_IN_MINUTE{60};
    double seconds;
    std::cin >> seconds;
    double resoult_of_degrees = degrees + minutes / MINUTES_PER_DEGREE + seconds / SECONDS_IN_MINUTE / MINUTES_PER_DEGREE;
    std::cout
        << degrees
        << " degrees, "
        << minutes
        << " minutes, "
        << seconds
        << " seconds = "
        << resoult_of_degrees
        << " degrees.\n";
}