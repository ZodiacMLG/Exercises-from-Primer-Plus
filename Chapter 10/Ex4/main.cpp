#include <iostream>
#include "header.h"

//	Chapter10_Ex4

//	Do Programming Exercise 4 from Chapter 9 but convert the Sales structure
//  and its associated functions to a class and its methods.
//  Replace the setSales (Sales &, double [], int) function with a constructor.
//  Implement the interactive setSales (Sales &) method by using the constructor.
//  Keep the class within the namespace SALES.

int main() {
	SALES::Sales trader;
	trader.showSales();

	double ar[4] = { 10.5, 20.4, 30.1, 100.1 };
	SALES::Sales trader2{ ar, 4 };
	trader2.showSales();
	return 0;
}