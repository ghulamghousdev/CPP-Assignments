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
