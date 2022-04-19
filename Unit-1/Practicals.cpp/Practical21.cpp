#include "iostream"
using namespace std;
class member {
private:
    int num;
public:
    member(){num=0;};
    void input(void) {
        cout << "\nEnter the number: ";
        cin >> num;
    }
    void display(void) {
        cout << "Number: " << num << "\n";
    }
};
int main() {
    member obj;
    obj.input();
    obj.display();
    member *pt;
    pt = new member;
    cout << "Default: " << "\n";
    pt -> display();
    pt -> input();
    pt -> display();
    return 0;
}