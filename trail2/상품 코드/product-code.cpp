#include <iostream>
#include <string>

using namespace std;

class product
{
    public:
        string name;
        int code;

        product(string name = "codetree", int code = 50)
        {
            this->name = name;
            this->code = code;
        }        
};

int main() {
    // Please write your code here.

    string str;
    int i;

    cin >> str >> i;

    product product1 = product();
    product product2 = product(str, i);

    cout << "product " << product1.code << " is " << product1.name << endl;
    cout << "product " << product2.code << " is " << product2.name << endl;

    return 0;
}