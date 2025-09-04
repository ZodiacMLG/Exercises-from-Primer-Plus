#include <iostream>
#include "header.h"


//	Chapter10_Ex3

//	Do Programming Exercise 1 from Chapter 9 but replace the code shown there with
//  an appropriate golf class declaration. Replace setgolf (golf &, const char*, int)
//  with a constructor with the appropriate argument for providing initial values.
//  Retain the interactive version of setgolf () but implement it by using the constructor.
//  (For example, for the code for setgolf (), obtain the data, pass the data to the constructor
//  to create a temporary object, and assign the temporary object to the invoking object, which is *this.)

int main() {
	
	Golf persona{ "Jack Russel", 12 };

	persona.showgolf();

	return 0;
}