#include <iostream>
using namespace std;
class construct
{
public:
    
    construct()
    {
        cout << "Constructor Used" << endl;
    }
    ~construct()
    {
        cout << "Destructor Used" << endl;
    }
};
int main()
{
    cout << "Name: Shruti Sharma\nUID: 21BCS9445\n";
    construct *S = new construct[4];
    delete[] S;
}
