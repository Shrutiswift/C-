#include <iostream>
using namespace std;
class binary { 
    public:
    int x;
    int y;

    void input() {
        cout << "Enter the real and imaginary number: " << "\n";
        cin >> x >> y;
    }
    friend binary operator + (binary luna, binary shibo) {
        binary suimui;
        suimui.x = luna.x + shibo.x;
        suimui.y = luna.y + shibo.y;
        return suimui;
    }
    void display() {
        cout << x << "+" << y << "i" << endl;
    }
};
int main() {
    int x, y;
    binary luna, shibo, keeno;
    luna.input();
    shibo.input();
    keeno = luna + shibo;
    keeno.display(); 
}