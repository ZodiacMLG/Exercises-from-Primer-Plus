#include <iostream>
#include "header.h"

Plorg::Plorg() : CI(50) {
	strcpy_s(name, "Plogra");
}

Plorg::Plorg(const char* name_, int ci) : CI(ci) {
	strncpy_s(name, name_, 18);
	name[18] = '\0';
}

void Plorg::showPlorg() const{
	std::cout << "Name: " << name << std::endl
		<< "CI: " << CI << std::endl;
}

void Plorg::changeCI(int newCI) {
	CI = newCI;
}