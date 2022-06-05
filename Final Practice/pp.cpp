#include <iostream>
using namespace std;
int grades(int a = 0, int b = 0, int c = 0) {
    return (a + b + c);
}
int main() {
    cout<<grades();
    return 0;
}