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

struct Expens {
	double expenses[Seasons];
};

void fill(Expens& exp);
void show(const Expens& exp);

int main() {
	//std::array<double, Seasons> expenses;
	//double expenses[Seasons];
	Expens Array{};
	fill(Array);
	show(Array);
	return 0;
}

void fill(Expens& exp) {
	for (int i = 0; i < Seasons; i++) {
		std::cout << "Enter " << Snames[i] << " expenses: ";
		std::cin >> exp.expenses[i];
	}
}

void show(const Expens& exp) {
	double total = 0.0;
	std::cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++) {
		std::cout << Snames[i] << ": $" << exp.expenses[i] << std::endl;
		total += exp.expenses[i];
	}
	std::cout << "Total Expenses: $" << total << std::endl;
}