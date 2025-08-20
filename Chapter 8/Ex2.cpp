#include <iostream>

//	Chapter8_Ex2

//	The CandyBar structure contains three members.
//  The first member holds the brand name of a candy bar.
//  The second member holds the weight (which may have a fractional part) of the candy bar,
//  and the third member holds the number of calories (an integer value) in the candy bar.
//  Write a program that uses a function that takes as arguments a reference to CandyBar,
//  a pointer-to-char, a double, and an int and uses the last three values
//  to set the corresponding members of the structure.
//  The last three arguments should have default values of"Millennium Munch," 2.85, and 350.
//  Also the program should use a function that takes a reference to a CandyBar as an argument
//  and displays the contents of the structure. Use const where appropriate.

const int sizeArr = 30;

struct CandyBar {
	char name[sizeArr];
	double weight;
	int calories;
};

void func1(CandyBar& bar, const char name[] = "Millennium Munch", double weight = 2.85, int calories = 350);
void funcShow(const CandyBar& bar);

int main() {
	CandyBar snikers, munch;

	func1(snikers, "Snikers", 2.00, 400);
	funcShow(snikers);
	std::cout << std::endl;
	func1(munch);
	funcShow(munch);

	return 0;
}

void func1(CandyBar& bar, const char name[], double weight, int calories) {

	//*bar.name = *name;
	for (int i = 0; i < sizeArr; i++) {
		bar.name[i] = name[i];
	}

	bar.weight = weight;
	bar.calories = calories;
}

void funcShow(const CandyBar& bar) {
	std::cout << "Name: " << bar.name << std::endl
		<< "Weight: " << bar.weight << std::endl
		<< "Calories: " << bar.calories << std::endl;
}