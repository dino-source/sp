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
#include <vector>
#include <string>

using ResultType = long;
void print(std::string const &message);
void print(ResultType num, std::string const &description);
ResultType get_number_from_user();
std::vector<ResultType> seconds_to_days_hours_minutes_seconds(ResultType seconds);

int main()
{
    print("Enter the number of seconds: ");
    ResultType num_of_sec = get_number_from_user();
    auto result = seconds_to_days_hours_minutes_seconds(num_of_sec);
    print(num_of_sec, " seconds = ");
    print(result[0], " days,\n");
    print(result[1], " hours,\n");
    print(result[2], " minutes,\n");
    print(result[3], " seconds.\n");
}

void print(std::string const &message)
{
    std::cout << message;
}

void print(ResultType num, std::string const &description)
{
    std::cout << num << description;
}

ResultType get_number_from_user()
{
    ResultType number{};
    std::cin >> number;
    return number;
}

std::vector<ResultType> seconds_to_days_hours_minutes_seconds(ResultType num_of_sec)
{
    int const MINUTES_IN_ONE_HOUR = 60;
    int const HOURS_IN_ONE_DAY = 24;
    int const SECONDS_IN_ONE_MINUTE = 60;                                                          // 60 seconds in one minute
    int const SECONDS_IN_ONE_HOUR = SECONDS_IN_ONE_MINUTE * MINUTES_IN_ONE_HOUR;                   // 3600
    int const SECONDS_IN_ONE_DAY = SECONDS_IN_ONE_MINUTE * MINUTES_IN_ONE_HOUR * HOURS_IN_ONE_DAY; // 86400

    ResultType days = num_of_sec / SECONDS_IN_ONE_DAY;                                     // 31600000 / 86400 = 365
    ResultType seconds_in_those_days = days * SECONDS_IN_ONE_DAY;                          // 365 days * 86400 = 31536000
    ResultType total_time_without_days = num_of_sec - seconds_in_those_days;               // 64000
    ResultType hours = (num_of_sec - seconds_in_those_days) / SECONDS_IN_ONE_HOUR;         // 17 hours / 61200 seconds
    ResultType hours_in_sec = hours * SECONDS_IN_ONE_HOUR;                                 // 61200
    ResultType minutes = (total_time_without_days - hours_in_sec) / SECONDS_IN_ONE_MINUTE; // 64000 - 61200 = 2800 sec / 60 = 46 min
    ResultType minutes_in_sec = minutes * SECONDS_IN_ONE_MINUTE;                           // 2760
    ResultType seconds = (total_time_without_days - hours_in_sec) - minutes_in_sec;

    return {days, hours, minutes, seconds};
}