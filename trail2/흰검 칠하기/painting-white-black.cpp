#include <iostream>

using namespace std;


int main() 
{
    // Please write your code here.

    int n, a, arr[200001] = {}, arr_w[200001] = {}, arr_b[200001] = {}, cnt = 0, pos = 100000, cnt_w = 0, cnt_b = 0, cnt_g = 0;
    char b;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        
        if(b == 'L')
        {
            while(a--)
            {

                if(arr[pos] != 'G')
                {     
                    arr_w[pos]++;

                    if (arr_w[pos] >= 2 && arr_b[pos] >= 2) 
                        arr[pos] = 'G';
                    else 
                        arr[pos] = 'W';
                }

                if (a > 0)
                    pos--;

            }
        }
        else
        {
            while(a--)
            {
                if(arr[pos] != 'G')
                {
                
                    arr_b[pos]++;

                    if (arr_w[pos] >= 2 && arr_b[pos] >= 2)
                        arr[pos] = 'G';
                    else
                        arr[pos] = 'B';
                }

                if (a > 0)
                    pos++;

            }
        }
    }

    for(int i = 0; i < 200001; i++)
    {
        if(arr[i] == 'W')
            cnt_w++;
        else if(arr[i] == 'B')
            cnt_b++;
        else if(arr[i] == 'G')
            cnt_g++;
    }

    cout << cnt_w << " " << cnt_b << " " << cnt_g << endl;

    return 0;
}