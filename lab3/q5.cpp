#include <iostream>
using namespace std;
int main()
{
    int n, s = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        s += i * (i - 1);
    }
    cout << s;
}