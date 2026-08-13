#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Please write your code here.
    string str;
    int len, decimal = 0;

    cin >> str;

    for(int i = 0; i < str.length(); i++) 
        decimal = decimal * 2 + (str[i] - '0');

    cout << decimal << endl;

    return 0;
}