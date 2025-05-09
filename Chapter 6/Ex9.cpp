#include <iostream>
#include <fstream>
#include <cctype>

//	Chapter6_Ex9

//	Do Programming Exercise 6 but modify it to get information from a file.
//  The first item in the file should be the number of contributors,
//  and the rest of the file should consist of pairs of lines,
//  with the first line of each pair being a contributor's name and the second line being a contribution.
//  That is, the file should look like this:

//  4
//	Sam Stone
//	2000
//	Freida Flass
//	100500
//	Tammy Tubbs
//	5000
//	Rich Raptor
//	55000


const int SizeArr = 30;

struct users {
	char name[SizeArr];
	double contribution;
};


int main() {
	std::ifstream inFile;
	inFile.open("text.txt");
	bool exist = false;
	int people;
	std::cout << "Enter count people: ";
	inFile >> people;
	inFile.get();
	//std::cin >> people;
	std::cout << std::endl;

	users* User = new users[people];

	for (int i = 0; i < people; i++) {
		std::cout << "Enter " << i + 1 << " name: ";
		inFile.getline(User[i].name, SizeArr);
		std::cout << "Enter " << i + 1 << " contribution: ";
		inFile >> User[i].contribution;
		std::cout << std::endl;
		inFile.get();
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

	inFile.close();
	delete[]User;

	return 0;
}