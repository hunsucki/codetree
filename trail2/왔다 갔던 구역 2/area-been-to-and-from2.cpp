#include <iostream>

using namespace std;


int main() 
{
    // Please write your code here.

    int n, a, arr[20001] = {}, cnt = 0, pos = 10000;
    char b;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        
        if(b == 'L')
        {
            while(a--)
            {
                pos--;
                arr[pos]++;
            }
        }
        else
        {
            while(a--)
            {
                arr[pos]++;
                pos++;
            }
        }
    }

    for(int i = 0; i < 20001; i++)
    {
        if(arr[i] > 1)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}