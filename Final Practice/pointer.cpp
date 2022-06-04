#include "iostream"
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    p += 3;
    cout << *p;
    return 0;
}