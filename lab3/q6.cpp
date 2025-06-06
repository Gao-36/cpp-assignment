#include <iostream>
using namespace std;
int main()
{
    int a, b, gcd, lcm, t;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    t = a * b;
    while (b)
    {
        b ^= a ^= b ^= a %= b;
    }
    cout << "GCD: " << a << "\nLCM: " << t / a;
}