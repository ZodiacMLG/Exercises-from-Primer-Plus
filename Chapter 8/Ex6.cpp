#include <iostream>

//	Chapter8_Ex6

//	Write a template function maxn () that takes as its arguments an array of items of type T 
//  and an integer representing the number of elements in the array and that returns the largest item in the array.
//  Test it in a program that uses the function template with an array of six int value and an array of four double values.
//  The program should also include a specialization that takes an array of pointers-to-char as an argument 
//  and the number of pointers as a second argument and that returns the address of the longest string. 
//  If multiple strings are tied for having the longest length, 
//  the function should return the address of the first one tied for longest.
//  Test the specialization with an array of five string pointers.

template <typename T>
T maxn(T[], int value);

template <> const char* maxn(const char* [], int value);

int main() {
	int arrI[6]{ 2, 6, 3, 1, 0, 5 };
	double arrD[4]{ 2.1, 6.3, 3.1, 1.3 };
	const char* text[5]{ "Hello", "World1", "HeLlo", "Unique", "Yolo" };

	std::cout << "Array int maximum = " << maxn(arrI, 6) << std::endl;
	std::cout << "Array double maximum = " << maxn(arrD, 4) << std::endl;

	std::cout << "Address longest string = " << maxn(text, 5) << std::endl;

	return 0;
}

template <typename T>
T maxn(T arr[], int value) {
	T temp = arr[0];
	for (int i = 0; i < value; i++) {
		if (arr[i] > temp) {
			temp = arr[i];
		}
	}
	return temp;
}

//template <> const char* maxn(const char* simbols[], int value) {
//	const char* temp = simbols[0];
//	for (int i = 0; i < value; i++) {
//		if (strlen(simbols[i]) > strlen(temp)) {
//			temp = simbols[i];
//		}
//	}
//	return temp;
//}

template <> const char* maxn(const char* simbols[], int value) {
	int count = strlen(simbols[0]);
	int id{ 0 };
	for (int i = 0; i < value; i++) {
		if (strlen(simbols[i]) > count) {
			id = i;
			count = strlen(simbols[i]);
		}
	}
	return simbols[id];
}