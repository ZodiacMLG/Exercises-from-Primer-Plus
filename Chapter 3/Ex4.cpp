#include <iostream>

//	Chapter3_Ex4
//	Write a program that asks the user to enter the number of seconds as an integer value (use type long, or, if available, long long)
//  and that then displays the equivalent time in days, hours, minutes, and seconds.
//  Use symbolic constants to represent the number of hours in the day,
//  the number of minutes in an hour, and the number of seconds in a minute.

int main() {
	const int seconds_per_minutes = 60, minutes_per_hour = 60, hour_per_day = 24;
	int tseconds, minutes, hours, days;
	long long seconds;

	std::cout << "Enter the number of seconds: ";
	std::cin >> seconds;

	days = (seconds / seconds_per_minutes / minutes_per_hour / hour_per_day);
	hours = (seconds / seconds_per_minutes / minutes_per_hour) - days * hour_per_day;
	minutes = (seconds / seconds_per_minutes) - ((hours + days * hour_per_day) * minutes_per_hour);
	tseconds = seconds - (days * hour_per_day * minutes_per_hour * seconds_per_minutes + hours * minutes_per_hour * seconds_per_minutes + minutes * seconds_per_minutes);

	std::cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << tseconds << " seconds";

	return 0;
}