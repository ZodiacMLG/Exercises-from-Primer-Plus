#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
#include "vect.h"

//	Chapter11_Ex3

//	Modify Listing 11.15 so that instead of reporting the results
//  of a single trial for a particular target/step combination,
//  it reports the highest, lowest, and
//  average number of steps for N trials,
//  where N is an integer entered by the user.

int main() {
	srand(time(0));
	double direction;
	VECTOR::Vector step;
	VECTOR::Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	size_t trials{1};
	double lowest{LONG_MAX}, highest{}, average{};
	long double total{};
	std::cout << "Enter target distance (q to quit): ";
	while (std::cin >> target) {
		std::cout << "Enter step length: ";
		if (!(std::cin >> dstep))
			break;


		std::cout << "Enter count of trials: ";
		std::cin >> trials;
		for (int i = 0; i < trials; i++) {
			while (result.magval() < target) {
				direction = rand() % 360;
				step.reset(dstep, direction, VECTOR::Vector::POL);
				result = result + step;
				steps++;
			}
			total += steps;
			if (steps < lowest) lowest = steps;
			if (steps > highest) highest = steps;
			steps = 0;
			result.reset(0.0, 0.0);
		}
		average = total / trials;


		std::cout << "Average steps = " << average << std::endl
			<< "Lowest steps = " << lowest << std::endl
			<< "Highest steps = " << highest << std::endl;


		/*std::cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		std::cout << result << std::endl;
		result.polar_mode();
		std::cout << " or\n" << result << std::endl;
		std::cout << "Average outward distance per step = "
			<< result.magval() / steps << std::endl;*/
		steps = 0;
		//result.reset(0.0, 0.0);
		std::cout << "Enter target distance (q to quit): ";
	}
	std::cout << "Bye!\n";
	std::cin.clear();
	while (std::cin.get() != '\n') {
		continue;
	}
	return 0;
}