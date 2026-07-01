#include <iostream>

using namespace std;

int dsum(int n) 
{
    if (n == 0)
        return 0;
    
    return (n % 10) + dsum(n / 10);
}

int a, b, c;

int main() {
    cin >> a >> b >> c;

    // Please write your code here.

    int mul = 0;

    mul = a * b * c;

    cout << dsum(mul) << endl;

    return 0;
}