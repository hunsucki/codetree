#include <iostream>
#include <string>

using namespace std;

int a, b;
string n;

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

int decimal(string s, int n) 
{

    int res = 0;

    for(int i = 0; i < s.length(); i++) 
        res = res * n + (s[i] - '0');
    
    return res;
}

int main() {
    cin >> a >> b;
    cin >> n;

    // Please write your code here.

    int result[32], cnt;

    convert(decimal(n, a), b, result, cnt);

    for(int i = cnt - 1; i >= 0; i--)
        cout << result[i];

    cout << endl;

    return 0;
}