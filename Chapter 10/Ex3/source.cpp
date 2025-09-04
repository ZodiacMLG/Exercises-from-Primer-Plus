#include <iostream>
#include "header.h"

Golf::Golf() {
	char temp[Len];
	int tempI;

	std::cout << "Enter the fullname: ";
	std::cin.get(temp, Len).get();
	std::cout << "Enter the handicap: ";
	std::cin >> tempI;
	Golf tempObj{ temp, tempI };
	*this = tempObj;
}

Golf::Golf(const char* name, int hc) {
	strcpy_s(fullname, name);
	handicap = hc;
}

void Golf::handicapAdd(int hc) {
	if (handicap >= 0) {
		handicap += hc;
	}
	else {
		std::cout << "Error! Negative value!";
	}
}

void Golf::showgolf() {
	std::cout << "Name: " << fullname << std::endl
		<< "Handicap: " << handicap << std::endl;
}