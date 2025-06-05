#include<iostream>

using namespace std;

int main(){
    int a, b, temp;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cout << "Enter numbers a: " << a << " b: " << b << endl;
    temp = a;
    a = b; 
    b = temp;
    cout << "swaped: a: " << a << " b: " << b;    
}