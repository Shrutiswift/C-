#include<iostream>
using namespace std;
class complex {
    private:
    int real, img;
    public:
    complex(int r = 0, int i = 0){
    real = r;
    img = i;
    }
    complex operator + (complex const &obj) {
        complex result;
        result.img = img + obj.img;
        result.real = real + obj.real;
        return result;
    }
    void display(){
    cout << real << " + " << img << "i" << endl;
    }
};
int main() {
    complex c1(2, 3), c2(3, 5);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}