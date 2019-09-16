// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include<iostream> 
using namespace std;

class time {
private:
	int min, hr;
public:
	time() {
		hr = 0;
		min = 0;
	}
	void input(int x, int y) {
		hr = x;
		min = y;
	}
	void show() {
		cout << "Hours are " << hr << "." << endl;
		cout << "minutes are " << min << endl;
	}
	void sum(time a2) {
		time temp;
		temp.hr = hr + a2.hr;
		temp.min = min + a2.min;
		cout << "Hr=" << temp.hr << endl;
		cout << "km=" << temp.min << endl;
	}

};
int main() {
	time a1;

	time a2;
	a1.input(3, 5);
	a1.show();
	a2 = a1;
	a2.show();
	a1.sum(a2);
	return 0;
}
