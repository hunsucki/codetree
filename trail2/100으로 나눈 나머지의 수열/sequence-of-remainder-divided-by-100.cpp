#include <iostream>
using namespace std;

int series(int n)
{
    if(n == 1)
        return 2;
    else if(n == 2)
        return 4;
    else
        return (series(n - 2) * series(n - 1)) % 100;
}

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    cout << series(n) << endl;
    return 0;
}