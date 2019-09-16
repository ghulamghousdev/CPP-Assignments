//Program to calculate total tickets sale

#include <fstream>

#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
	//To take input from file
    ifstream a;
    
    //variables for tickets price
	int priceOfBoxTicket, priceOfSidelineTicket, priceOfPremiumTicket, priceOfGenAdmissionTicket;

	//variables to keep record of different tickets sold
    int numOfBoxTicketSold, numOfSidelineTicketSold, numOfPremiumTicketSold, numOfGenAdmissionTicketSold;

	//variables to keep record of total sale amount of different tickets
    int totalSaleAmountOfBoxTicket, totalSaleAmountOfSidelineTicket, totalSaleAmountOfPremiumTicket,
            totalSaleAmountOfGenAdmissionTicket;
            
	//Variables to store total number of tickets and total sale amount
    long totalNumOfTicketsSold, totalSaleAmount;
    
    //Setting precision
    cout << fixed << showpoint << setprecision(2);

    //opening input file
	a.open("TicketsSoldFile.txt");

	//taking input from file
    a >> priceOfBoxTicket >> numOfBoxTicketSold
      >> priceOfSidelineTicket >> numOfSidelineTicketSold
      >> priceOfPremiumTicket >> numOfPremiumTicketSold
      >> priceOfGenAdmissionTicket >> numOfGenAdmissionTicketSold;

	//Calculating total sale amount of Box Tickets
    totalSaleAmountOfBoxTicket = priceOfBoxTicket * numOfBoxTicketSold;
    
	//Calculating total sale amount of Side line Tickets
    totalSaleAmountOfSidelineTicket = priceOfSidelineTicket * numOfSidelineTicketSold;
    
    //Calculating total sale amount of Premium Tickets
    totalSaleAmountOfPremiumTicket = priceOfPremiumTicket * numOfPremiumTicketSold;
    
	//Calculating total sale amount of General admission Tickets Tickets
    totalSaleAmountOfGenAdmissionTicket = priceOfGenAdmissionTicket * numOfGenAdmissionTicketSold;

	//Calculating total number of tickets sold
    totalNumOfTicketsSold = numOfBoxTicketSold + numOfSidelineTicketSold + numOfPremiumTicketSold + numOfGenAdmissionTicketSold;

	//Calculaing total sale amount
    totalSaleAmount = totalSaleAmountOfBoxTicket + totalSaleAmountOfSidelineTicket + totalSaleAmountOfPremiumTicket + totalSaleAmountOfGenAdmissionTicket;

	//Printing total tickets sold
    cout << "Total number of Tickets sold is " << totalNumOfTicketsSold <<endl;
    
    //Printing Total sale amount
    cout << "Total Sale Amount: " << totalSaleAmount << endl;

	//closing the input file
    a.close();
    return 0;
}
