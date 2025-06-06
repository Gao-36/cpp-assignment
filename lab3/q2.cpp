#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << (char)(isupper(c) ? tolower(c) : toupper(c));
}