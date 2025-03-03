#include <iostream>

//	Chapter2_Ex4
//	Write a program that asks the user to enter his or her age.The program then should
//	display the age in months :
//	Enter your age : 29
//	Your age in months is 384.



int main() {
	int age;
	std::cout << "Enter your age: ";
	std::cin >> age;
	std::cout << "Your age in months = " << age * 12;
	return 0;
}