#include <iostream>
#include <string>

using namespace std;

string N;

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

int decimal(string s) 
{

    int res = 0;

    for(int i = 0; i < s.length(); i++) 
        res = res * 2 + (s[i] - '0');
    
    return res;
}

int main() {
    cin >> N;

    // Please write your code here.

    int result[16], cnt;

    convert(decimal(N) * 17, 2, result, cnt);

    for(int i = cnt - 1; i >= 0; i--)
        cout << result[i];

    cout << endl;

    return 0;
}