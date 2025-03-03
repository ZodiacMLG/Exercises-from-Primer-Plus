#include <iostream>

//	Chapter2_Ex3
//	Write a C++ program that uses three user-defined functions (counting main() as
//	one) and produces the following output :
//	Three blind mice
//	Three blind mice
//	See how they run
//	See how they run
// 
//	One function, called two times, should produce the first two lines, and the remain -
//	ing function, also called twice, should produce the remaining output.

void Three();
void See();


int main() {
	
	Three();
	Three();
	See();
	See();

	return 0;
}

void Three() {
	std::cout << "Three blind mice\n";
}

void See() {
	std::cout << "See how they run\n";
}