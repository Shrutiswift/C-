#include <iostream>
using namespace std;


int main() {
    int a = 9;
    int *b = &a;
    int *h= b;

    cout << h << endl;
    return 0;
}
