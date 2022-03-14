#include<iostream>
using namespace std;


class XYZ {
    int a, b;
    public:
    void input()
    {
        cin >> a >> b;
    }
    void output()
    {
        cout << a << b;
    }
    friend XYZ sum(XYZ A, XYZ B)
    {
        XYZ C;
        C.a = A.a + B.b;
        C.b = A.b + B.b;
        return C;
    }
};

