#include <iostream>
#include <algorithm>

using namespace std;

class Student
{
    public:
        int height, weight, number;

        Student(int height = 0, int weight = 0, int number = 0)
        {
            this->height = height;
            this->weight = weight;
            this->number = number;
        }
};

bool cmp(Student s1, Student s2)
{
    if (s1.height != s2.height)
        return s1.height > s2.height;

    if (s1.weight != s2.weight)
        return s1.weight > s2.weight;

    return s1.number < s2.number;
}

int main() {
    // Please write your code here.

    int n;
    Student students[1000];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> students[i].height;
        cin >> students[i].weight;
        students[i].number = i + 1;
    }

    sort(students, students + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << students[i].height << " ";
        cout << students[i].weight << " ";
        cout << students[i].number << endl;
    }

    return 0;
}