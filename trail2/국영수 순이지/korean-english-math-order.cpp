#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;

class Score
{
    public:
        string name;
        int korean, english, math;

        Score(string name = "", int korean = 0, int english = 0, int math = 0)
        {
            this->name = name;
            this->korean = korean;
            this->english = english;
            this->math = math; 
        }    
};

bool cmp(const Score &a, const Score &b)
{
    if(a.korean != b.korean)
        return a.korean > b.korean;
    if(a.english != b.english)
        return a.english > b.english;

    return a.math > b.math;
}

int main() 
{
    cin >> n;

    Score score[10];

    for (int i = 0; i < n; i++) {
        cin >> score[i].name;
        cin >> score[i].korean;
        cin >> score[i].english;
        cin >> score[i].math;
    }

    // Please write your code here.

    sort(score, score + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << score[i].name << " ";
        cout << score[i].korean << " ";
        cout << score[i].english << " ";
        cout << score[i].math << endl;
    }

    return 0;
}