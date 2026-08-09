#include <iostream>
using namespace std;

int days(int m, int d)
{
    int temp = 0, num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(int i = 1; i < m; i++)
    {
        temp += num_of_days[i];
    }

    return temp + d;
}

int main() {
    // Please write your code here.

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    cout << (days(c, d) - days(a, b) + 1) << endl;
    return 0;
}