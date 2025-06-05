#include <iostream>

using namespace std;

int main()
{
    int r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "Area of circle: " << 3.14 * (r * r) << endl
         << "Circumference of circle: " << 2 * 3.14 * r;
}