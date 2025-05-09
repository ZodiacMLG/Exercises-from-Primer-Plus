#include <iostream>

//	Chapter6_Ex2

//	Write a program that reads up to 10 donation values into an array of double.
//  (Or, if you prefer, use an array template object.) The program should terminate input on non-numeric input.
//  It should report the average of the numbers and also report how many numbers in the array are larger than the average.

const int Size{ 10 };

int main() {
	double values[Size], average{ 0 };
	int count_v{ 0 };

	for (int i = 0; i < Size; i++) {
		std::cout << "Enter the number#" << i+1 << ": ";
		std::cin >> values[i];
		if (!(values[i])) {
			return 0;
		}
		average += values[i];
	}
	average = average / Size;

	std::cout << "Average: " << average << std::endl;

	for (int i = 0; i < Size; i++) {
		if (values[i] > average) {
			count_v++;
		}
	}

	std::cout << "The number of numbers that exceed the average value: " << count_v;
	return 0;
}