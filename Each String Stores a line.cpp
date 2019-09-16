
#include <iostream>
#include <string>
using namespace std;

int main(){
    string letterOne, letterTwo, letterThree;
    
    cout << "Please enter 3 letters seperated by a space: ";
    cin >> letterOne >> letterTwo >> letterThree;
    
    cout << "Here are all the possible permutations of those letters: " << endl;
    cout << letterOne << letterTwo << letterThree << endl;
    cout << letterTwo << letterThree << letterOne << endl;
    cout << letterThree << letterOne << letterTwo << endl;
    cout << letterOne << letterThree << letterTwo << endl;
    cout << letterTwo << letterOne << letterThree << endl;
    cout << letterThree << letterTwo << letterOne << endl;
    return 0;
}
