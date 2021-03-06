//Interest on a credit card�s unpaid balance is calculated using the average daily balance. Suppose that netBalance is the 
//balance shown in the bill, payment is the payment made, d1 is the number of days in the billing cycle, and d2
//is the number of days payment is made before billing cycle.
//Write a program that accepts as input netBalance, payment, d1, d2, and interestrate per month. The program outputs the interest.
//Format your output to two decimal places

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    double netBalance,d1,payment,interest,d2,monthlyInterestRate,averageDailyBalance;

    cout << setprecision(2) << fixed << showpoint ;
    cout << "Enter net Balance: ";
    cin >> netBalance;
    cout << "Enter payment made: ";
    cin >> payment;
    cout << "Enter number of days in the billing cycle: ";
    cin >> d1;
    cout << "Enter number of days payment is made before billing cycle: ";
    cin >> d2;
    cout  << "Enter interest per month: ";
    cin >> monthlyInterestRate;

    averageDailyBalance = (netBalance * d1 - payment * d2)/d1;
    interest = averageDailyBalance * monthlyInterestRate;

    cout <<endl<< "Interest is " << interest << endl;
    return 0;
}
