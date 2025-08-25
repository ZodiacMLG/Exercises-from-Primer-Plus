#include <iostream>
#include "header.h"

namespace SALES {
	//	copies the lesser of 4 or n items from the array ar
	//	to the sales member of s and computes and stores the
	//	average, maximum, and minimum values of the entered items;
	//	remaining elements of sales, if any, set to 0

	void setSales(Sales& s, const double ar[], int n) {
		for (int i = 0; i < n; i++) {
			s.sales[i] = ar[i];
		}
		for (int i = n; i < QUARTERS; i++) {
			s.sales[i] = 0;
		}
		s.max = s.min = s.sales[0];
		s.average = 0;
		for (int i = 0; i < QUARTERS; i++) {
			s.average = s.average + s.sales[i];
			if (s.min > s.sales[i]) {
				s.min = s.sales[i];
			}
			if (s.max < s.sales[i]) {
				s.max = s.sales[i];
			}
		}
		s.average = s.average / QUARTERS;
	}

	//	gathers sales for 4 quarters interactively, stores them
	//	in the sales member of s and computes and stores the
	//	average, maximum, and minimum values

	void setSales(Sales& s) {
		std::cout << "Enter the sales from 4 quarters:" << std::endl;
		for (int i = 0; i < QUARTERS; i++) {
			std::cout << "Quarter #" << i + 1 << ": ";
			std::cin >> s.sales[i];
		}
		s.min = s.max = s.sales[0];
		s.average = 0;
		for (int i = 0; i < QUARTERS; i++) {
			s.average += s.sales[i];
			if (s.min > s.sales[i]) {
				s.min = s.sales[i];
			}
			if (s.max < s.sales[i]) {
				s.max = s.sales[i];
			}
		}
		s.average = s.average / QUARTERS;
	}

	void showSales(const Sales& s) {
		for (int i = 0; i < QUARTERS; i++) {
			std::cout << "Sales#" << i+1 << ": " << s.sales[i] << std::endl;
		}
		std::cout << "Average: " << s.average << std::endl
			<< "Minimum: " << s.min << std::endl
			<< "Maximum: " << s.max << std::endl;
	}
}