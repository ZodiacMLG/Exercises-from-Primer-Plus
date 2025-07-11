#include <iostream>

//	Chapter7_Ex9

//	This exercise provides practice in writing functions dealing with arrays and structures.
//  The following is a program skeleton.
//  Complete it by providing the described functions:

const int SLEN = 30;

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
//	getinfo() has two arguments: a pointer to the first element of
//	an array of student structures and an int representing the
//	number of elements of the array. The function solicits and
//	stores data about students. It terminates input upon filling
//	the array or upon encountering a blank line for the student
//	name. The function returns the actual number of array elements
//	filled.

void display1(student st);
//	display 1() takes a student structure
//  as an argument and displays its contents

void display2(const student* ps);
//	display2() takes the address of student structure as an
//	argument and displays the structure's contents

void display3(const student pa[], int n);
//	display3() takes the address of the first element of an array
//	of student structures and the number of array elements as
//	arguments and displays the contents of the structures


int main() {
	std::cout << "Enter class size: ";
	int class_size;
	std::cin >> class_size;
	while (std::cin.get() != '\n')
		continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	std::cout << "Done.\n";
	return 0;
}

int getinfo(student pa[], int n) {
	int i = 0;
	for (; i < n; i++) {
		std::cout << "Enter values for struct\n"
			<< "Fullname: ";
		std::cin.getline(pa[i].fullname, SLEN);

		if (pa[i].fullname[0] == '\0') {
			break;
		}

		std::cout << "Hobby: ";
		std::cin.getline(pa[i].hobby, SLEN);

		while (!(std::cin >> pa[i].ooplevel)) {
			while (std::cin.get() != '\n') {
				continue;
			}
			std::cout << "Please enter a number: ";
		}

		/*std::cout << "OOP level: ";
		std::cin >> pa[i].ooplevel;*/
	}
	return i;
}

void display1(student st) {
	std::cout << "Fullname: " << st.fullname << std::endl;
	std::cout << "Hobby: " << st.hobby << std::endl;
	std::cout << "OOP Level: " << st.ooplevel << std::endl;
}

void display2(const student* ps) {
	std::cout << "Fullname: " << ps->fullname << std::endl;
	std::cout << "Hobby: " << ps->hobby << std::endl;
	std::cout << "OOP Level: " << ps->ooplevel << std::endl;
}

void display3(const student pa[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "Fullname: " << pa[i].fullname << std::endl;
		std::cout << "Hobby: " << pa[i].hobby << std::endl;
		std::cout << "OOP level: " << pa[i].ooplevel << std::endl;
	}
}