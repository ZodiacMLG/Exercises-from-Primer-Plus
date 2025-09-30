#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

//	Chapter11_Ex1

//	Modify Listing 11.15 so that it writes the successive locations of the random walker into a file.
//  Label each position with the step number.
//  Also have the program write the initial conditions (target distance and step size)
//  and the summarized results to the file.
//  The file contents might look like this:
//
//	Target Distance: 100, Step Size: 20
//	0: (x,y) = {0, 0}
//	1: (x,y) = {-11.4715, 16.383}
//	2: (x,y) = {-8.68807, -3.42232}
//	...
//	26: (x,y) = {42.2919, -78.2594}
//	27: (x,y) = {58.6749, -89.7309}
//	After 27 steps, the subject has the following location:
//	(x,y) = {58.6749, -89.7309}
//	or
//	(m,a) = {107.212, -56.8194}
//	Average outward distance per step = 3.97081

int main() {
	std::fstream rfile;
	rfile.open("text.txt");

	srand(time(0));
	double direction;
	VECTOR::Vector step;
	VECTOR::Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	std::cout << "Enter target distance (q to quit): ";
	while (std::cin >> target) {
		std::cout << "Enter step length: ";
		if (!(std::cin >> dstep))
			break;
		rfile << "Target distance: " << target << ", Step Size: " << dstep << '\n';		// in File
		while (result.magval() < target) {
			direction = rand() % 360;
			step.reset(dstep, direction, VECTOR::Vector::POL);
			result = result + step;
			rfile << steps << ": " << result << std::endl;
			steps++;
		}
		std::cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		std::cout << result << std::endl;

		rfile << "After " << steps << " steps, the subject "
			"has the following location:\n";
		rfile << result << std::endl;
		
		result.polar_mode();
		std::cout << " or\n" << result << std::endl;
		std::cout << "Average outward distance per step = "
			<< result.magval() / steps << std::endl;
		rfile << " or\n" << result << std::endl;
		rfile << "Average outward distance per step = "
			<< result.magval() / steps << std::endl;
		steps = 0;
		result.reset(0.0, 0.0);
		std::cout << "Enter target distance (q to quit): ";
	}
	std::cout << "Bye!\n";
	std::cin.clear();
	while (std::cin.get() != '\n') {
		continue;
	}
	rfile.close();
	return 0;
}