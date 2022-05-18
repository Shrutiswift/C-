#include "iostream"
using namespace std;

class student {
    public:
    student()
    {
        cout << "Constructor" << endl;
    }
    ~student(){
        cout << "Destructor" << endl;
    }
};
int main() {
    student *S = new student[2];
    return 0;
}