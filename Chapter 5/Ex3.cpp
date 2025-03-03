#include <iostream>

//	Chapter5_Ex3
//	Write a program that asks the user to type in numbers.
//  After each entry, the program should report the cumulative sum of the entries to date.
//  The program should terminate when the user enters 0.


int main() {
	int value, sum{0};

	std::cout << "Enter the number: ";
	std::cin >> value;
	while (value != 0)
	{
		sum += value;
		std::cout << "Sum = " << sum << std::endl;
		std::cout << "Enter the number: ";
		std::cin >> value;
	}

	std::cout << "Total sum = " << sum;

	return 0;
}