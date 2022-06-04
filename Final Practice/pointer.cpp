#include "iostream"
using namespace std;
class Base{
    int ABC;

};
class Derived1:Base{

};
class Derived2: Derived1{

};
int main(){
    Derived2 D;
    cout << sizeof(D);
    return 0;
}