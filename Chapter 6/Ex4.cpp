#include <iostream>

//	Chapter6_Ex4

//	When you join the Benevolent Order of Programmers, you can be known at BOP meetings by your real name,
//  your job title, or your secret BOP name.Write a program that can list members by real name,
//  by job title, by secret name, or by a member's preference.
//  Base the program on the following structure:

//	struct bop {
//	char fullname[strsize];		//real name
//	char title[strsize];		//job title
//	char bopname[strsize];		//secret BOP name
//	int preference;				//0 = fullname, 1 = title, 2 = bopname
//	};

//	In the program, create a small array of such structures and initialize it to suitable values.
//  Have the program run a loop that lets the user select from different alternatives:

//	a. display by name		b. display by title
//	c. display by bopname	d. display by preference
//	q. quit

//	Note that "display by preference" does not mean display the preference member;
//  it means display the member corresponding to the preference number.
//  For instance, if preference is 1, choice d would display the programmer's job title.

const int strsize = 20;

struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;			// 0 = fullname, 1 = title, 2 = bopname
};

int main() {
	char choice;
	
	bop staff[5]{
		{"Wimp Macho", "Junior Programmer", "MIPS", 0},
		{"Raki Rhodes", "title2", "bopname2", 0},
		{"Celia Laiter", "title3", "bopname3", 1},
		{"Hoppy Hipman", "title4", "bopname4", 1},
		{"Pat Hand", "title5", "bopname5", 2}
	};

	std::cout << "Benevolent Order of Programmers Report" << std::endl
		<< "a. display by name\t\tb. display by title" << std::endl
		<< "c. display by bopname\t\td. display by preference" << std::endl
		<< "q. quit" << std::endl;

	std::cout << "Enter your choice: ";
	std::cin >> choice;

	while (choice != 'q') {
		switch (choice)
		{
		case 'a': {
			for (int i = 0; i < 5; i++) {
				std::cout << staff[i].fullname << std::endl;
			}
			break;
		}
		case 'b': {
			for (int i = 0; i < 5; i++) {
				std::cout << staff[i].title << std::endl;
			}
			break;
		}
		case 'c':
			for (int i = 0; i < 5; i++) {
				std::cout << staff[i].bopname << std::endl;
			}
			break;
		case 'd': {
			for (int i = 0; i < 5; i++) {
				if (staff[i].preference == 0) {
					std::cout << staff[i].fullname << std::endl;
				}
				if (staff[i].preference == 1) {
					std::cout << staff[i].title << std::endl;
				}
				if (staff[i].preference == 2) {
					std::cout << staff[i].bopname << std::endl;
				}
			}
			break;
		}
		default:
			std::cout << "Wrong choice!";
			break;
		}
		std::cout << "Next choice: ";
		std::cin >> choice;
	}
	std::cout << "Bye!";

	return 0;
}