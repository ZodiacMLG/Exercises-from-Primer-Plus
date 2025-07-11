#include <iostream>


//	Chapter7_Ex6

//	Write a program that uses the following functions:
//  Fill_array () takes as arguments the name of an array of double values and an array size.
//  It prompts the user to enter double values to be entered in the array.
//  It ceases taking input when the array is full or when the user enters non-numeric input,
//  and it returns the actual number of entries.
//  Show array () takes as arguments the name of an array of double values
//  and an array size and displays the contents of the array.
//  Reverse_array() takes as arguments the name of an array of double values
//  and an array size and reverses the order of the values stored in the array.
//  The program should use these functions to fill an array, show the array,
//  reverse the array, show the array, reverse all but the first and last elements of the array,
//  and then show the array.

const int SizeArr = 5;

int Fill_array(double[], int);
void Show_array(double[], int);
void Reverse_array(double[], int);

int main() {
	double massive[SizeArr];

	int count = Fill_array(massive, SizeArr);

	std::cout << "Count of size arr: " << count << "\n";

	Show_array(massive, count);

	Reverse_array(massive, count);

	Show_array(massive, count);

	Reverse_array(massive + 1, count - 2);

	Show_array(massive, count);


	return 0;
}

int Fill_array(double massive[], int size) {
	int i = 0;
	std::cout << "Enter value for array[" << i + 1 << "]: ";
	for (; i < size && std::cin >> massive[i]; i++) {
		std::cout << "Enter value for array[" << i + 2 << "]: ";
	}
	return i;
}

void Show_array(double massive[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << "Massive[" << i + 1 << "] = " << massive[i] << "\n";
	}
	std::cout << std::endl;
}

void Reverse_array(double massive[], int size) {
	double temp{ 0 };
	for (int i = 0; i < size / 2; i++) {
		temp = massive[i];
		massive[i] = massive[size - 1 - i];
		massive[size - 1 - i] = temp;
	}
}