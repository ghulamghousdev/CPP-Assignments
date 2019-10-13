// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include<iostream> 
using namespace std;

class time {
private:
	int minute, hour;
public:
	time() {
		hour = 0;
		minute = 0;
	}
	void input(int hr, int min) {
		hours = hr;
		minutes = min;
	}
	void show() {
		cout << "Hours are " << hours << "." << endl;
		cout << "minutes are " << minutes << endl;
	}
	void sum(time a2) {
		time temp;
		temp.hours = hours + a2.hours;
		temp.minutes = minutes + a2.minutes;
		cout << "Hr=" << temp.hours << endl;
		cout << "km=" << temp.minutes << endl;
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
