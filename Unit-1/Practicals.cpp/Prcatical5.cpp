#include <iostream>
using namespace std;
class Employee
{
    char Name[25];
    int Age;
    char Desg[8];
    long Salary;

public:
    void GetData();
    void PutData();
};
void Employee ::GetData()
{
    cout << "SHRUTI SHARMA \n ";
    cout << "UID: 21BCS9445\n";
    cout << "CLASS:209A\n";
    cout << "\n\tEnter Employee Name : ";
    cin >> Name;
    cout << "\n\tEnter Employee Age : ";
    cin >> Age;
    cout << "\n\tEnter Employee Designation:";
    cin >> Desg;
    cout << "\n\tEnter Employee Salary : ";
    cin >> Salary;
}
void Employee ::PutData()
{
    cout << "\nEmployee Name : " << Name;
    cout << "\nEmployee Age : " << Age;
    cout << "\nEmployee Designation:" << Desg;
    cout << "\nEmployee Salary : " << Salary;
}
int main()
{
    int n;
    cin>>n;
    Employee E[n];
    int i;
    for (i = 0; i < n; i++)
    {
        E[i].GetData();
    }
    for (i = 0; i < n; i++)
    {
        E[i].PutData();
    }
    return 0;
}