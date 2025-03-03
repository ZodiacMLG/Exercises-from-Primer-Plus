#include <iostream>

//	Chapter2_Ex2
//	Write a C++ program that asks for a distance in furlongs and converts it to yards.
//	(One furlong is 220 yards.)


int main() {
	int farlongs;
	std::cout << "Enter farlongs: ";
	std::cin >> farlongs;
	std::cout << farlongs << " farlongs = " << farlongs * 220 << " yards.";
	return 0;
}