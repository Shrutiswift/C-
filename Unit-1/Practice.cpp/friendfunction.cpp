#include "iostream"
using namespace std;
class complex {
public:
    int x;
    int y;

    void input() {
    cout << "Enter a Number: " << "\n";
    cin >> x;
    cout << "Enter another Number: " << "\n";
    cin >> y;
    }
    void display() {
        cout << x << "+" << y << "i" << endl;
    }
};
int main () {
    int x, y;
    complex q, w, r;
    
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



