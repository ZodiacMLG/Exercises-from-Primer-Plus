#include <iostream>
#include <string>
#include <cstring>

//	Chapter5_Ex9
//  Write a program that matches the description of the program in Programming Exercise 8,
//  but use a string class object instead of an array.
//	Include the string header file and use a relational operator to make the comparison test.

int main() {
	std::string word;
	int count_words{ 0 };

	std::cout << "Enter words (to stop, type the word \"done\"):" << std::endl;

	std::cin >> word;
	while (word != "done") {
		count_words++;
		std::cin >> word;
	}

	std::cout << "You entered a total of " << count_words << " words.";

	return 0;
}