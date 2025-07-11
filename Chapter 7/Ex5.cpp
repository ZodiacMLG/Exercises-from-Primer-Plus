#include <iostream>


//	Chapter7_Ex5

//	Define a recursive function that takes an integer argument and returns the factorial of that argument.
//  Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0! defined as 1.
//  In general, if n is greater than zero, n! = n * (n - 1)!.
//  Test your function in a program that uses a loop
//  to allow the user to enter various values for which the program reports the factorial.


int factorial(int);

int main() {
	int value{ 0 };
	std::cout << "Enter factorial (q to quit): ";
	while (std::cin >> value) {
		if (value < 0) {
			std::cout << "Enter the positive value!: ";
			continue;
		}
		std::cout << "Factorial " << value << "! = " << factorial(value) << "\n";
		std::cout << "Enter another value: ";
	}
	return 0;
}

int factorial(int value) {
	int total{ 1 };
	if (value == 1 || value == 0) {
		return 1;
	}
	return value * factorial(value - 1);
}