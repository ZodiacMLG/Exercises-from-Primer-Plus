#include <iostream>
#include "header.h"

SALES::Sales::Sales() {
	std::cout << "Enter the sales from 4 quarters:" << std::endl;
	for (int i = 0; i < QUARTERS; i++) {
		std::cout << "Quarter #" << i + 1 << ": ";
		std::cin >> sales[i];
	}
	max = min = sales[0];
	average = 0;
	for (int i = 0; i < QUARTERS; i++) {
		average = average + sales[i];
		if (min > sales[i]) {
			min = sales[i];
		}
		if (max < sales[i]) {
			max = sales[i];
		}
	}
	average = average / QUARTERS;
}

SALES::Sales::Sales(double ar[], int n) {
	for (int i = 0; i < n; i++) {
		sales[i] = ar[i];
	}
	for (int i = n; i < QUARTERS; i++) {
		sales[i] = 0;
	}
	max = min = sales[0];
	average = 0;
	for (int i = 0; i < QUARTERS; i++) {
		average = average + sales[i];
		if (min > sales[i]) {
			min = sales[i];
		}
		if (max < sales[i]) {
			max = sales[i];
		}
	}
	average = average / QUARTERS;
}

void SALES::Sales::showSales() {
	for (int i = 0; i < QUARTERS; i++) {
		std::cout << "Sales#" << i + 1 << ": " << sales[i] << std::endl;
	}
	std::cout << "Average: " << average << std::endl
		<< "Minimum: " << min << std::endl
		<< "Maximum: " << max << std::endl;
}