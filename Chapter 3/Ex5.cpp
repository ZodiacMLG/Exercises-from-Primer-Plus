#include <iostream>

//	Chapter3_Ex5
//	Write a program that requests the user to enter the current world population and the current population of the U.S.
//  (or of some other nation of your choice). Store the information in variables of type long long.
//  Have the program display the percent that the U.S. (or other nation's) population is of the world's population.

int main() {
	long long population, population_US;
	long double percent;
	//std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);

	std::cout << "Enter the world's population: ";
	std::cin >> population;
	std::cout << "Enter the population of the US: ";
	std::cin >> population_US;
	
	percent = long double(population_US) / long double(population) * 100;

	std::cout << "The population of the US is " << percent << "% of the world population.";

	return 0;
}