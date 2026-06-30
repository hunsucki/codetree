#include <iostream>

using namespace std;

int n;
int arr[100];

int func(int arr[], int n)
{
    if(n == 1)
        return arr[0];
    
    int temp = func(arr, n - 1);

    if (arr[n - 1] > temp)
        return arr[n - 1];
    else
        return temp;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    cout << func(arr, n) << endl;

    return 0;
}