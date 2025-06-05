#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int sum, avg, lg, sm;
    cout << "Enter 3 numbers: " << std::endl;
    cin >> a >> b >> c;
    sum = a + b + c;
    avg = (a + b + c) / 3;
    lg = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    sm = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    cout << "sum: " << sum << endl
         << "average: " << avg << endl
         << "largest: " << lg << endl
         << "smallest: " << sm << endl;
}