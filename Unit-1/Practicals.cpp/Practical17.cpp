#include "iostream"
using namespace std;
class test {
    private:
    int a;
    public:
    test() {
        a = 0;
    }
    test(int x) {
        a = x;
    }
    void display(){
        cout << "aber: " << a <<endl; 
    }
    test operator++ () {
        ++a;
        return test(a);
    }
    test operator++(int) {
        test t(a);
        ++a;
        return t;
    }
};
int main() {
    test x, t2, t3, t4;
    ++x;
    x.display();
    t2++;
    t2.display();
    t3 = t2++;
    t2.display();
    t3.display();
    return 0;
}