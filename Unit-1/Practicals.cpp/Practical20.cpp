#include "iostream"
using namespace std;
class records
{
    int age;
    string name;
public:
    records(){};
    records(string n, int a) {
        name = n;
        age = a;
    }
    void show()
    {
        cout << "Name: Shruti Sharma\nUID: 21BCS9445\n\n";
        cout << "Eldest amongst\n";
        cout << "Name: " << name << "\n"; 
        cout << "Age: " << age << "\n";
    }
    records eldest(records o)
    {
        if (o.age > age) 
            return o;
        else
            return *this;
    }
};
int main()
{

    records ob[4] = {records("Vishaka", 29), records("Meena", 15), records("Abhinav", 33), records("Rituraj", 19)};
    records result;
    for (int i = 0; i < 3; i++)
        result = ob[i].eldest(ob[i + 1]);
    result.show();
    return 0;
}
