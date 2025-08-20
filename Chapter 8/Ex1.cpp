#include <iostream>

//	Chapter8_Ex1

//	Write a function that normally takes one argument, the address of a string,
//  and prints that string once. However, if a second, type int, argument is provided and is nonzero,
//  the function should print the string a number of times equal to the number
//  of times that function has been called at that point.
//  (Note that the number of times the string is printed is not equal
//  to the value of the second argument; it is equal to the number of times the function has been called.)
//  Yes, this is a silly function, but it makes you use some of the techniques discussed in this chapter.
//  Use the function in a simple program that demonstrates how the function works.


void showString(const char* text, int var = 0);

const int sizeArr = 20;
int countFunc = 0;

int main() {
	char text[sizeArr]{ "Hello World!" };
	showString(text);
	showString(text, 1);
	showString(text, 2);
	showString(text, 3);
	return 0;
}

void showString(const char* text, int var) {
	countFunc++;
	if (var != 0) {
		for (int i = 0; i < countFunc; i++) {
			std::cout << i + 1 << ":" << text << std::endl;
		}
	}
	else {
		std::cout << text << std::endl;
	}
}