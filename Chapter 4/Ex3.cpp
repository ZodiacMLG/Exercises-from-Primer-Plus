﻿#include <iostream>
#include <cstring>

//#pragma warning(disable : 4996)

//	Chapter4_Ex3
//	Write a program that asks the user to enter his or her first name and then last name,
//  and that then constructs, stores, and displays a third string, 
//  consisting of the user's last name followed by a comma, a space, and first name.
//  Use char arrays and functions from the cstring header file. A sample run could look like this: 
//	Enter your first name: Flip
//	Enter your last name: Fleming
//	Here's the information in a single string: Fleming, Flip


int main() {
	const int Size = 20;
	char first_name[Size], last_name[Size], full_name[Size * 2 + 2];

	std::cout << "Enter your first name: ";
	std::cin.getline(first_name, Size);
	std::cout << "Enter your last name: ";
	std::cin.getline(last_name, Size);
	strcpy_s(full_name, last_name);
	strcat_s(full_name, ", ");
	strcat_s(full_name, first_name);
	std::cout << "Here's the information in a single string: " << full_name;

	return 0;
}
