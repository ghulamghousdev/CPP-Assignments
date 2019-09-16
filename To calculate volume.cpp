#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double mass,density,volume;

    cout << setprecision(2) << showpoint << fixed;
    cout << "Enter mass: " ;
    cin >> mass;
    cout << "Enter density: ";
    cin >> density;

    volume = mass / density;

    cout << "Volume is " << volume <<endl;

    return 0;
}
