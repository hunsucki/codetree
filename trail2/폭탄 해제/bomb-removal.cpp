#include <iostream>
#include <string>

using namespace std;

class defuse
{
    public:
        string code;
        char color;
        int second;

        defuse(string code, char color, int second)
        {
            this->code = code;
            this->color = color;
            this->second = second;
        }
};

int main() {
    // Please write your code here.

    string str;
    char c;
    int i;

    cin >> str >> c >> i;

    defuse defuse1 = defuse(str, c, i);

    cout << "code : " << defuse1.code << endl;
    cout << "color : " << defuse1.color << endl;
    cout << "second : " << defuse1.second << endl;

    return 0;
}