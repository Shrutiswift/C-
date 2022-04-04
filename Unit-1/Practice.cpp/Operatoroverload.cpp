#include "iostream"
using namespace std;
class student
{
    int a, b, c;
public:
    void input(int x, int y, int z) {
        a = x, b = y, c = z;
    }
    void display() {
        cout << a << b << c;
    }
    void operator -()
    {
        a = -a;
        b = -b;
        c = -c;
    }
};
int main() {
    student A;
    A.input(1, -2, 3);
    -A;
    A.display();
}