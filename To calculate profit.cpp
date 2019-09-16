//Linda is starting a new cosmetic and clothing business and would like to make a net profit of approximately 10% 
//after paying all the expenses, which include merchandise cost, store rent, employees’ salary, and electricity cost for the store. She would like to know how much
//the merchandise should be marked up so that after paying all the expenses at the end of the year shegets approximately 10% net profit on the merchandise cost. Note that after
//marking up the price of an item she would like to put the item on 15% sale. Write a program that prompts Linda to enter 
//the total cost of the merchandise, the salary of the employees (including her own salary), the yearly rent, and the estimated electricity cost. 
//The program then outputs how much the merchandise should be marked up so that Linda gets the desired profit

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
