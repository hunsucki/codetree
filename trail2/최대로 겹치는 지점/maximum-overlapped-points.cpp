#include <iostream>

using namespace std;


int main() 
{
    // Please write your code here.

    int n, a, b, arr[101] = {}, max = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;

        for(a; a <= b; a++)
            arr[a]++;
    }

    for(int i = 0; i <= 100; i++)
    {
        if(arr[i] >= max)
            max = arr[i];
    }

    cout << max << endl;

    return 0;
}