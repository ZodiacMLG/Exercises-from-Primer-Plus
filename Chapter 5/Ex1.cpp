#include <iostream>

//	Chapter5_Ex1
//	Write a program that requests the user to enter two integers.
//  The program should then calculate and report the sum of all the integers between and including the two integers.
//  At this point, assume that the smaller integer is entered first.
//  For example, if the user enters 2 and 9, 
//  the program should report that the sum of all the integers from 2 through 9 is 44.


int main() {
	int v1, v2, sum{};
	std::cout << "Enter the value #1: ";
	std::cin >> v1;
	std::cout << "Enter the value #2: ";
	std::cin >> v2;

	for (int i = v1; i <= v2; i++) {
		sum += i;
	}

	std::cout << "Sum from " << v1 << " to " << v2 << " = " << sum;

	return 0;
}