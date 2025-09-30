#include <iostream>
#include "stonewt.h"

//	Chapter11_Ex5

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
	Stonewt taft(21, 8, false);

	std::cout << "The celebrity weighed " << incognito;
	//incognito.show_stn();
	std::cout << "The detective weighed " << wolfe;
	//wolfe.show_stn();
	std::cout << "The President weighed " << taft;
	//taft.show_lbs();
	incognito = 276.8;
	taft = 325;
	std::cout << "After dinner, the celebrity weighed " << incognito;
	//incognito.show_stn();
	std::cout << "After dinner, the President weighed " << taft;
	//taft.show_lbs();
	display(taft, 2);
	std::cout << "The wrestler weighed even more.\n";
	display(422, 2);
	std::cout << "No stone left unearned\n";

	std::cout << "Incognito = " << incognito;
	std::cout << "Incognito * 2 = " << incognito * 2 << std::endl;

	Stonewt a(10, 5);  // 10 stone, 5 pounds
	Stonewt b(150);    // 150 pounds

	Stonewt sum = a + b;
	Stonewt diff = a - b;
	Stonewt mult1 = a * 2;
	Stonewt mult2 = 3 * b;

	std::cout << "a + b = " << sum;
	std::cout << "a - b = " << diff;
	std::cout << "a * 2 = " << mult1;
	std::cout << "3 * b = " << mult2;

	return 0;
}

void display(const Stonewt& st, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "Wow! " << st;
		//st.show_stn();
	}
}