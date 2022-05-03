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
        cout << "Enter the name: \n" << "Enter the rollno: \n" << "Enter the age: \n";
        cin.getline(name, sizeof(name));
        cin >> rollno;
        cin >> age;
    }
    void show(void) {
        cout << "Name:\n" << name << "\t\tRollNo:\n" << rollno << "\t\tAge:\n" << age;
    }
};

int main() {
    student obj;
    fstream file;

}
