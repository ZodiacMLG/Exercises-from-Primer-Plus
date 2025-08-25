#include <iostream>
#include <string>

//	Chapter9_Ex2

//	Redo Listing 9.9, replacing the character array with a string object.
//  The program should no longer have to check whether the input string fits,
//  and it can compare the input string to "" to check for an empty line.

void strcount(const std::string str);

int main() {
	std::string input;

	std::cout << "Enter a line:\n";
	std::getline(std::cin, input);
	while (input != "") {
		strcount(input);
		std::cout << "Enter next line (empty line to quit):\n";
		std::getline(std::cin, input);
	}
	std::cout << "Bye\n";
	return 0;
}

void strcount(const std::string str) {
	static int total = 0;
	int count = 0;

	std::cout << "\"" << str << "\" contains ";
	while (str[count] != '\0') {
		count++;
	}
	total += count;
	std::cout << count << " characters\n";
	std::cout << total << " characters total\n";
}