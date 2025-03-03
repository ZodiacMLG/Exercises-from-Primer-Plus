#include <iostream>
#include <string>

//	Chapter4_Ex8
//	Do Programming Exercise 7 but use new to allocate a structure instead of declaring a structure variable.
//  Also have the program request the pizza diameter before it requests the pizza company name.

struct Pizza {
	std::string name;
	int diameter;
	double weight;
};

int main() {
	Pizza *pizza = new Pizza;

	std::cout << "Enter diameter of pizza: ";
	std::cin >> pizza->diameter;
	std::cin.get();
	std::cout << "Enter name of pizza: ";
	std::getline(std::cin, pizza->name);
	std::cout << "Enter weight of pizza: ";
	std::cin >> pizza->weight;
	std::cout << std::endl;

	std::cout << "Pizza name: " << pizza->name << std::endl;
	std::cout << "Pizza diameter: " << pizza->diameter << std::endl;
	std::cout << "Pizza weight: " << pizza->weight << std::endl;


	return 0;
}