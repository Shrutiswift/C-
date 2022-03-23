#include<iostream>
using namespace std;
class Me {
    public:
    int mynum;
    string mystring;
};
int main() {
    Me myobj;
    myobj.mynum = 177;
    myobj.mystring = "Shruti";
    cout << myobj.mynum << "\n";
    cout << myobj.mystring;
    return 0;
}