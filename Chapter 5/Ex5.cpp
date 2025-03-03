#include <iostream>
#include <string>

//	Chapter5_Ex5
//  You sell the book C++ for Fools.
//  Write a program that has you enter a year's worth of monthly sales 
//  (in terms of number of books, not of money).
//  The program should use a loop to prompt you by month, 
//  using an array of char * (or an array of string objects, if you prefer) 
//  initialized to the month strings and storing the input data in an array of int.
//  Then, the program should find the sum of the array contents and report the total sales for the year.

const int ArrSize{ 12 };

int main() {
	std::string months[ArrSize]{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"Octomber",
		"November",
		"December"
	};
	int data[ArrSize], sum{0};
	std::cout << "Enter a year's worth of monthly sales (number of books, not of money): " << std::endl;

	for (int i = 0; i < ArrSize; i++) {
		std::cout << months[i] << ": ";
		std::cin >> data[i];
		sum += data[i];
	}

	std::cout << "Summary sales of year = " << sum;
	return 0;
}