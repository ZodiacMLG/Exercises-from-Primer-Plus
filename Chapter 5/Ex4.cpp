#include <iostream>

//	Chapter5_Ex4
//	Daphne invests $100 at 10% simple interest.
//  That is, every year, the investment earns 10% of the original investment,
//  or $10 each and every year: 
//  
//  interest = 0.10 × original balance 
//  
//  At the same time, Cleo invests $100 at 5% compound interest.
//  That is, interest is 5% of the current balance, including previous additions of interest: 
//  
//  interest = 0.05 × current balance
//  
//  Cleo earns 5% of $100 the first year, giving her $105.
//  The next year she earns 5% of $105, or $5.25, and so on.
//  Write a program that finds how many years it takes for the value of Cleo's investment
//  to exceed the value of Daphne's investment and then displays the value of both investments at that time.

int main() {
	int count_age{0};
	double interest_Daphne, interest_Cleo;
	interest_Daphne = 100;
	interest_Cleo = 100;
	std::cout << "Started invests" << std::endl
		<< "Invest Daphne = " << interest_Daphne << std::endl
		<< "Invest Cleo = " << interest_Cleo << std::endl;

	do {
		interest_Daphne += 10;
		interest_Cleo *= 1.05;
		count_age++;
		std::cout << "Age: " << count_age << std::endl
			<< "Cash Daphne = " << interest_Daphne << std::endl
			<< "Cash Cleo = " << interest_Cleo << std::endl;
	} while (interest_Cleo < interest_Daphne);
	
	std::cout << "Age: " << count_age << std::endl
		<< "Total Daphne = " << interest_Daphne << std::endl
		<< "Total Cleo = " << interest_Cleo << std::endl;

	return 0;
}