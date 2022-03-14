#include<iostream>
using namespace std;
int variable = 100;
int main() {
    cout << "Name: Shruti Sharma\n";
    cout << "UID: 21BCS9445\n";
    int variable = 188;
    cout<<"Value of global variable is: "<<::variable<<endl;
    cout<<"Value of local variable is: "<< variable << endl;
    return 0;
}