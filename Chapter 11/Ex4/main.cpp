#include <iostream>
#include "mytime3.h"

//	Chapter11_Ex4

//	Rewrite the final Time class example 
//  (Listings 11.10, 11.11, and 11.12) 
//  so that all the overloaded operators
//  are implemented using friend functions.


int main() {
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	std::cout << "Aida and Tosca:\n";
	std::cout << aida << "; " << tosca << std::endl;
	temp = aida + tosca;	//	operator+()
	std::cout << "Aida + Tosca: " << temp << std::endl;
	temp = aida * 1.17;		//	member operator*()
	std::cout << "Aida * 1.17: " << temp << std::endl;
	std::cout << "10.0 * Tosca: " << 10.0 * tosca << std::endl;

	return 0;
}