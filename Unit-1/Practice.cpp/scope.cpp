#include<iostream>
using namespace std;
int variable = 10;
int main() {
    int variable = 8;
    cout << "Value of global variable is: " << :: variable ;
    cout << "\nValue of local variable is: "<< variable;
    return 0;
}