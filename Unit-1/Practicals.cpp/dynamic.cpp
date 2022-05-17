#include "iostream"
#include <conio.h>
using namespace std;

int main() {
    int sum = 0, n;
    cout << "Enter number of students in class: \n";
    cin >> n;
    int *a = new int[n];
    cout << "\nEnter " << n << " Students marks:" << endl;
    for(int i = 0; i < n; i++)
    cin >> a[i];
    cout << "Enter Marks are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
        sum = sum + a[i];
    }    
    cout << "Total Sum: " << sum;
    delete(a);
}

/*
int main() {
    cout << "Enter the number of students in class: \n";
    cin >> n;
    int *a = new int[n];
    cout << "Enter " << n << "Student Marks: " << endl;
    for(int i = 0; i < n; i++)
    cin >> a[i];
    cout << "Enter marks are: " << endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
        sum += a[i];
    }
    cout << "Total Sum: " << sum;
    delete(a);
}
*/








