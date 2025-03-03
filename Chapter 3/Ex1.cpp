#include <iostream>

//	Chapter3_Ex1
//	Write a short program that asks for your height in integer inches and then converts your height to feet and inches.
//  Have the program use the underscore character to indicate where to type the response.
//  Also use a const symbolic constant to represent the conversion factor.

int main() {
	const int inch_per_Feet = 12;
	int inches, feet, height;

	std::cout << "Enter your height in inches:______\b\b\b\b\b\b";
	std::cin >> height;
	feet = height / inch_per_Feet;
	inches = height % inch_per_Feet;

	std::cout << "Your height(" << height << " inches) are: " << feet << " foot, " << inches << " inches.";
	
	return 0;
}