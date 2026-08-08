#include <iostream>
#include <algorithm>

using namespace std;

int N;

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
    if(s1.height != s2.height)
        return s1.height < s2.height;
    return s1.weight > s2.weight;
}

int main() {

    cin >> N;
    Student stu[1000];


    for (int i = 0; i < N; i++) {
        cin >> stu[i].height;
        cin >> stu[i].weight;
        stu[i].number = i + 1;
    }

    // Please write your code here.

    sort(stu, stu + N, cmp);

    for(int i = 0; i < N; i++)
    {
        cout << stu[i].height << " ";
        cout << stu[i].weight << " ";
        cout << stu[i].number << endl;
    }

    return 0;
}