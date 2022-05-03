#include "iostream"
#include "fstream"
#include "string.h"
using namespace std;

int main() {
    char name[20];
    char ch;
    cin >> name;
    int len = strlen(name);
    fstream f ("Text", ios::in|ios::out|ios::app);
    fstream f1 ("Text1", ios::in|ios::out|ios::app);
    for(int i=0;i<len;i++)
    {
        f.put(name[i]);
    }
    f.seekg(0);
    //int a=f.tellp();
    while(f) {
        f.get(ch);
        f1.put(ch);
      //<< ch;
    }
   // cout<<a;
}