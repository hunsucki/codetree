#include <iostream>

using namespace std;

int fact(int n)
{
    if(n == 0)
        return 1;
    
    return n * fact(n - 1);
}

int N;

int main() {
    cin >> N;

    // Please write your code here.


    cout << fact(N) << endl;
    return 0;
}