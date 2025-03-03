#include <iostream>

//	Chapter2_Ex5
//	Write a program that has main() call a user-defined function that takes a Celsius
//	temperature value as an argument and then returns the equivalent Fahrenheit value.
//	The program should request the Celsius value as input from the user and display
//	the result, as shown in the following code :
// 
//	Please enter a Celsius value : 20
//	20 degrees Celsius is 68 degrees Fahrenheit.
// 
//	For reference, here is the formula for making the conversion :
//	Fahrenheit = 1.8 Ч degrees Celsius + 32.0

double CelToFah(int);

int main() {
	int Celsius;
	std::cout << "Please enter a Celsius value : ";
	std::cin >> Celsius;
	std::cout << Celsius << " degrees Celsius is " << CelToFah(Celsius) << " degrees Fahrenheit";
	return 0;
}

double CelToFah(int Cel) {
	return 1.8 * Cel + 32.0;
}