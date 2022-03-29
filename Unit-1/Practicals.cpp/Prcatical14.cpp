#include<iostream>
using namespace std;
class student {
    int rollno;
    public:
        void getnumber()
        {
            cout << "Enter roll no: ";
            cin >> rollno;
        }
        void putnumber() {
            cout << "RollNo:" << rollno <<"\n";
        }
};
class test : virtual public student {
    public:
    int a, b;
    void getmarks() {
        cout << "Marks :";
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
    }
    void putmarks() {
        cout << "Marks obtained: \n";
        cout << "a\n" << a;
        cout << "b\n" << b;
    }
};
class sports: virtual public student {
    
};