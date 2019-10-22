//consloe calculator in c++

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	//declaring variables
	int n; //Variable for case
	
	int a,b; //variables to store two numbers
	
	float r; //Variable to store result
	
	cout<<" 1: [+] 
		2: [-] 
		3: [*] 
		4: [/] 
		5: [%] 
		6: [pow] 
		7: [sqrt]"<<endl;
	
	cout<< "Enter a Number you want to perform operation \n  ";
	
	cin>> n ;
	// input failure case handler
	while (cin.fail()) {
		cin.clear();
		cin.ignore(10000, '\n');
		cout << " Invalid Option\n Enter a valid operation:";
		cin>>n;
		}
	switch(n)
	{
		//Taking input from user and adding two numbers
		case 1:
		
		cout<< "Enter a Number:  ";
		
		cin>> a;
		
		cout<< "Enter a Number:  ";
		
		cin>> b ;
		
		r = a+b;
		
		cout<< r;
		
		break;
	
	 	//Taking two numbers from user and subtracting two numbers
		case 2:
			
		cout<< "Enter a Number:  ";
		
		cin>> a ;
		
		cout<< "Enter a Number:  ";
		
		cin>> b ;
		
		r = a-b;
		
		cout<< r;
		
		break;
	
	
		//Taking two numbers from user and multiplying two numbers
		case 3:
		
		cout<< "Enter The First  Number:  ";
		
		cin>> a ;
		
		cout<< "Enter The Second Number:  ";
		
		cin>> b ;
		
		r = a*b;
		
		cout<< r;
		
		break;
	
		//Division
		case 4:
		
		cout<< "Enter The Numerator:  ";
		
		cin>> a ;
		
		cout<< "Enter The Demoinator:  ";
		
		cin>> b ;
		
		r = a/b;
		
		cout<<"Quotient is"<< r;
		
		break;
	
		//Modulus
		
		case 5:
		
		cout<< "Enter a Number:  ";
		
		cin>> a ;
		
		cout<< "Enter a Number:  ";
		
		cin>> b ;
		
		r = a % b;
		
		cout<< r;
		
		break;
	
		//power
		
		case 6:
		
		cout<< "Enter a number:  ";
		
		cin>> a ;
		
		cout<<"enter the power: ";
		
		cin>> b;
		
		r =pow(a,b);
		
		cout<<"power:"<<r;
	    
		break;
	
		//Square root
		
		case 7:
		
		cout<< "Enter a Number:  ";
		
		cin>> a ;
		
		r = sqrt(a);
		
		cout<< r;
		
		break;
		
		default:
		
		cout<< "Enter a Invalid Number";
	
	}
	
	
	return 0;
}
