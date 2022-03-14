#include<iostream>
using namespace std;
    int main() {
        int sub, i;
        float marks, Total=0, avg, percentage;
        cout <<"Name: Shruti Sharma\nUID: 21BCS9445.\n";
        cout <<"Enter number of subjects:\n";
        cin>>sub;
        cout <<"Enter marks of subjects:\n";
        for(i = 0; i < sub; i++) {
            cin>>marks;
            Total += marks;

        }
        avg = Total/sub;
        cout << "Total marks ="<<Total;
        cout<<"\nAverage Marks=" <<avg;
            return 0;
    }