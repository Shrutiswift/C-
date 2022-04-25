#include "iostream"
using namespace std;
class complex {
public:
    int x;
    int y;
    int q, w;

    void input() {
    cout << "Enter real and imaginary Number: " << "\n";
    cin >> x >> y;
    }
    friend complex add (complex luna, complex shibo){
        
    }

    void display() {
        cout << x << "+" << y << "i" << endl;
        
    }
};
int main () {
    int x, y;
    complex luna, shibo;
    luna.input();
    shibo.input();
    luna.display();
    shibo.display();

    try {
        if(x < 5) {
            throw x;
        }
    }
    catch (int x){
        cout << "Real Number less than 5 is not valid";
    }
    return 0;
}



