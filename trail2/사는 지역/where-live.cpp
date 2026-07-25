#include <iostream>
#include <string>

#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], street_address[MAX_N], region[MAX_N];

class ddata
{
    public:
        string name, address, region;

        ddata(string name = "", string address = "", string region = "")
        {
            this->name = name;
            this->address = address;
            this->region = region;
        }
};

int last(int n, ddata data_arr[])
{
    int last_vel = 0;

    for(int i = 1; i < n; i++)
    {
        if(data_arr[i].name > data_arr[last_vel].name)
            last_vel = i;
    }
    return last_vel;
}

int main() {
    cin >> n;

    ddata data_arr[MAX_N];

    for (int i = 0; i < n; i++) {
        cin >> data_arr[i].name;
        cin >> data_arr[i].address;
        cin >> data_arr[i].region;
    }

    // Please write your code here.

    int last_n = last(n, data_arr);

    cout << "name " << data_arr[last_n].name << endl 
         << "addr " <<data_arr[last_n].address << endl 
         << "city " <<data_arr[last_n].region << endl;

    return 0;
}