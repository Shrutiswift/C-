#include "iostream"
#include "string.h"
#include "fstream"
using namespace std;
class student{
    public:
        char name[20];
        int age;
        int rollno;
    void get(void) {
        cout << "Enter the name: ";
        cin>>name;
        cout<< "Enter the rollno: ";
        cin >> rollno;
        cout << "Enter the age: ";
        cin >> age;
        
    }
    void show(void) {
        cout << "Name\t\tRoll No\t\tAge\n" << name << "\t\t" << rollno << "\t\t" << age;
    }
};

int main() {
    student obj;
    obj.get();
    ofstream o("Shibu");
    o.write((char *) &obj, sizeof(obj));
    o.close();
    ifstream i("Shibu");
    student o1;
    i.read((char *) &o1, sizeof(o1));
    o1.show();
    return 0;


}
