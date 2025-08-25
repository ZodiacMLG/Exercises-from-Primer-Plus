#include <iostream>
#include "golf.h"

void setgolf(golf& g, const char* name, int hc) {
	for (int i = 0; i < Len; i++) {
		g.fullname[i] = name[i];
	}
	g.handicap = hc;
}

int setgolf(golf& g) {
	std::cout << "Enter the fullname: ";
	//std::cin >> g.fullname;
	std::cin.get(g.fullname,Len).get();
	std::cout << "Enter the handicap: ";
	std::cin >> g.handicap;

	if (g.fullname[0] == '\0') {
		return 0;
	}
	else {
		return 1;
	}
}

void handicap(golf& g, int hc) {
	g.handicap = hc;
}

void showgolf(const golf& g) {
	std::cout << "Fullname: " << g.fullname << std::endl
		<< "Handicap: " << g.handicap << std::endl;
}