/*Write a program that prompts the user to enter the weight of a person in
kilograms and outputs the equivalent weight in pounds. Output both the
weights rounded to two decimal places. (Note that 1 kilogram ¼ 2.2
pounds.) Format your output with two decimal places.*/

#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	double weight;
	double pound=2.2;
	cout<<"weight of person"<<endl;
	cin>>weight;
	weight=weight*pound;
	cout<<"weight :"<<fixed << showpoint << setprecision(2)<<weight;
	return 0;

}
