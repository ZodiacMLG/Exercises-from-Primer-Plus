#pragma once

class complex {
private:
	double real;
	double imaginary;
public:
	complex();
	complex(double creal, double cimaginary);
	~complex();
	//complex operator+(complex& c);
	complex operator-();
	friend complex operator*(double value, complex& c2);
	friend complex operator*(complex& c1, complex& c2);
	friend complex operator-(complex& c1, complex& c2);
	friend complex operator+(complex& c1, complex& c2);
	friend std::ostream& operator<<(std::ostream & os,const complex & cx);
	friend std::istream& operator>>(std::istream & is, complex & cx);
};