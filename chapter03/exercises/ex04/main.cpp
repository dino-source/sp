/*Write a program that asks the user to enter the number of seconds as an integer
value (use type long, or, if available, long long) and that then
displays the equivalent time in days, hours, minutes, and seconds.
Use symbolic constants to represent the number of hours in the day,
the number of minutes in an hour, and the number of seconds in a minute.
The output should look like this:
Enter the number of seconds: 31600000
31600000 seconds = 365 days,
17 hours,
46 minutes,
40 seconds

Напишите программу, которая запрашивает количество секунд в виде целого
значения (используйте тип long или long long, если последний доступен) и
затем отображает эквивалентное значение в сутках, часах, минутах и секундах.
Для представления количества часов в сутках, количества минут в часе и ко­личества секунд
в минуте используйте символические константы.*/

#include <iostream>

int main()
{
    const int seconds_in_one_minute = 60; // 60 seconds in one minute
    const int minutes_in_one_hour = 60;
    const int hours_in_one_day = 24;
    int seconds_in_one_hour = seconds_in_one_minute * minutes_in_one_hour;                   // 3600
    int seconds_in_one_day = seconds_in_one_minute * minutes_in_one_hour * hours_in_one_day; // 86400

    std::cout << "Enter the number of seconds: ";
    long num_of_sec;
    std::cin >> num_of_sec;
    int days = num_of_sec / seconds_in_one_day;
    int seconds_in_those_days = days * seconds_in_one_day;
    int hours = (num_of_sec - seconds_in_those_days) / seconds_in_one_hour;
    std::cout << num_of_sec << " seconds = " << days << " days,\n"
              << hours << " hours,\n";
}