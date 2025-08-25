#include <iostream>
#include <new>

//	Chapter9_Ex3

//	Write a program that uses placement new to place an array of two such structures in a buffer.
//  Then assign values to the structure members (remembering to use strepy() for the char array)
//  and use a loop to display the contents.
//  Option 1 is to use a static array, like that in Listing 9.10, for the buffer.
//  Option 2 is to use regular new to allocate the buffer.

struct chaff {
	char dross[20];
	int slag;
};

char buffer[sizeof(chaff) * 2];

int main() {
	chaff* option1 = new (buffer) chaff[2];
	char temp_input[50];

	for (int i = 0; i < 2; i++) {
		std::cout << "Enter the dross for #" << i + 1 << ": ";
		std::cin >> temp_input;
		strcpy_s(option1[i].dross, temp_input);
		std::cout << "Enter the slag for #" << i + 1 << ": ";
		std::cin >> option1[i].slag;
	}

	std::cout << "Address buffer: " << &buffer << std::endl;
	for (int i = 0; i < 2; i++) {
		std::cout << "Structure #" << i + 1 << std::endl;
		std::cout << "# dross: " << option1[i].dross << std::endl;
		std::cout << "# slag: " << option1[i].slag << std::endl;
		std::cout << "# Address dross: " << &option1[i].dross << std::endl;
		std::cout << "# Address slag: " << &option1[i].slag << std::endl;
	}
	return 0;
}