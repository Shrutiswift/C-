#include "iostream"
using namespace std;
class student {
    int x, y;
    public:
    void get(int a, int b) {
        x = a;
        y = b;
    }
    void display() {
        cout << x << " " <<y;
    }
    friend student operator + (student C1, student C2){
        student temp;
        temp.x = C2.x + C1.x;
        temp.y = C2.y + C1.y;
        return temp;
    }
};
int main() {
    student A, B, C;
    A.get(10,2);
    B.get(22,32);
    C = operator + (A, B);
    C.display();
}
