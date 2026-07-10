#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.

    int n, arr1[100], arr2[100];
    bool b = false;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr1[i];
    
    for(int i = 0; i < n; i++)
        cin >> arr2[i];

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    for(int i = 0; i < n; i++)
    {
        if(arr1[i] != arr2[i])
        {
            b = true;
            break;
        }
    }

    if(b)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}