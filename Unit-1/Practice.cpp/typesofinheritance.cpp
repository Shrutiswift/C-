#include<iostream>
using namespace std;
class Student {
    public:
    int myfunction() {
        return 5;        
    }
};

class banking: public Student {
    public:
    int salary;
};

class employees: public banking{
    public:
    int bonus;
    void getsalary(int s){
        salary = s;
    }
    int getsalary() {
        return salary;
    }
};

class myotherclass {
    public:
    void myotherfunction() {
    }
};

class teachers: public Student, public myotherclass {

};
class xyz: public Student, public employees {

};


int main() {
    employees myobj;
    myobj.getsalary(29000);
    myobj.bonus = 3000;
    cout << "Salary: " << myobj.getsalary() << "\n";
    cout << "Bonus: " << myobj.bonus << "\n";
    return 0;
}