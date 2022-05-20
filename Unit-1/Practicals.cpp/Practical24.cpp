#include "bits/stdc++.h"
using namespace std;
void shibu(double x)
{
    try
    {
        if (x == 0)
            throw x;
        if (x == 1)
            throw 'a';
        if (x == 2)
            throw 88.88;
        else throw "dfg";
    }
    catch (string x)
    {
        cout << "Caught: " << x << endl;
    }

    catch(char a){
        cout << "Got it: " << a << endl;
    }
    
    catch(double number) {
        cout << "Got one!" << endl;
    }
    catch(...){
        cout << "Got there" << endl;
    }
}
int main()
{
    int x;
    cout << "Name: Shruti Sharma\nUID: 21BCS9445\n";
    cout << "Start\n";
    cout << "Enter a number or a character: " << endl;
    cin >> x;
    shibu(x);
    cout << "End";
    return 0;
}
