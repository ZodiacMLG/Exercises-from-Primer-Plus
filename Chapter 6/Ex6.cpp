#include <iostream>

//	Chapter6_Ex6

//	Put together a program that keeps track of monetary contributions to the Society for the Preservation of Rightful Influence.
//  It should ask the user to enter the number of contributors and then solicit the user to enter the name and contribution of each contributor.
//  The information should be stored in a dynamically allocated array of structures.
//  Each structure should have two members: a character array (or else a string object)
//  to store the name and a double member to hold the amount of the contribution.
//  After reading all the data, the program should display the names and amounts donated for all donors who contributed $10,000 or more.
//  This list should be headed by the label Grand Patrons. After that, the program should list the remaining donors.
//  That list should be headed Patrons. If there are no donors in one of the categories,
//  the program should print the word "none." Aside from displaying two categories, the program need do no sorting.

const int SizeArr = 15;

struct users {
	char name[SizeArr];
	double contribution;
};


int main() {
	bool exist = false;
	int people;
	std::cout << "Enter count people: ";
	std::cin >> people;
	std::cout << std::endl;

	users * User = new users[people];

	for (int i = 0; i < people; i++) {
		std::cout << "Enter " << i + 1 << " name: ";
		std::cin >> User[i].name;
		std::cout << "Enter " << i + 1 << " contribution: ";
		std::cin >> User[i].contribution;
		std::cout << std::endl;
	}

	std::cout << "\t\tGrand Patrons:" << std::endl;
	for (int i = 0; i < people; i++) {
		if (User[i].contribution >= 10000) {
			exist = true;
			std::cout << "Name: " << User[i].name << "\t\t"
				<< "Contribution: " << User[i].contribution << std::endl;
		}
		
	}
	if (exist == false) {
		std::cout << "none.";
	}


	exist = false;
	std::cout << std::endl << "\t\tPatrons:" << std::endl;
	for (int i = 0; i < people; i++) {
		if (User[i].contribution < 10000) {
			exist = true;
			std::cout << "Name: " << User[i].name << "\t\t"
				<< "Contribution: " << User[i].contribution << std::endl;
		}
	}
	if (exist == false) {
		std::cout << "none.";
	}

	delete[]User;

	return 0;
}