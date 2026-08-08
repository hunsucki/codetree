#include <iostream>
#include <algorithm>

using namespace std;

class Sequence
{
    public:
        int num, pos;
        Sequence(int num = 0, int pos = 0)
        {
            this->num = num;
            this->pos = pos;
        }
};

bool cmp(Sequence s1, Sequence s2)
{
    if (s1.num != s2.num)
        return s1.num < s2.num;
    
    return s1.pos < s2.pos;
}


int main() {
    // Please write your code here.

    int n, output[1001];
    Sequence seq[1000];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> seq[i].num;
        seq[i].pos = i + 1;
    }

    sort(seq, seq + n, cmp);

    for(int i = 0; i < n; i++)
    {
        output[seq[i].pos] = i + 1;
    }

    for(int i = 1; i <= n; i++)
    {
        cout << output[i] << " ";
    }



    return 0;
}