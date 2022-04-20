#include "iostream"
using namespace std;
void handle(int x) {
    try {
        if (x == 0)
        throw x;
        if(x == 1)
        throw 'z';
        if(x == 2)
        throw 88.88;
    }
    catch (int n) {
        cout << "Caught: "<< n << "\n";
        }
        {
        cout << "Caught one!!"<< "\n";
        }
}
    int main() {
        cout <<"Name: Shruti Sharma\nUID: 21BCS9445\n";
        cout << "Start\n";
        handle(0);
        handle(1);
        handle(2);
        cout << "End";
        return 0;
    }
