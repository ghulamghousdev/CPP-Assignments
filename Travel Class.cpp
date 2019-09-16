// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include<iostream> 
using namespace std;

class travel {
private:
	int km, hr;
public:
	travel() {
		hr = 0;
		km = 0;
	}
	void input(int x, int y) {
		hr = x;
		km = y;
	}
	void show() {
		cout << "Hours are " << hr << "." << endl;
		cout << "Kilometers are " << km << endl;
	}
	void sum(travel a2) {
		travel temp;
		temp.hr = hr + a2.hr;
		temp.km = km + a2.km;
		cout << "Hr=" << temp.hr << endl;
		cout << "km=" << temp.km << endl;
	}

};
int main() {
	travel a1;

	travel a2;
	a1.input(3, 5);
	a1.show();
	a2 = a1;
	a2.show();
	a1.sum(a2);
	return 0;
}
