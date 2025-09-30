#include <iostream>
#include "stonewt.h"

Stonewt::Stonewt(double lbs) {
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	state = true;
}

Stonewt::Stonewt(int stn, double lbs, bool stateO) {
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	state = stateO;
}

Stonewt::Stonewt() {
	stone = pounds = pds_left = 0;
	state = true;
}

Stonewt::~Stonewt() {
}

void Stonewt::set_Stone_mode() {
	state = true;
}

void Stonewt::set_Pounds_mode() {
	state = false;
}
//void Stonewt::show_stn() const {
//	std::cout << stone << " stone, " << pds_left << " pounds\n";
//}

//void Stonewt::show_lbs() const {
//	std::cout << pounds << " pounds\n";
//}

Stonewt Stonewt::operator+(const Stonewt& st) const {
	Stonewt sum;
	sum.pounds = pounds + st.pounds;
	sum.stone = sum.pounds / Lbs_per_stn;
	sum.pds_left = long(pounds + st.pounds) % Lbs_per_stn;
	return sum;
}

Stonewt Stonewt::operator-(const Stonewt& st) const {
	Stonewt diff;
	diff.pounds = pounds - st.pounds;
	diff.stone = diff.pounds / Lbs_per_stn;
	diff.pds_left = long(pounds - st.pounds) % Lbs_per_stn;
	return diff;
}

Stonewt Stonewt::operator*(double value) const {
	Stonewt result;
	result.stone = pounds * value / Lbs_per_stn;
	result.pds_left = long(pounds * value) % Lbs_per_stn;
	return result;
}

Stonewt operator*(double value, const Stonewt& st) {
	Stonewt result;
	result.stone = value * st.pounds / st.Lbs_per_stn;
	result.pds_left = long(value * st.pounds) % st.Lbs_per_stn;
	return result;
}

std::ostream& operator<<(std::ostream& os, const Stonewt& st) {
	if (st.state == true) {
		os << st.stone << " stone, " << st.pds_left << " pounds\n";
	}
	else if (st.state == false) {
		os << st.pounds << " pounds\n";
	}
	return os;
}