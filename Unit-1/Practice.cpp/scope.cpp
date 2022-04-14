#include<iostream>
using namespace std;
int variable = 10;
int main() {
    int variable = 8;
    cout << "global variable is: " << :: variable;
    cout << "\nlocal variable is: "<< variable;
    return 0;
}