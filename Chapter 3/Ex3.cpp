#include <iostream>

//	Chapter3_Ex3
//	Write a program that asks the user to enter a latitude in degrees, minutes, and seconds and that then displays the latitude in decimal format.
//  There are 60 seconds of arc to a minute and 60 minutes of arc to a degree;
//  represent these values with symbolic constants.
//  You should use a separate variable for each input value.

int main() {
	const double seconds_per_minutes = 60, minutes_per_degrees = 60;
	int degrees, minutes, seconds;
	double total;

	std::cout << "Enter a latitude in degrees, minutes, and seconds:\n"
		<< "First, enter the degrees: ";
	std::cin >> degrees;
	std::cout << "Next, enter the minutes of arc: ";
	std::cin >> minutes;
	std::cout << "Finally, enter the seconds of arc: ";
	std::cin >> seconds;

	total = degrees + ((minutes + seconds / seconds_per_minutes) / minutes_per_degrees);

	std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << total << " degrees.";

	return 0;
}