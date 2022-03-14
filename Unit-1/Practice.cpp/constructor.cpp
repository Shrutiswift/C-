#include<iostream>
using namespace std;
namespace ns1
{
    int a =4;
}
namespace ns2
{
    int a =8;
}
int main(){
    int a = 12;
    ns1 :: a;
    ns2 :: a;
    cout << ns1 ::a<<endl;
    cout << ns2 ::a<<endl;
    cout<<a;
    return 0;
}