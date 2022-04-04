#include "iostream"
using namespace std;
class Employee {
public:
    string name;
    int age;
    string company;
    int salary;

    void display() {
        cout << "Name: "<< name << endl;
        cout << "Age: "<< age << endl;
        cout << "Company: "<< company << endl;
        cout << "Salary: "<< salary << endl;
    }
    Employee(string nma, int agme, string compamny, long salamry){
        name = nma;
        age = agme;
        company = compamny;
        salary = salamry;
    }
};
int main() {
    Employee employee1 = Employee("Bhaiya", 24, "Microsoft", 2000000);
    employee1.display();
    Employee employee2 = Employee("Ananya", 28, "Google", 2879999);
    employee2.display();
    
}