#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n, k, a, b, arr[101] = {}, max;

    cin >> n >> k;

    for(int i = 0; i < k; i++)
    {
        cin >> a >> b;

        for(a; a <= b; a++)
            arr[a]++;
    }

    max = arr[0];

    for(int i = 1; i <= n; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    cout << max << endl;

    return 0;
}