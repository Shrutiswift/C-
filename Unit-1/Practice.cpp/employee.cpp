#include<iostream>
using namespace std;
class employee
{
    private: 
    char name[20];
    double salary;
    public:
    int age;
    char designation[20];

    void input()
    {
        cin>>name>>age>>designation>>salary;
    } 
    void display()
    {
        cout<<"The entered details of the employees as follows: "<< endl;
        cout<<"Name :"<< name<<endl<<"age :"<<age<<endl<<"designation: "<<designation<<endl<<"salary: "<<salary<< endl;

    }
};
int main()
{
    employee E[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        E[i].input();
        E[i].display();
    }
    
    return 0;
}