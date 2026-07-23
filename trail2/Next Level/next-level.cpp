#include <iostream>
#include <string>

using namespace std;

class user {
    public:
        string id;
        int lv;

    user(string id = "codetree", int lv = 10)
    {
        this->id = id;
        this->lv = lv;
    }
};

int main() {
    // Please write your code here.

    string str;
    int i;

    cin >> str >> i;

    user user1 = user();
    user user2 = user(str, i);

    cout << "user " << user1.id << " lv " << user1.lv << endl;
    cout << "user " << user2.id << " lv " << user2.lv << endl;
    
    return 0;
}