#include <iostream>

using namespace std;

int N;

int series(int n)
{
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;

    return((series(n / 3) + series(n - 1)));
}

int main() {
    cin >> N;

    // Please write your code here.

    cout << series(N) << endl;

    return 0;
}