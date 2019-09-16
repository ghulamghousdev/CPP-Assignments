/*During each summer, John and Jessica grow vegetables in their backyard
and buy seeds and fertilizer from a local nursery. The nursery carries
different types of vegetable fertilizers in various bag sizes. When buying a
particular fertilizer, they want to know the price of the fertilizer per pound
and the cost of fertilizing per square foot. The following program prompts
178 | Chapter 3: Input/Output
the user to enter the size of the fertilizer bag, in pounds, the cost of the bag,
and the area, in square feet, that can be covered by the bag.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double cost;
double area;
double bagSize;
cout << fixed << showpoint << setprecision(2);
cout << "Enter the amount of fertilizer, in pounds, "<< "in one bag: ";
cin >> bagSize;
cout << endl;
cout << "Enter the cost of the " << bagSize<< " pound fertilizer bag: ";
cin >> cost;
cout << endl;
cout << "Enter the area, in square feet, that can be "<< "fertilized by one bag: ";
cin >> area;
cout << endl;
cout << "The cost of the fertilizer per pound is: $"<< cost / bagSize << endl;
cout << "The cost of fertilizing per square foot is: $"<< cost / area << endl;
return 0;
}
