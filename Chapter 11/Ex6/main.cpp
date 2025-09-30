#include <iostream>
#include "stonewt.h"

//	Chapter11_Ex6

//	Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it has a state member
//  that governs whether the object is interpreted in stone form,
//  integer pounds form, or floating-point pounds form.
//  Overload the << operator to replace the show_stn() and show_1bs() methods.
//  Overload the addition, subtraction, and multiplication operators
//  so that one can add, subtract, and multiply Stonewt values.
//  Test your class with a short program that uses all the class methods and friends.

void display(const Stonewt& st, int n);

int main() {
	Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);

	std::cout << "The celebrity weighed ";
	incognito.show_stn();
	std::cout << "The detective weighed ";
	wolfe.show_stn();
	std::cout << "The President weighed ";
	taft.show_lbs();
	incognito = 276.8;
	taft = 325;
	std::cout << "After dinner, the celebrity weighed ";
	incognito.show_stn();
	std::cout << "After dinner, the President weighed ";
	taft.show_lbs();
	display(taft, 2);
	std::cout << "The wrestler weighed even more.\n";
	display(422, 2);
	std::cout << "No stone left unearned\n";
	std::cout << std::boolalpha;
	std::cout << "Compare incognite > wolfe (275 > 285.7) = " << (incognito > wolfe) << std::endl;
	std::cout << "Compare incognite < wolfe (275 < 285.7) = " << (incognito < wolfe) << std::endl;
	std::cout << "Compare wolfe > incognite (285.7 > 275) = " << (wolfe > incognito) << std::endl;
	std::cout << "Compare wolfe < incognite (285.7 < 275) = " << (wolfe < incognito) << std::endl;
	std::cout << "Compare taft < incognite (21st8p < 275) = " << (taft < incognito) << std::endl;
	std::cout << "Compare taft > incognite (21st8p > 275) = " << (taft > incognito) << std::endl;

	Stonewt arrStone[6]{500, 450, 480};
	double tempStone;
	for (int i = 3; i < 6; i++) {
		std::cout << "Enter the arrStone[" << i + 1 << "]: ";
		std::cin >> tempStone;
		arrStone[i] = tempStone;
	}
	Stonewt checkStone[3]{ Stonewt(11,0), tempStone, tempStone};
	size_t countStone{};
	for (int i = 0; i < 6; i++) {
		if (checkStone[1] > arrStone[i]) checkStone[1] = arrStone[i];
		else if (checkStone[2] < arrStone[i]) checkStone[2] = arrStone[i];
		if (arrStone[i] >= checkStone[0]) countStone++;
	}
	std::cout << "Lowest element = ";
	checkStone[1].show_lbs();
	std::cout << "Biggest element = ";
	checkStone[2].show_lbs();
	std::cout << countStone << " = elements bigger or equal than ";
	checkStone[0].show_lbs();

	return 0;
}

void display(const Stonewt& st, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "Wow! ";
		st.show_stn();
	}
}