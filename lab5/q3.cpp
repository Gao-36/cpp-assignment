#include <iostream>
using namespace std;

class Complex{
    double real, imag;
    public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator-(const Complex &other){
        return Complex(real - other.real, imag - other.imag);
    }

    void display(){
        cout << real << (imag >= 0 ? "+" : "") << imag << "i" << endl;
    }
};
int main(){
    Complex c1(5, 3), c2(2, 1);
    Complex result = c1 - c2;

    cout << "Result: ";
    result.display();

    return 0;
}