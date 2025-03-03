#include <iostream>

//	Chapter4_Ex6
//	The CandyBar structure contains three members, as described in Programming Exercise 5.
//  Write a program that creates an array of three CandyBar structures, 
//  initializes them to values of your choice, and then displays the contents of each structure.

struct CandyBar {
	char name[20];
	double weight;
	int calories;
};

int main() {
	CandyBar snacks[3] = {
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