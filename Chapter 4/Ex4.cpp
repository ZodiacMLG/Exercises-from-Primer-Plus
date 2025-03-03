#include <iostream>
#include <string>

//	Chapter4_Ex4
//	Write a program that asks the user to enter his or her first name and then last name,
//	and that then constructs, stores, and displays a third string consisting of the user's last name followed by a comma,
//  a space, and first name. Use string objects and methods from the string header file. A sample run could look like this:
//  Enter your first name: Flip
//  Enter your last name: Fleming
//	Here's the information in a single string: Fleming, Flip

int main() {
	std::string first_name, last_name, full_name;

	std::cout << "Enter your first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter your last name: ";
	std::getline(std::cin, last_name);
	full_name += last_name + ", " + first_name;

	std::cout << "Here's the information in a single string: " << full_name;


	return 0;
}