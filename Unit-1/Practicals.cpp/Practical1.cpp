#include<iostream>
using namespace std;
    int main() {
         //Shruti Sharma rocks
        int sum, marks, subject, total = 0, average;
        cout << "Enter the number of subjects: \n";
        cin >> subject;
        cout << "Enter the marks of each subject: \n";
        for (int i = 0; i < subject; i++) {
            cin >> marks;
            total += marks;
        }
        average = total/subject;
        cout << "Total marks is: " << total;
        cout << "\nAverage marks is:  " << average;
        return 0;
        
    }
