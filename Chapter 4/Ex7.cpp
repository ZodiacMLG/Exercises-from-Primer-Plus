#include <iostream>
#include <string>

//	Chapter4_Ex7
//	William Wingate runs a pizza-analysis service. For each pizza, he needs to record the following information:
//	• The name of the pizza company, which can consist of more than one word
//	• The diameter of the pizza
//	• The weight of the pizza
//	Devise a structure that can hold this information and write a program that uses a structure variable of that type.
//  The program should ask the user to enter each of the preceding items of information, 
//  and then the program should display that information.Use cin(or its methods) and cout.

struct Pizza {
	std::string name;
	int diameter;
	double weight;
};

int main() {
	Pizza pizza;

	std::cout << "Enter name of pizza: ";
	std::getline(std::cin, pizza.name);
	std::cout << "Enter diameter of pizza: ";
	std::cin >> pizza.diameter;
	std::cout << "Enter weight of pizza: ";
	std::cin >> pizza.weight;
	std::cout << std::endl;

	std::cout << "Pizza name: " << pizza.name << std::endl;
	std::cout << "Pizza diameter: " << pizza.diameter << std::endl;
	std::cout << "Pizza weight: " << pizza.weight << std::endl;

	return 0;
}