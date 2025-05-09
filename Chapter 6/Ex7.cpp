#include <iostream>
#include <cctype>
#include <string>

//	Chapter6_Ex7

//	Write a program that reads input a word at a time until a lone q is entered.
//  The program should then report the number of words that began with vowels, the number that began with consonants,
//  and the number that fit neither of those categories.
//  One approach is to use isalpha () to discriminate between words beginning with letters and those that don't
//  and then use an if or switch statement to further identify those passing the isalpha() test that begin with vowels.
//  A sample run might look like this:
//
//	Enter words (q to quit):
//	The 12 awesome oxen ambled
//	quietly across 15 meters of lawn. q
//	5 words beginning with vowels
//	4 words beginning with consonants
//	2 others


int main() {
	std::string word;
	int vowels{0}, consonants{0}, others{0};
	std::cout << "Enter words (q to quit):" << std::endl;
	std::cin >> word;
	
	while (word != "q") {
		if (std::isalpha(word[0]) && (word[0] == 'a' || word[0] == 'e' || word[0] == 'y' || word[0] == 'i' || word[0] == 'o')) {
			vowels++;
		}
		else if (std::isalpha(word[0]) && (word[0] != 'a' || word[0] != 'e' || word[0] != 'y' || word[0] != 'i' || word[0] != 'o')) {
			consonants++;
		}
		else {
			others++;
		}
		std::cin >> word;
	}
	std::cout << vowels << " words beginning with vowels" << std::endl
		<< consonants << " words beginning with consonants" << std::endl
		<< others << " others" << std::endl;

	return 0;
}