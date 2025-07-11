#include <iostream>


//	Chapter7_Ex7

//	Redo Listing 7.7, modifying the three array-handling functions to each use two pointer
//  parameters to represent a range.The fill_array() function, instead of returning the actual number of items read,
//  should return a pointer to the location after the last location filled;
//  the other functions can use this pointer as the second argument to identify the end of the data.

const int Max = 5;

double* fill_array(double* ar, double* ar_end);
void show_array(const double* ar, const double* end);
void revalue(double r, double* ar, double* end);


int main() {
	double properties[Max];

	double* end = fill_array(properties, properties + Max);
	show_array(properties, end);
	if (end != properties) {
		std::cout << "Enter revalution factor: ";
		double factor;
		while (!(std::cin >> factor)) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	}
	std::cout << "Done.\n";
	std::cin.get();
	std::cin.get();

	return 0;
}

double* fill_array(double* ar, double* ar_end) {
	double temp;
	int i{ 0 };
	for (; &ar[i] < ar_end; i++) {
		std::cout << "Enter value #" << (i + 1) << ": ";
		std::cin >> temp;
		if (!std::cin) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Bad input; input process terminated.\n";
			return &ar[i];
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}

	return &ar[i];
}

void show_array(const double* ar, const double* end) {
	for (int i = 0; &ar[i] < end; i++) {
		std::cout << "Property #" << (i + 1) << ": $";
		std::cout << ar[i] << std::endl;
	}
}

void revalue(double r, double* ar, double* end) {
	for (int i = 0; &ar[i] < end; i++) {
		ar[i] *= r;
	}
}