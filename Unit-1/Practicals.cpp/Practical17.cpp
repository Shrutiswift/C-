#include "iostream"
using namespace std;
class test {
    private:
    int num;
    public:
    test() {
        num = 0;
    }
    test(int x) {
        num = x;
    }
    void display(){
        cout << "Number :" << num; 
    }
    test operator++ () {
        ++num;
    }
    test operator++(int) {
        test t(num);
        ++num;
        return t;
    }
};
int main() {
    test t1, t2, t3, t4;
    ++t1;
    t1.display();
    t2++;
    t2.display();
    t3 = t2++;
    t2.display();
    t3.display();

}