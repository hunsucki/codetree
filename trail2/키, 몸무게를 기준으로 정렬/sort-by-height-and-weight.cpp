#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;

class Data
{
    public:
        string name;
        int height, weight;
        
        Data(string name = "", int height = 0, int weight = 0.0)
        {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp(Data d1, Data d2)
{
    if (d1.height != d2.height)
        return d1.height < d2.height;

    return d1.weight > d2.weight;
}

int main() {
    cin >> n;

    Data data[10];

    for (int i = 0; i < n; i++) {
        cin >> data[i].name; 
        cin >> data[i].height; 
        cin >> data[i].weight;
    }

    // Please write your code here.

    sort(data, data + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << data[i].name << " ";
        cout << data[i].height << " ";
        cout << data[i].weight << endl;
    }

    return 0;
}