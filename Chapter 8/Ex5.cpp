#include <iostream>

//	Chapter8_Ex5

//	Write a template function max5 () that takes as its argument an array of five items
//  of type and returns the largest item in the array.
//  (Because the size is fixed, it can be hard-coded into the loop instead of being passed as an argument.)
//  Test it in a program that uses the function with an array of five int value and an array of five double values.

const int sizeArr = 5;

template <typename T>
T max5(T arr[]);

int main() {
	int arr[5]{ 0, 1, 21, 3, 4 };
	double arrD[5]{ 0.1, 1.2, 21.3, 3.4, 4.5 };

	std::cout << "Array int: ";
	for (int i = 0; i < sizeArr; i++) {
		if (i == sizeArr - 1) {
			std::cout << arr[i] << std::endl;
			break;
		}
		std::cout << arr[i] << "; ";
	}
	std::cout << "Maximum in array int = " << max5(arr) << std::endl;

	std::cout << "Array double: ";
	for (int i = 0; i < sizeArr; i++) {
		if (i == sizeArr - 1) {
			std::cout << arrD[i] << std::endl;
			break;
		}
		std::cout << arrD[i] << "; ";
	}
	std::cout << "Maximum in array double = " << max5(arrD) << std::endl;
	return 0;
}


template <typename T>
T max5(T arr[]) {
	T temp = arr[0];
	for (int i = 0; i < sizeArr; i++) {
		if (arr[i] > temp) {
			temp = arr[i];
		}
	}
	return temp;
}