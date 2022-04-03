#include "iostream"
using namespace std;
class Employee {
public:
    string name;
    int age;
    string company;
    int salary;

    void display() {
        std::cout << "Name: "<< name << std::endl;
        std::cout << "Age: "<< age << std::endl;
        std::cout << "Company: "<< company << std::endl;
        std::cout << "Salary: "<< salary << std::endl;
    }
    Employee(string name, int age, string company, int salary){
        name = name;
        age = age;
        company = company;
        salary = salary;
    }
};
int main() {
    Employee employee1 = Employee("Shruti", 24, "Microsoft", 2000000);
    employee1.display();
    Employee employee2 = Employee("Ananya", 28, "Google", 2879999);
    employee2.display();
    
}