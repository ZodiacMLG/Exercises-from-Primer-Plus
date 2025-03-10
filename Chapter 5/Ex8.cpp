﻿#include <iostream>
#include <cstring>

//	Chapter5_Ex8
//  Write a program that uses an array of char and a loop to read one word at a time until the word done is entered.
//  The program should then report the number of words entered (not counting done). 
//  A sample run could look like this:

//	Enter words (to stop, type the word done):
//	anteater birthday category dumpster
//	envy finagle geometry done for sure
//	You entered a total of 7 words.

//	You should include the cstring header file and use the strcmp() function to make the comparison test.

int main() {
	char word[20];
	int count_words{0};

	std::cout << "Enter words (to stop, type the word \"done\"):" << std::endl;

	std::cin >> word;
	while (std::strcmp(word, "done") != 0) {
		count_words++;
		std::cin >> word;
	}

	std::cout << "You entered a total of " << count_words << " words.";

	return 0;
}