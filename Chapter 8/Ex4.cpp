#include <iostream>
#include <cstring>

//	Chapter8_Ex4

//	Complete this skeleton by providing the described functions and prototypes.
//  Note that there should be two show() functions, each using default arguments.
//  Use const arguments when appropriate.
//  Note that set () should use new to allocate sufficient space to hold the designated string.
//  The techniques used here are similar to those used in designing and implementing classes.
//  (You might have to alter the header filenames and delete the using directive, depending on your compiler.)

struct stringy {
	char* str;
	int ct;
};

// prototype for set(), show(), and show() go here
void set(stringy&, const char*);
void show(const stringy&, int = 1);
void show(const char*, int = 1);


int main() {
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);

	testing[0] = 'D';
	testing[1] = 'u';

	show(testing);
	show(testing, 3);

	show("Done!");

	delete[] beany.str;
	return 0;
}

void set(stringy& sS, const char* str) {
	sS.ct = strlen(str);
	sS.str = new char[sS.ct + 1];
	strcpy_s(sS.str, sS.ct + 1, str);
}

void show(const stringy& sS, int count) {
	for (int i = 0; i < count; i++) {
		std::cout << i + 1 << ":" << sS.str << std::endl;
	}
}

void show(const char* text, int count) {
	for (int i = 0; i < count; i++) {
		std::cout << i + 1 << ":" << text << std::endl;
	}
}