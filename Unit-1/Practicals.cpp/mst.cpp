#include<iostream>
using namespace std;
class Me {
    public:
    int mynum;
    
};
int main() {
    Me myobj;
    myobj.mynum = 16;
    cout << myobj.mynum << "\n";
    return 0;
}