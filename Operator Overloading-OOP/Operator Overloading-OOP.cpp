// OperatorsOverloaded.cpp
//Ghous
//Header files
//#include "pch.h"
#include <iostream>

using namespace std;

//class declaration
class Fraction
{

//protection levels
private:
	//Declaring variables
	int num;
	int denom;
public:
	//constructor
	Fraction();
	
	//Function declaration for addition using operator overloading
	Fraction operator+(Fraction);
	
	//Function declaration for subtraction using operator overloading
	Fraction operator-(Fraction);
	
	//Function declaration for multiplication using operator overloading
	Fraction operator*(Fraction);
	
	//Function declaration for division using operator overloading
	Fraction operator/(Fraction);
	
	//Function declaration for output using operator overloading and friend function
	friend ostream& operator<<(ostream& out, Fraction& obj);
	
	//Function declaration for input using operator overloading and friend function
	friend istream& operator>>(istream& in, Fraction& obj);
	
	//Function declaration to check equality of two fractions using operator overloading and friend function
	friend bool operator==(Fraction& f1, Fraction& f2);
	
	//Function declaration to check greater fraction using operator overloading and friend function
	friend bool operator>(Fraction& f1, Fraction& f2);
	
	//Function declaration to check lesser fraction using operator overloading and friend function
	friend bool operator<(Fraction& f1, Fraction& f2);
	
	//Function declaration to check greater or equal  fraction using operator overloading and friend function
	friend bool operator>=(Fraction& f1, Fraction& f2);
	
	//Function declaration to check lesser or equal fraction using operator overloading and friend function
	friend bool operator<=(Fraction& f1, Fraction& f2);
	
	//Function declaration to check unequality fraction using operator overloading and friend function
	friend bool operator!=(Fraction& f1, Fraction& f2);
};

Fraction::Fraction()
{
}

//Function defination for addition using operator overloading
Fraction Fraction::operator+(Fraction obj) {
	Fraction f;
	f.num = ( num * obj.denom ) + ( obj.num * denom );
	f.denom = denom * obj.denom;
	return f;
}

//Function defination for subtraction using operator overloading
Fraction Fraction::operator-(Fraction obj) {
	Fraction f;
	f.num = (num * obj.denom) - (obj.num * denom);
	f.denom = denom * obj.denom;
	return f;
}

//Function defination for multiplication using operator overloading
Fraction Fraction::operator*(Fraction obj) {
	Fraction f;
	f.num = num * obj.num;
	f.denom = denom * obj.denom;
	return f;
}

//Function defination for division using operator overloading
Fraction Fraction::operator/(Fraction obj) {
	Fraction f;
	f.num = num / obj.denom;
	f.denom = denom / obj.num;
	return f;
}

//Function defination for output using operator overloading and friend function
ostream& operator<<(ostream& out, Fraction& obj) {
	out << obj.num << "/" << obj.denom;
	return out;
}

//Function defination to check equality of two fractions using operator overloading and friend function
istream& operator>>(istream& in, Fraction& obj) {
	in >> obj.num >> obj.denom;
	return in;
}

//Function defination to check equality of two fractions using operator overloading and friend function
bool operator== (Fraction& f1, Fraction& f2) {
	return ( ( f1.num * f2.denom ) == ( f1.denom * f2.num ) );
}

//Function defination to check greater fraction using operator overloading and friend function
bool operator> (Fraction& f1, Fraction& f2) {
	return ( ( static_cast<float>(f1.num) / static_cast<float>(f1.denom) ) > ( static_cast<float>(f2.num) / static_cast<float>(f2.denom) ) );
}

//Function defination to check lesser fraction using operator overloading and friend function
bool operator< (Fraction& f1, Fraction& f2) {
	return ((static_cast<float>(f1.num) / static_cast<float>(f1.denom)) < (static_cast<float>(f2.num) / static_cast<float>(f2.denom)));
}

//Function defination to check greater or equal fraction using operator overloading and friend function
bool operator>= (Fraction& f1, Fraction& f2) {
	return ((static_cast<float>(f1.num) / static_cast<float>(f1.denom)) >= (static_cast<float>(f2.num) / static_cast<float>(f2.denom)));
}

//Function defination to check lesser or equal fraction using operator overloading and friend function
bool operator<= (Fraction& f1, Fraction& f2) {
	return ((static_cast<float>(f1.num) / static_cast<float>(f1.denom)) <= (static_cast<float>(f2.num) / static_cast<float>(f2.denom)));
}

//Function defination to check unequAlity of two  fractions using operator overloading and friend function
bool operator!= (Fraction& f1, Fraction& f2) {
	return ((static_cast<float>(f1.num) / static_cast<float>(f1.denom)) != (static_cast<float>(f2.num) / static_cast<float>(f2.denom)));
}

int main()
{   
	//Declaring objects for fraction
	Fraction fraction1 , fraction2;
	
	//Declaring an object to store the result
	Fraction fraction3;
	
	//Taking input from user for numerator & denominator of object1
	cout<<"Enter values of numerator and denominator for fraction1"<<endl;
	cin>>fraction1;
	
	//Taking input from user for numerator & denominator of object2
	cout<<"Enter values of numerator and denominator for fraction2"<<endl;
	cin>>fraction2;
	
	//Adding two fractions and storing them in the fraction3
	cout<<"Sum of two fractions is = ";
	fraction3=fraction1+fraction2;
	cout<<fraction3;
	
	//Subtracting two fractions and storing them in the fraction3
	cout<<"\n"<<"Difference of two fractions is = ";
	fraction3=fraction1-fraction2;
	cout<<fraction3;
	
	//Multiplying two fractions and storing them in the fraction3
	cout<<"\n"<<"Product  of two fractions is = ";
	fraction3=fraction1*fraction2;
	cout<<fraction3;
	
	//Dividing both fractions and storing them in the fraction3
	cout<<"\n"<<"Division of two fractions is = ";
	fraction3=fraction1/fraction2;
	cout<<fraction3;
	
	//IF condition to check whether fraction 1 is greater then fraction 2
	if(fraction1 > fraction2){
		cout<<"\nfraction1  is greater then fraction2"<<endl;
	}
	else{
		cout<<"\nfraction1 is less then fraction2"<<endl;
	}
	
	//IF condition to check whether fraction 1 is less then fraction 2
	if(fraction1<fraction2){
		cout<<"fraction1 is less then fraction2"<<endl;
	}
	else{
		cout<<"fraction1  is greater then fraction2"<<endl;
	}
	
	//IF condition to check  fraction 1 is greater then  or equal to fraction 2
	if(fraction1 >= fraction2){
		cout<<"fraction1  is greater then or equal to fraction2"<<endl;
	}
	else{
		cout<<"fraction1 is less then fraction2"<<endl;
	}
	
	//IF condition to check  fraction 1 is less then or equal to fraction 2
	if(fraction1<=fraction2){
		cout<<"fraction1 is less then or equal to fraction2"<<endl;
	}
	else{
		cout<<"fraction1  is greater then fraction2"<<endl;
	}

	//IF condition to check  fraction 1 is equal to fraction 2	
	if(fraction1==fraction2){
		cout<<"Fraction1 is equal to fraction 2"<<endl;
	}
	else{
		cout<<"fraction1 is not equal to fraction2"<<endl;
	}
	
	//IF condition to check whether fraction 1 is not equal to fraction 2
	if(fraction1!=fraction2){
		cout<<"fraction1 is not equal to fraction2"<<endl;
	}
	else{
		cout<<"Fraction1 is equal to fraction 2"<<endl;		
	}
	
	return 0;
}

