#include <iostream>
#include "header.h"

//	Chapter10_Ex5

//	Write a program that adds and removes customer structures from a stack,
//  represented by a Stack class declaration. Each time a customer is removed,
//  his or her payment should be added to a running total,
//  and the running total should be reported. 
//  Note: You should be able to use the Stack class unaltered;
//  just change the typedef declaration so that
//  Item is type customer instead of unsigned long.

int main() {
	Stack stack;
	double running_total = 0.0;

	Item person1{ "Ivanov", 750 };
	Item person2{ "Petrov", 350 };

	std::cout << stack.push(person1);
	std::cout << stack.push(person2);
	
	Item current;
	while (stack.pop(current)) {
		running_total += current.payment;
		std::cout << "Removed: " << current.fullname
			<< ", payment: " << current.payment
			<< ", running total: " << running_total << std::endl;
	}



	return 0;
}