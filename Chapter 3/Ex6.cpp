#include <iostream>

//	Chapter3_Ex6
//	Write a program that asks how many miles you have driven and how many gallons of gasoline you have used
//  and then reports the miles per gallon your car has gotten. 
//  Or, if you prefer, the program can request distance in kilometers
//  and petrol in liter and then report the result European style, in liters per 100 kilometers.

int main() {
	int kilometers;
	float liters, result;

	std::cout << "Enter the kilometres: ";
	std::cin >> kilometers;
	std::cout << "Enter the petrol in liters: ";
	std::cin >> liters;
	result = (liters*100) / kilometers;

	std::cout << "Result = " << result << " liters per 100 kilometers.";
	return 0;
}