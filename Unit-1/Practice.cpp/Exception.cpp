#include "iostream"
using namespace std;

int main() {
    //Simple code
    int numerator, denominator, result;
    cout << "Enter numerator and denominator: " << endl;
    cin >> numerator >> denominator;
    try 
    {
        if(denominator == 0)
        {
            throw denominator;
        }
        int result = numerator/denominator;
    }
    catch (int ex)
    {
        cout << "Divide by zero is not allowed- "<< ex;
    }
    cout << " Division is: " << result;

    return 0;
}
