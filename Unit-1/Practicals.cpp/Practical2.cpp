#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "Name: Shruti Sharma\n";
    cout << "UID:21BCS9445\n";
    int n, first, last, sum, digits, z, a, b;
    cout << "Input any number: ";
    cin >> n;
    digits = (int)log10(n);
    first = n / pow(10, digits);
    last = n % 10;
    a = first * (pow(10, digits));
    b = n % a;
    n = b / 10;
    z = last * (pow(10, digits)) + (n * 10 + first);
    cout << "The number after swaping the first and last digits are: " << z << endl;
}
