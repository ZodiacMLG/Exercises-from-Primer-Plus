#include <iostream>

//	Chapter6_Ex3

//	Write a precursor to a menu-driven program.The program should display a menu offering four choices,
//  each labeled with a letter. If the user responds with a letter other than one of the four valid choices,
//  the program should prompt the user to enter a valid response until the user complies.
//  Then the program should use a switch to select a simple action based on the user's selection.
//  A program run could look something like this:

//	Please enter one of the following choices:
//	c) carnivore	p)pianist
//	t) tree			g)game
//	f
//	Please enter a c, p, t, or g: q
//	Please enter a c, p, t, or g: t
//	A maple is a tree.

int main() {
	char choice;

	std::cout << "Please enter one of the following choices:" << std::endl
		<< "c) carnivore\t\tp) pianist" << std::endl
		<< "t) tree\t\t\tg) game" << std::endl;
	
	while (std::cin >> choice) {
		switch (choice)
		{
		case 'C':
		case 'c': {
			std::cout << "c choice!" << std::endl;
			return 0;
		};
		case 'P':
		case 'p': {
			std::cout << "p choice!" << std::endl;
			return 0;
		};
		case 'T':
		case 't': {
			std::cout << "A maple is a tree." << std::endl;
			return 0;
		}
		case 'G':
		case 'g': {
			std::cout << "g choice!" << std::endl;
			return 0;
		}
		default:
			std::cout << "Please enter a c, p, t, or g: ";
			break;
		}
	}
	return 0;
}