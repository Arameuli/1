#pragma once
#include"Car.h"
class Bus
{
	friend int sxvaoba(Car p, Bus t);
private: int c; int d;
public:
	Bus() {

	}
	Bus(int c, int d) {
		this->c = c;
		this->d = d;
	}
	void print() {
		cout << c << "  " << d << endl;
	}
};

