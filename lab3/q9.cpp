#include <iostream>
using namespace std;
int main()
{
    int n, r = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n)
        r = r * 10 + n % 10, n /= 10;
    cout << r;
}