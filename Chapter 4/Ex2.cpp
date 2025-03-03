#include <iostream>
#include <string>

//	Chapter4_Ex2
//	Rewrite Listing 4.4, using the C++ string class instead of char arrays.


int main() {
	const int ArSize = 20;
	std::string sname;
	std::string sdessert;
	//char name[ArSize];
	//char dessert[ArSize];

	std::cout << "Enter your name:\n";
	std::getline(std::cin, sname);
	//std::cin.getline(name, ArSize);
	std::cout << "Enter your favorite dessert:\n";
	std::getline(std::cin, sdessert);
	//std::cin.getline(dessert, ArSize);
	std::cout << "I have some delicious " << sdessert;
	std::cout << " for you, " << sname << ".\n";
	return 0;
}

//	Listing 4.4:
//int main() {
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	std::cout << "Enter your name:\n";
//	std::cin.getline(name, ArSize);
//	std::cout << "Enter your favorite dessert:\n";
//	std::cin.getline(dessert, ArSize);
//	std::cout << "I have some delicious " << dessert;
//	std::cout << " for you, " << name << ".\n";
//	return 0;
//}