#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    int flag = 0;
    cout << "Enter 4 numbers: ";
    for (int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 4; j++){
            if (arr[i] > arr[j]){
                flag = 1;
                break;
            }
        }
        if(flag) break;
    }
    if (flag == 0) cout << "Sorted"; else cout << "Not sorted";
}