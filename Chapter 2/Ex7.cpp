#include <iostream>

//	Chapter2_Ex7
//	Write a program that asks the user to enter an hour value and a minute value.The
//	main() function should then pass these two values to a type void function that dis -
//	plays the two values in the format shown in the following sample run :
//	Enter the number of hours : 9
//	Enter the number of minutes : 28
//	Time : 9 : 28

void Displays(int, int);

int main() {
	int hours;
	int minutes;
	std::cout << "Enter the number of hours: ";
	std::cin >> hours;
	std::cout << "Enter the number of minutes: ";
	std::cin >> minutes;
	Displays(hours, minutes);
	return 0;
}

void Displays(int hours, int minutes) {
	std::cout << "Time: " << hours << ":" << minutes;
}