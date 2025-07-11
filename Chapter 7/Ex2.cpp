#include <iostream>


//	Chapter7_Ex2

//	Write a program that asks the user to enter up to 10 golf scores, 
//  which are to be stored in an array.
//  You should provide a means for the user to terminate input prior to entering 10 scores.
//  The program should display all the scores on one line and report the average score.
//  Handle input, display, and the average calculation with three separate array-processing functions.

const int SizeArray{ 10 };

void addArray(int[]);
void showArray(int []);
double calcArray(int []);

int main() {
	int scores[SizeArray] = { 0 };
	addArray(scores);
	showArray(scores);
}

void addArray(int scores[]){
	int i{ 0 };
	std::cout << "Enter the scores for golf#" << i + 1 << ": ";
	while (i < SizeArray && std::cin >> scores[i]) {
		i++;
		std::cout << "Enter the scores for golf#" << i + 1 << ": ";
	}
	
	/*for (int i = 0; i < SizeArray; i++) {
		std::cout << "Enter the scores for golf#" << i + 1 << ": ";
		std::cin >> scores[i];
	}*/
}

void showArray(int scores[]) {
	for (int i = 0; i < SizeArray; i++) {
		std::cout << "Goal#" << i + 1 << ": " << scores[i] << std::endl;
	}
	std::cout << "Average sum: " << calcArray(scores);
}

double calcArray(int scores[]) {
	double sum{ 0 };
	for (int i = 0; i < SizeArray; i++) {
		sum += scores[i];
	}
	return sum / SizeArray;
}