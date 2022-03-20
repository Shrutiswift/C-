#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int lastdigit, firstdigit, count = 0, swap, n, temp;
    cout << "Enter the number: ";
    cin >> n;
    temp = n;
    lastdigit = temp % 10;
    count = (int)log10(temp);
    while(temp >= 10) {
        temp /= 10;
    }
    firstdigit = temp;
    swap = (lastdigit*pow(10, count) + firstdigit) + (n - (firstdigit*pow(10, count)+lastdigit));
    cout<<"After swap: "<<swap;
}
