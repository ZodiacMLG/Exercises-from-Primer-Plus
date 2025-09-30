#pragma once

class Stonewt {
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
	bool state;		// true = stone, false = pounds
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs, bool stateO = true);
	Stonewt();
	~Stonewt();
	void set_Stone_mode();
	void set_Pounds_mode();
	//void show_lbs() const;
	//void show_stn() const;
	Stonewt operator+(const Stonewt& st)const;
	Stonewt operator-(const Stonewt& st)const;
	Stonewt operator*(const double value)const;
	friend Stonewt operator*(double value, const Stonewt& st);
	friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
};