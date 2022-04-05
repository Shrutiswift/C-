#include<iostream>
using namespace std;
class complex {
    private:
    int r, i;
    public:
    complex(int r = 0, int i = 0){
    
    }
    void get(int a, int b){
        r = a, i = b;
    }
    complex operator + (complex c1) {
        complex temp;
        temp.i = i + c1.i;
        temp.r = r + c1.r;
        return temp;
    }
    void display(){
    cout << r << " + " << i << "i" << endl;
    }
};
int main() {
    complex A, B, c1;
    A.get(10, 20);
    B.get(22, 30);
    c1 = A + B;
    c1.display();
    return 0;
}