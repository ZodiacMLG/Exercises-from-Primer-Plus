#include <iostream>

//	Chapter3_Ex2
//	Write a short program that asks for your height in feet and inches and your weight in pounds.
//  (Use three variables to store the information.) Have the program report your body mass index (BMI).
//  To calculate the BMI, first convert your height in feet and inches to your height in inches (1 foot = 12 inches).
//  Then convert your heightin inches to your height in meters by multiplying by 0.0254.
//  Then convert your weight in pounds into your mass in kilograms by dividing by 2.2.
//  Finally, compute your BMI by dividing your mass in kilograms by the square of your height in meters.
//  Use symbolic constants to represent the various conversion factors.

int main() {
	const int incher_per_feet = 12;
	const int pounds_per_kilogramm = 2.2;
	const double inches_per_metr = 0.0254;
	int feet, inches;
	double pounds, height, weight;

	std::cout << "Enter your height in feet: ";
	std::cin >> feet;
	std::cout << "And inches: ";
	std::cin >> inches;

	std::cout << "Enter your weight in pounds: ";
	std::cin >> pounds;

	inches = feet * incher_per_feet + inches;
	height = inches * inches_per_metr;
	weight = pounds / pounds_per_kilogramm;

	double bmi = weight / (height * height);

	std::cout << "BMI = " << bmi;
	return 0;
}