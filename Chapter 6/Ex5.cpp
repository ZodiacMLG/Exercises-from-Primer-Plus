#include <iostream>

//	Chapter6_Ex5

//  The Kingdom of Neutronia, where the unit of currency is the tvarp,
//  has the following income tax code:

//	First 5,000 tvarps: 0% tax
//	Next 10,000 tvarps: 10% tax
//	Next 20,000 tvarps: 15% tax
//	Tvarps after 35,000: 20% tax

//	For example, someone earning 38,000 tvarps would owe 5,000 * 0.00 + 10,000 * 0.10 + 20,000 * 0.15 + 3,000 * 0.20, or 4,600 tvarps.
//  Write a program that uses a loop to solicit incomes and to report tax owed.
//  The loop should terminate when the user enters a negative number or non-numeric input.

int main() {
	
	int tvarp;
	
	std::cout << "Enter tvarp (terminate if negative number or non-numeric input): ";

	while ((std::cin >> tvarp) && tvarp > 0) {
		if (tvarp <= 5000) {
			tvarp = tvarp * 0 ;
		}
		else if (tvarp <= 15000) {
			tvarp = (tvarp - 5000) * 0.1;
		}
		else if (tvarp > 15000 && tvarp <= 35000) {
			tvarp = 0 + 1000 + (tvarp - 15000) * 0.15;
		}
		else if (tvarp > 35000) {
			tvarp = 0 + 1000 + 20000 * 0.15 + (tvarp - 35000) * 0.2;
		}
		
		std::cout << "Tax: " << tvarp << std::endl << std::endl;
		std::cout << "Enter tvarp (terminate if negative number or non-numeric input): ";
	}
	return 0;
}