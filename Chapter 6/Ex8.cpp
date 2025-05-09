#include <iostream>
#include <fstream>
#include <cctype>

//	Chapter6_Ex8

//	Write a program that opens a text file,
//  reads it character-by-character to the end of the file,
//  and reports the number of characters in the file.


int main() {
	char text;
	int count{ 0 };
	std::ifstream inFile;
	inFile.open("text.txt");

	inFile >> text;

	while (inFile.good()) {
		//std::cout << text;
		if (std::isalpha(text)) {
			count++;
		}
		//count++;
		inFile >> text;
	}
	
	std::cout << "Count char: " << count;

	inFile.close();

	return 0;
}