#include <iostream>

//	Chapter3_Ex7
//	Write a program that asks you to enter an automobile gasoline consumption figure in the European style (liters per 100 kilometers)
//  and converts to the U.S. style of miles per gallon.
//  Note that in addition to using different units of measurement,
//  the U.S. approach (distance / fuel) is the inverse of the European approach (fuel / distance).
//  Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.
//  Thus, 19 mpg is about 12.4 1/100 km, and 27 mpg is about 8.7 1/100 km.

int main() {
	float liters_per_kilometers, miles_per_100kilometers = 62.14, liters_per_gallon = 3.875;

	std::cout << "Enter gasoline consumption in liters per 100 kilometers: ";
	std::cin >> liters_per_kilometers;

	float result = miles_per_100kilometers / (liters_per_kilometers / liters_per_gallon);

	std::cout << "Liters to gallons = " << result;

	return 0;
}