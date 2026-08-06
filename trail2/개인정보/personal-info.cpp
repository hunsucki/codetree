#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Data
{
    public:
        string name;
        int height;
        double weight;
        
        Data(string name = "", int height = 0, double weight = 0.0)
        {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

};

bool cmp_n(Data d1, Data d2)
{
    return d1.name < d2.name;
}

bool cmp_h(Data d1, Data d2)
{
    return d1.height > d2.height;
}

int main() {
    // Please write your code here.

    cout << fixed;
    cout.precision(1);

    Data data[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> data[i].name;
        cin >> data[i].height;
        cin >> data[i].weight;
    }

    sort(data, data + 5, cmp_n);



    cout << "name" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << data[i].name << " ";
        cout << data[i].height << " ";
        cout << data[i].weight << endl;
    }

    cout << endl << "height" << endl;

    sort(data, data + 5, cmp_h);

    for(int i = 0; i < 5; i++)
    {
        cout << data[i].name << " ";
        cout << data[i].height << " ";
        cout << data[i].weight << endl;
    }

    return 0;
}