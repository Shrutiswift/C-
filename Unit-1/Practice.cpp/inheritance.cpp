#include <iostream>
using namespace std;
class Base
{
    int m;
    char name[20];
    public:
    void input()
    {
        cin >> m >> name;
    }

};
class derived: private Base
{
    int a, b;
    public:
    void in()
    {
        input();
        cin >> a >> b;
    }
};
int main()
{
   // Base B;
    derived B;//B.input();
   // B.input();
    B.in();
}
