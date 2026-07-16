#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.

    int n, max = 0, arr[2000];

    cin >> n;

    for(int i = 0; i < 2 * n; i++)
        cin >> arr[i];

    sort(arr, arr + n * 2);

    for(int i = 0; i < n; i++)
    {
        int sum = arr[i] + arr[2 * n - 1 - i];

        if(sum > max)
            max = sum;
    }

    cout << max << endl;

    return 0;
}