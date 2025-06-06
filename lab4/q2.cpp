#include <iostream>

using namespace std;

int main()
{
    int arr1l = 3, arr2l = 4;
    int arr3l = arr1l + arr2l;
    int arr[arr1l] = {4, 5, 3}, arr2[arr2l] = {7, 1, 2, 4}, arr3[arr3l];
    for (int i = 0; i < arr3l; i++)
    {
        if (i < 3)
        {
            arr3[i] = arr[i];
        }
        else
        {
            arr3[i] = arr2[i - 3];
        }
    }
    for (int i = 0; i < arr3l; i++)
    {
        cout << arr3[i] << "\t";
    }
}