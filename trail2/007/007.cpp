#include <iostream>
#include <string>

using namespace std;

class secret {
    public:
        string place;
        char code;
        int time;

        secret(string place, char code, int time)
        {
            this->place = place;
            this->code = code;
            this->time = time;
        }
};

int main() {
    // Please write your code here.

    string str;
    char c;
    int i;

    cin >> str >> c >> i;

    secret secret1 = secret(str, c, i);

    cout << "secret code : " << secret1.place << endl;
    cout << "meeting point : " << secret1.code << endl;
    cout << "time : " << secret1.time << endl;


    return 0;
}