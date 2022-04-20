#include "iostream"
using namespace std;
double division(int a, int b){
if(b == 0) {
    cout << "Name: Shruti Sharma\nUID: 21BCS9445\n\n";
    throw "Division by zero condition";
}

    return (a/b);
}
    int main() {
    int x = 17;
    int y = 0;
    double z = 0;
    try {
        z = division(x, y);
        cout << z << "\n";
    }
    catch (const char*me) {
        cout << me << "\n";
    }
    return 0;
}