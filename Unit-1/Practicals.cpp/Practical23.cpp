#include "iostream"
using namespace std;
int divide(int a, int b){
if(b == 0) {
    cout << "Name: Shruti Sharma\nUID: 21BCS9445\n\n";
    throw b;
}
else {
    return (a/b);
    }
}
    int main() {
    int a, b;
    int result;
    cout << "Enter the numerator and denominator: " << endl;
    cin >> a >> b;
    try {
        result = divide(a, b);
        cout << "The division of" << a/b << "is:" << result << "\n";
    }
    catch (int b) {
        cout << "Exception: Can't divide by 0" << "\n";
    }
    return 0;
}