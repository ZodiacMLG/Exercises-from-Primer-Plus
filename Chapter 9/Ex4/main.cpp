#include <iostream>
#include "header.h"

//	Chapter9_Ex4

//	The first file should be a header file that contains the namespace.
//  The second file should be a source code file that extends the namespace
//  to provide definitions for the three prototyped functions.
//  The third file should declare two Sales objects.
//  It should use the interactive version of setSales () to provide values
//  for one structure and the non-interactive version of setSales ()
//  to provide values for the second structure. 
//  It should display the contents of both structures by using showSales().


int main() {
	SALES::Sales s1, s2;
	const double ar[3]{ 2.1, 3.2, 4.3 };

	SALES::setSales(s1, ar, 3);
	SALES::showSales(s1);

	SALES::setSales(s2);
	SALES::showSales(s2);

	return 0;
}