#include <iostream>
#include <string>

//	Chapter4_Ex9
//	Do Programming Exercise 6, but instead of declaring an array of three CandyBar structures,
//  use new to allocate the array dynamically.


struct CandyBar {
	char name[20];
	double weight;
	int calories;
};

int main() {
	CandyBar * snacks = new CandyBar [3] {
		{"Mars", 5.2, 452},
		{"Bounty", 2.2, 615},
		{"Snickers", 8.12, 900}
	};

	std::cout << "Snack name: " << snacks[0].name << std::endl;
	std::cout << "Snack weight: " << snacks[0].weight << std::endl;
	std::cout << "Snack calories: " << snacks[0].calories << std::endl;

	std::cout << "Snack name: " << snacks[1].name << std::endl;
	std::cout << "Snack weight: " << snacks[1].weight << std::endl;
	std::cout << "Snack calories: " << snacks[1].calories << std::endl;

	std::cout << "Snack name: " << snacks[2].name << std::endl;
	std::cout << "Snack weight: " << snacks[2].weight << std::endl;
	std::cout << "Snack calories: " << snacks[2].calories << std::endl;

	return 0;
}