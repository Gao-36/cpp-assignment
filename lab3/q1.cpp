#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers: " << endl;
    cin >> a >> b >> c;
    cout << a + b + c - min(min(a, b), c) - max(max(a, b), c);
}