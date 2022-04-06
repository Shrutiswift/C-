#include "iostream"
using namespace std;
class Test
{
private:
    int num;
public:
    Test()
    {
        num = 0;
    }
    Test(int n)
    {
        num = n;
    }
    void display()
    {
        cout << "Number: " << num << endl;
    }
    Test operator++()
    {
        ++num;
        return Test(num);
    }
    Test operator++(int)
    {
        Test t(num);
        ++num;
        return t;
    }
};
int main()
{
    cout<<"Shruti\n21BCS9445\n";
    Test T1(11), T2(11), T3;
    ++T1;
    T1.display();
    T2++;
    T2.display();
    T3.display();
    T3 = T2++;
    T2.display();
    T3.display();
    return 0;
}
