#include <iostream>
#include <string>
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
    int m1, m2, d1, d2, diff;
    string dow[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    cin >> m1 >> d1 >> m2 >> d2;

    diff = days(m2, d2) - days(m1, d1);

    cout << dow[(diff % 7 + 7) % 7] << endl;

    return 0;
}