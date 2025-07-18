﻿#include <iostream>


//	Chapter7_Ex1

//	Write a program that repeatedly asks the user to enter pairs of numbers until at least one of the pair is o.
//  For each pair, the program should use a function to calculate the harmonic mean of the numbers.
//  The function should return the answer to main (), which should report the result.
//  The harmonic mean of the numbers is the inverse of the average of the inverses and can be calculated as follows:
//
//	harmonic mean = 2.0 * x * y / (x + y)


double harmonic(int,int);

int main() {
	int x, y;
	do {
		std::cout << "Enter first value: ";
		std::cin >> x;
		std::cout << "Enter second value: ";
		std::cin >> y;
		std::cout << "Harmonic: " << harmonic(x, y) << std::endl;
	} while (x != 0 && y != 0);
	std::cout << "End";
	return 0;
}

double harmonic(int x, int y) {
	return 2.0 * x * y / (x + y);
}