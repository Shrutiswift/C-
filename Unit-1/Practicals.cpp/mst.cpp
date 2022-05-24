
#include <bits/stdc++.h>
using namespace std;

void handy(int test)
{
    try
    {
        if (test == 0) throw test;
        if (test == 1) throw 'a';
        if (test == 2) throw 123.23;
        else throw "zoro";
    }

    catch (int i)
    {
        cout << "Caught an int Exception: " << i << endl;
    }

    catch (...)
    {
        cout << "Caught All Other Exceptions!" << endl;
    }
}
int main()
{
    cout << "<===== START =====>" << endl;
    cout << "NIKHIL\nUID- 21BCS9434\n";
    int input;
    for(int i=0;i<4;i++){
    cin>>input;
    handy(input);
    }
    cout << "<===== END ======>";
    return 0;
}
