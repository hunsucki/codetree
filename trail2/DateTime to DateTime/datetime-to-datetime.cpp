#include <iostream>
using namespace std;

int get_min(int d, int h, int m)
{
    int base = 11 * 1440 + 11 * 60 + 11;

    return (d * 1440 + h * 60 + m) - base;
}

int main() {
    // Please write your code here.

    int a, b, c;

    cin >> a >> b >> c;

    if(get_min(a, b, c) < 0)
        cout << -1 << endl;
    else
        cout << get_min(a, b, c) << endl;

    return 0;
}