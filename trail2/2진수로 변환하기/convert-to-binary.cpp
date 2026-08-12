#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n, d[32], cnt = 0;

    cin >> n;

    while (true)
    {
        if(n < 2)
        {
            d[cnt++] = n;
            break;
        }

        d[cnt++] = n % 2;
        n /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--)
        cout << d[i];
    return 0;
}