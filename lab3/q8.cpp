#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n)
        s += n % 10, n /= 10;
    cout << s;
}