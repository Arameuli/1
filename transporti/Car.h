#pragma once
#include<iostream>
class Bus;
using namespace std;
class Car
{
	friend int sxvaoba(Car p, Bus t);
private: int a; int b;
public: 
	Car() {

	}
	Car(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void print() {
		cout << a << "  " << b << endl;
	}
};

