#include <iostream>
#include "header.h"

//	Chapter10_Ex2

//	Here is a rather simple class definition:
//	class Person {
//	private:
//		static const LIMIT = 25;
//		string lname;
//		char fname[LIMIT];
//	public:
//		Person() {lname = ""; fname[0] = '\0';}
//		Person(const string & ln, const char * fn = "Heyyou");
//		void Show() const;		// firstname lastname format
//		void FormalShow() const;	// lastname, firstname format
//	};
//
//	(It uses both a string object and a character array so that
//  you can compare how the two forms are used.)
//  Write a program that completes the implementation by providing code
//  for the undefined methods.The program in which you use the class
//  should also use the three possible constructor calls 
//  (no arguments, one argument, and two arguments)
//  and the two display methods.
//  Here's an example that uses the constructors and methods:


int main() {
	Person jack = Person("Potroshitel'", "Jack");
	Person peter{ "Parker" };
	Person max;

	jack.Show();
	peter.Show();
	max.Show();

	jack.FormalShow();
	peter.FormalShow();
	max.FormalShow();

	return 0;
}