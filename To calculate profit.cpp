#include<iostream>
using namespace std;
int main ()
{
	double runningCost;
	double merchCost;
	double merchPrice;

	cout<<"enter running cost:"<<endl;
	cin>>runningCost;
	cout<<"enter merchendise cost :"<<endl;		
	cin>>merchCost;
	merchPrice=merchCost;
	

	//increase merch cost by 15% to equalize the 15% discount in price of merch
	merchPrice +=(merchCost * 0.15);
	
	//increase merch cost by 10% to equalize the 10%  b profit on merch
	merchPrice +=(merchCost * 0.10);
	
	cout<<" to get a 10% profit on merch , Linda should increase the merch price by : "<< (merchPrice-merchCost);
	return 0;
	 
	
}
