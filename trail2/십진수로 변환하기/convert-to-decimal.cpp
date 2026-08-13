#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Please write your code here.
    string str;
    int len, decimal = 0;

    cin >> str;

    len = str.length() - 1;

    for(int i = 0; i < str.length(); i++)
        decimal += (str[i] - '0') * pow(2, len--);

    cout << decimal << endl;

    return 0;
}