#include <iostream>
#include <string>

//	Chapter7_Ex8

//	Redo Listing 7.15 without using the array class. Do two versions:
//	a. Use an ordinary array of const char* for the strings representing the season names,
//  and use an ordinary array of double for the expenses.
//	b. Use an ordinary array of const char* for the strings representing the season names,
//  and use a structure whose sole member is an ordinary array of double for the expenses.
//  (This design is similar to the basic design of the array class.)

const int Seasons = 4;
//const std::array<std::string, Seasons> Snames = { "Spring", "Summer", "Fall", "Winter" };
const char* Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

void fill(double * pa);
void show(const double da[]);

int main() {
	//std::array<double, Seasons> expenses;
	double expenses[Seasons];
	fill(expenses);
	show(expenses);
	return 0;
}

void fill(double * pa) {
	for (int i = 0; i < Seasons; i++) {
		std::cout << "Enter " << Snames[i] << " expenses: ";
		std::cin >> pa[i];
	}
}

void show(const double da[]) {
	double total = 0.0;
	std::cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++) {
		std::cout << Snames[i] << ": $" << da[i] << std::endl;
		total += da[i];
	}
	std::cout << "Total Expenses: $" << total << std::endl;
}