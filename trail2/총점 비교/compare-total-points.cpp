#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student
{
    public:
        string name;
        int score1, score2, score3;

        Student(string name = "", int score1 = 0, int score2 = 0, int score3 = 0)
        {
            this->name = name;
            this->score1 = score1;
            this->score2 = score2;
            this->score3 = score3;
        }
};

bool cmp(Student a, Student b)
{
    return a.score1 + a.score2 + a.score3 < b.score1 + b.score2 + b.score3;
}

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    Student students[10];

    for(int i = 0; i < n; i++)
    {
        cin >> students[i].name;
        cin >> students[i].score1;
        cin >> students[i].score2;
        cin >> students[i].score3;   
    }

    sort(students, students + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << students[i].name << " ";
        cout << students[i].score1 << " ";
        cout << students[i].score2 << " ";
        cout << students[i].score3 << endl;
    }

    return 0;
}