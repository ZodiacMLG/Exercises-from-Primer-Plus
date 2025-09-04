#pragma once
namespace SALES {
	class Sales {
	private:
		enum numberConst { QUARTERS = 4 };
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales();
		Sales(double ar[], int n);
		void showSales();
	};
}