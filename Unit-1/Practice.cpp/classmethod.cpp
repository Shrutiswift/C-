#include<iostream>
using namespace std;
class shruti {
    public:
    int self(int maxspeed); 
};
int shruti::self(int maxspeed) {
    return maxspeed;
}
int main() {
    shruti myobj;
    cout<< myobj.self(400);
    return 0;
}



















