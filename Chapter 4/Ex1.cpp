#include <iostream>

//	Chapter4_Ex1
//	Write a C++ program that requests and displays information as shown in the following example of output:
//	What is your first name? Betty Sue
//	What is your last name ? Yewe
//	What letter grade do you deserve ? B
//	What is your age ? 22
//	Name : Yee, Betty Sue
//	Grade : C
//	Age : 22
//	Note that the program should be able to accept first names that comprise more than one word.
//  Also note that the program adjusts the grade downward - that is, up one letter.
//  Assume that the user requests an A, a B, or a C so that you don't have to worry about the gap between a D and an F


int main() {
	const int Size = 20;
	char first_name[Size], last_name[Size];
	char grade;
	int age;
	std::cout << "What is your first name ? ";
	std::cin.getline(first_name, Size);
	std::cout << "What is your last name ? ";
	std::cin.getline(last_name, Size);
	std::cout << "What letter grade do you deserve ? ";
	std::cin >> grade;
	std::cout << "What is your age ? ";
	std::cin >> age;

	std::cout << "Name : " << last_name << ", " << first_name << std::endl;
	std::cout << "Grade : " << char(grade + 1) << std::endl;
	std::cout << "Age : " << age;

	return 0;
}