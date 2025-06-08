#include <iostream>
using namespace std;

inline int cube(int x) { return x * x * x; }

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "Cube of " << num << " is " << cube(num) << endl;
    return 0;
}