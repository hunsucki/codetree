#include <iostream>

using namespace std;

int N, B;

void convert(int n, int b, int result[], int& cnt)
{
    cnt = 0;

    while (true)
    {
        if(n < b)
        {
            result[cnt++] = n;
            break;
        }

        result[cnt++] = n % b;
        n /= b;

    }
}

int main() {
    cin >> N >> B;
    // Please write your code here.

    int result[5], cnt;

    convert(N, B, result, cnt);

    for(int i = cnt - 1; i >= 0; i--)
        cout << result[i];

    cout << endl;

    return 0;
}