#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int N;

class coor
{
    public:
        int x, y, num;

        coor(int x = 0, int y = 0, int num = 0)
        {
            this->x = x;
            this->y = y;
            this->num = num;
        }
};

bool cmp(coor c1, coor c2)
{
    int d1 = abs(0 - c1.x) + abs(0 - c1.y);
    int d2 = abs(0 - c2.x) + abs(0 - c2.y);
    
    if(d1 != d2)
        return d1 < d2;
    
    return c1.num < c2.num;
}

int main() {
    cin >> N;

    coor coordinate[1000];

    for (int i = 0; i < N; i++) 
    {
        cin >> coordinate[i].x; 
        cin >> coordinate[i].y;
        coordinate[i].num = i + 1;
    }

    // Please write your code here.

    sort(coordinate, coordinate + N, cmp);

    for(int i = 0; i < N; i++)
    {
        cout << coordinate[i].num << endl;
    }

    return 0;
}
