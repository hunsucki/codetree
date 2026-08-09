#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int diff = (a * 1440) + (b * 60) + c - 16511;

    cout << (diff < 0 ? -1 : diff) << endl;

    return 0;
}