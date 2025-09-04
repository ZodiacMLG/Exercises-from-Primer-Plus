#include <iostream>
#include "header.h"

//	Chapter10_Ex1

//	Provide method definitions for the class described
//  in Chapter Review Question 5 and write a short program
//  that illustrates all the features.


int main() {
	BANK person1;

	person1.show();
	
	person1.addMoney(500);
	person1.show();

	person1.takeMoney(250);
	person1.show();

	return 0;
}