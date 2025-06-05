#include <iostream>
using namespace std;

int main() {
    float principal, time, rate, interest, amount;
    
    cout << "Enter principal amount: ";
    cin >> principal;
    
    cout << "Enter time (in years): ";
    cin >> time;
    
    cout << "Enter rate of interest: ";
    cin >> rate;
    
    interest = (principal * time * rate) / 100;
    amount = principal + interest;
    
    cout << "Simple Interest: " << interest << endl;
    cout << "Total Amount: " << amount << endl;
    
    return 0;
}