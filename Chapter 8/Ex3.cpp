#include <iostream>
#include <string>
#include <cctype>

//	Chapter8_Ex3

//	Write a function that takes a reference to a string object as its parameter
//  and that converts the contents of the string to uppercase.
//  Use the toupper () function described in Table 6.4 of Chapter 6.
//  Write a program that uses a loop which allows you to test the function with different input.
//  A sample run might look like this:
//	Enter a string (q to quit): go away
//	GO AWAY
//	Next string (q to quit): good grief!
//	GOOD GRIEF!
//	Next string (q to quit): q
//	Bye.

void funcUpper(std::string& text);


int main() {
	std::string text;
	std::cout << "Enter a string (q to quit): ";
	std::getline(std::cin, text);

	while (text != "q") {
		funcUpper(text);
		std::cout << text << std::endl;
		std::cout << "Next string (q to quit): ";
		std::getline(std::cin, text);
	}
	std::cout << "Bye.";
	return 0;
}

void funcUpper(std::string& text) {
	for (size_t i = 0; i < text.size(); i++) {
		text[i] = std::toupper(text[i]);
	}
}