#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, original, remainder, sum = 0;
    
    cout << "Enter a number: ";
    cin >> number;
    
    original = number;
    
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, 3);
        original /= 10;
    }
    
    if (sum == number)
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;
    
    return 0;
}