#include <iostream>
#include <string>

using namespace std;

int days(int m, int d)
{
    int temp = 0, num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(int i = 1; i < m; i++)
    {
        temp += num_of_days[i];
    }

    return temp + d;

}

int cnt(int d, string s)
{
    int temp  = 0, index = -1;
    string dow[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    temp = (d + 1) / 7;

    for (int i = 0; i < 7; i++) {
        if (dow[i] == s) {
            index = i;
            break;
        }
    }

    if(index < (d + 1) % 7)
        temp++;
    
    return temp;
}

int main() {

    int m1, m2, d1, d2, diff;
    string A;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;


    // Please write your code here.

    diff = days(m2, d2) - days(m1, d1);

    cout << cnt(diff, A) << endl;

    return 0;
}