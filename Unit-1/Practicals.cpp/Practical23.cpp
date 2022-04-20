#include "iostream"
using namespace std;
double division(int a, int b){
if(b == 0) {
    cout << "Name: Shruti Sharma\nUID: 21BCS9445\n\n";
    throw "ERROR- Attempt to Divide by zero";
}
else {
    return (a/b);
    }
}
    int main() {
    int x = 10;
    int y = 0;
    double result = 0;
    try {
        result= division(x, y);
        cout << "The quotient of" << x/y << "is:" << result << "\n";
    }
    catch (const char*me) {
        cout << "Exception Error" << "\n";
    }
    return 0;
}