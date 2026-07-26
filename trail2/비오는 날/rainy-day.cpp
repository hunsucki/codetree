#include <iostream>

#define MAX_N 100

using namespace std;

int n;

class Weather
{
    public:
        string date, dow, wthr;

        Weather(string date = "", string dow = "", string wthr = "")
        {
            this->date = date;
            this->dow = dow;
            this->wthr = wthr;
        }
};

int find_rain(int n, Weather weather[])
{

    int idx = -1;

    for(int i = 0; i < n; i++)
    {
        if(weather[i].wthr == "Rain")
        {
            if(idx == -1 || weather[i].date < weather[idx].date)
                idx = i;
        }
    }

    return idx;
}

int main() {
    cin >> n;

    Weather weather[MAX_N];

    for (int i = 0; i < n; i++) {
        cin >> weather[i].date;
        cin >> weather[i].dow;
        cin >> weather[i].wthr;
    }

    // Please write your code here.

    int min_idx = find_rain(n, weather);

    cout << weather[min_idx].date << " " 
         << weather[min_idx].dow << " " 
         << weather[min_idx].wthr << endl;

    return 0;
}