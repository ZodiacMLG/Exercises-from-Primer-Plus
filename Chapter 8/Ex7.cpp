#include <iostream>

//	Chapter8_Ex7

//	Modify Listing 8.14 so that it uses two template functions called SumArray ()
//  to return the sum of the array contents instead of displaying the contents.
//  The program now should report the total number of things and the sum of all the debts.

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T* arr[], int n);

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T* arr[], int n);

struct debts {
	char name[50];
	double amount;
};

int main() {
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	debts mr_E[3] = {
		{"Ima Wolfe", 2400.0 },
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double* pd[3];

	for (int i = 0; i < 3; i++) {
		pd[i] = &mr_E[i].amount;
	}

	std::cout << "Listing Mr. E's counts of things:\n";
	ShowArray(things, 6);
	std::cout << "Listing Mr. E's debts:\n";
	ShowArray(pd, 3);

	std::cout << "Listing Mr. E's sum of things = " << SumArray(things, 6) << std::endl;
	std::cout << "Listing Mr. E's sum of pd = " << SumArray(pd, 3) << std::endl;

	return 0;
}

template <typename T>
void ShowArray(T arr[], int n) {
	std::cout << "Template A\n";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}

template <typename T>
void ShowArray(T* arr[], int n) {
	std::cout << "template B\n";
	for (int i = 0; i < n; i++) {
		std::cout << *arr[i] << ' ';
	}
	std::cout << std::endl;
}

template <typename T>
T SumArray(T arr[], int n) {
	T temp{};
	for (int i = 0; i < n; i++) {
		temp += arr[i];
	}
	return temp;
}

template <typename T>
T SumArray(T* arr[], int n) {
	T temp{};
	for (int i = 0; i < n; i++) {
		temp += *arr[i];
	}
	return temp;
}