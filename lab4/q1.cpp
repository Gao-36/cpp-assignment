#include <iostream>

using namespace std;

int main()
{
    int arr[30];
    for (int i = 1; i <= 30; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] = i;
        }
        else
        {
            arr[i] = -i;
        }
    }
    for (int i = 1; i <= 30; i++)
    {
        cout << arr[i] << "\t";
    }
}