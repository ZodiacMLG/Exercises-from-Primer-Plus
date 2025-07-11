#include <iostream>

//	Chapter7_Ex10

//	Design a function calculate () that takes two type double values 
//  and a pointer to a function that takes two double arguments and 
//  returns a double.The calculate () function should also be type double, 
//  and it should return the value that the pointed-to function calculates, 
//  using the double arguments to calculate (). 
//  For example, suppose you have this definition for the add () function:
//
//	double add(double x, double y){
//	return x + y;
//	}
//
//	Then, the function call in the following would cause calculate ()
//  to pass the values 2.5 and 10.4 to the add () function and
//  then return the add () return value (12.9):
//	double q = calculate(2.5, 10.4, add);
//	Use these functions and at least one additional function in the add()
//  mold in a program.The program should use a loop that allows the user to enter pairs of numbers.
//  For each pair, use calculate() to invoke add() and at least one other function.
//  If you are feeling adventurous, try creating an array of pointers to add()
//  -style functions and use a loop to successively apply calculate()
//  to a series of functions by using these pointers.
//  Hint: Here's how to declare such an array of three pointers:
//	double (*pf[3])(double, double);
//	You can initialize such an array by using the usual array initialization syntax and function names as addresses.

double calculate(double, double, double (*pf)(double, double));
double add(double x, double y);
double multiply(double x, double y);

int main() {
	double firstV, secondV;
	double (*pf[2])(double, double) = { add, multiply };

	std::cout << "Enter the pairs of numbers: ";
	while (std::cin >> firstV >> secondV) {
		/*std::cout << "Result calculate(add) = " << calculate(firstV, secondV, add) << std::endl;
		std::cout << "Result calculate(multiply) = " << calculate(firstV, secondV, multiply) << std::endl;*/
		for (double (*func)(double, double) : pf) {
			std::cout << "Result: " << calculate(firstV, secondV, func) << "\n";
		}
		std::cout << "Enter another pairs of numbers: ";
	}
	return 0;
}

double add(double x, double y) {
	return x + y;
}

double multiply(double x, double y) {
	return x * y;
}

double calculate(double firstV, double secondV, double (*pf)(double, double)) {
	return (*pf)(firstV, secondV);
}