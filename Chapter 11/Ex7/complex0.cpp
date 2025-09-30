#include <iostream>
#include "complex0.h"

complex::complex() {
	imaginary = real = 0;
}

complex::complex(double creal, double cimaginary) {
	real = creal;
	imaginary = cimaginary;
}

complex::~complex(){}

//complex complex::operator+(complex& c) {
//	complex temp;
//	temp.real = real + c.real;
//	temp.imaginary = imaginary + c.imaginary;
//	return temp;
//}

complex complex::operator-() {
	complex temp;
	temp.real = real;
	temp.imaginary = imaginary * -1;
	return temp;
}

complex operator*(double value, complex& c2) {
	complex temp;
	temp.real = value * c2.real;
	temp.imaginary = value * c2.imaginary;
	return temp;
}

complex operator*(complex& c1, complex& c2) {
	complex temp;
	temp.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
	temp.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
	return temp;
}

complex operator-(complex& c1, complex& c2) {
	complex temp;
	temp.real = c1.real - c2.real;
	temp.imaginary = c1.imaginary - c2.imaginary;
	return temp;
}

complex operator+(complex& c1, complex& c2) {
	complex temp;
	temp.real = c1.real + c2.real;
	temp.imaginary = c1.imaginary + c2.imaginary;
	return temp;
}

std::ostream& operator<<(std::ostream & os,const complex& cx) {
	os << "(" << cx.real << "," << cx.imaginary << "i)";
	return os;
}

std::istream& operator>>(std::istream& is, complex& cx) {
	std::cout << "real: ";
	if (is >> cx.real) {
		std::cout << "imaginary: ";
		is >> cx.imaginary;
	}
	return is;
}