#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.

    int n, k, len1, match_cnt = 0;
    string t, str_arr[100], match[100];

    cin >> n >> k >> t;

    for(int i = 0; i < n; i++)
        cin >> str_arr[i];
    
    len1 = t.length();

    for(int i = 0; i < n; i++)
    {
        int cnt = 0;

        for(int j = 0; j < len1; j++)
        {
            if(t[j] != str_arr[i][j])
                break;
            
            cnt++;
        }
        if (cnt == len1)
        {
            match[match_cnt] = str_arr[i];
            match_cnt++;
        }
    }

    sort(match, match + match_cnt);

    cout << match[k - 1] << endl;

    return 0;
}