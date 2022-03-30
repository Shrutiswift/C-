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
            cout << "RollNo: \n" << rollno <<"\n";
        }
};
class test : virtual public student {
    public:
    int a, b;
    void getmarks() {
        cout << "Marks :\n";
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
    }
    void putmarks() {
        cout << "Marks obtained: \n";
        cout << "a" << a <<"\n";
        cout << "b\n" << b <<"\n";
    }
};
class sports: virtual public student{
public:
    int score;
    void getscore() {
        cout << "Score: \n";
        cin >> score;
    }
    void putscore() {
        cout << "Sports score: \n";
        cin >> score;
    }

};
class result: public test, public sports {
    int total;
    public:
    void display() {
        total = a + b + score;
        putnumber();
        putscore();
        putmarks();
        cout << "Total Score: \n";
    }
};
int main() {
    result object;
    object.getnumber();
    object.getmarks();
    object.getscore();
    object.display();
    return 0;
}
