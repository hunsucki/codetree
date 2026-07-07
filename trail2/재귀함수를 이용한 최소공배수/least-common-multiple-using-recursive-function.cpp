#include <iostream>

using namespace std;

int n;
int arr[10];

int func1(int n1, int n2)
{
    if(n2 == 0)
        return n1;
    else
        return func1(n2, n1 % n2);
}

int func2(int n1, int n2)
{
    return (n1 / func1(n1, n2)) * n2;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    int a = arr[0];

    for(int i = 1; i < n; i++)
        a = func2(a, arr[i]);
    
    cout << a << endl;

    return 0;
}