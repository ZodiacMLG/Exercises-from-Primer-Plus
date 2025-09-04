#include <iostream>
#include "header.h"

//	Chapter10_Ex7

//	Write a Plorg class declaration (including data members and member function prototypes)
//  that represents a plorg.Write the function definitions for the member functions.
//  Write a short program that demonstrates all the features of the Plorg class.

int main() {
	Plorg plorg;
	Plorg plorg1("CustomPlorg", 75);

	plorg.showPlorg();
	plorg1.showPlorg();

	plorg.changeCI(100);
	plorg.showPlorg();

	return 0;
}