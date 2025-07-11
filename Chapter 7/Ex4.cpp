#include <iostream>
#include <iomanip>


//	Chapter7_Ex4

//	Many state lotteries use a variation of the simple lottery portrayed by Listing 7.4.
//  In these variations you choose several numbers from one set and call them the field numbers.
//  For example, you might select five numbers from the field of 1-47).
//  You also pick a single number (called a mega number or a powerball, etc.)
//  from a second range, such as 1-27.To win the grand prize, you have to guess all the picks correctly.
//  The chance of winning is the product of the probability of picking all the field numbers times the probability of picking the mega number.
//  For instance, the probability of winning the example described
//  here is the product of the probability of picking 5 out of 47
//  correctly times the probability of picking 1 out of 27 correctly.
//  Modify Listing 7.4 to calculate the probability of winning this kind of lottery.

long double probability(unsigned numbers, unsigned picks);
long double probabilityMega(unsigned picks);

int main() {
	double total, choices, totalMega;
	long double result, resultMega;
	std::cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:\n";
	while ((std::cin >> total >> choices) && choices <= total) {
		std::cout << "You have one chance in "
			<< probability(total, choices)
			<< " of winning.\n";
		std::cout << "Enter the total number of choices on the mega game!:\n";
		while ((std::cin >> totalMega) && totalMega < total && totalMega >= 1.0) {
			std::cout << "You have one chance in "
				<< probabilityMega(totalMega) << "\n"
				<< " of winning mega game.\n";
		}
		std::cout << "Next two numbers (q to quit) : ";
	}


	std::cout << "Chance to win: 1 in " << std::fixed << std::setprecision(0) << probability(total, choices) * probabilityMega(totalMega) << "\n";

	std::cout << "bye\n";
	return 0;
}

long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}
	return result;
}


long double probabilityMega(unsigned picks) {

	return 1.0 / picks;
}