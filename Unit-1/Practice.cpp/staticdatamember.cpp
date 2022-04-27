#include "iostream"
using namespace std;
class student
{
public:
    char name[10];
    int age;
    int marks;
    static int object;

    void input()
    {
        cout << "Enter the name: " << endl;
        cin >> name;
        cout << "Enter the age: " << endl;
        cin >> age;
        cout << "Enter the marks: " << endl;
        cin >> marks;
    }
};
    int student :: object = 2;
    int main(void)
    {
        student s1;
        s1.input();

        cout << ".............." << endl;

        student s2;
        s2.input();
        

        cout << "Total objects created = " << student:: object << endl;
        return 0;
    }
