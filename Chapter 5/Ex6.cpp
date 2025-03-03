#include <iostream>
#include <string>

//	Chapter5_Ex6
//  Do Programming Exercise 5 but use a two-dimensional array to store input for 3 years of monthly sales.
//  Report the total sales for each individual year and for the combined years.


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
	int data[3][ArrSize], sum_year[3]{0,0,0}, sum_total{0};
	std::cout << "Enter a year's worth of monthly sales (number of books, not of money): " << std::endl;

	for (int i = 0; i < 3; i++) {
		std::cout << "Year#" << i + 1 << std::endl;
		for (int j = 0; j < ArrSize; j++) {
			std::cout << months[j] << ": ";
			std::cin >> data[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < ArrSize; j++) {
			sum_year[i] += data[i][j];
		}
		std::cout << "Summary in " << i+1 << " year = " << sum_year[i] << std::endl;
		sum_total += sum_year[i];
	}

	std::cout << "Summary sales of years = " << sum_total;
	return 0;
}