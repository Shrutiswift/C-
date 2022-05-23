#include "iostream"
using namespace std;

double division(int a, int b)
{
    if(b == 0){
        throw "Division by zero condition";
    }
    return (a / b);

}

void main() {
    int x, z;
    cout << "Enter a number: " << "\n";
    cin >> x;
    int y = 0;
    try{
        z = division(x, y);
        cout << z << "\n";
    }
    catch(const char * msg) {
        cerr << msg << endl;
    }
}