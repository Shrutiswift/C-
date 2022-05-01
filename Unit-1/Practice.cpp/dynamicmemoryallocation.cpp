#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int sum = 0, N;
    cout << "Enter number of students in Class:\n";
    cin >> N;
    int *a = new int[N];
    cout << "\nEnter " << N << "\nStudents Marks: " << endl;
    for (int i = 0; i < N; i++)
        cin >> a[i];
    cout << "Enter Marks are:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << endl;
        sum = sum + a[i]; // sum += a[i];
    }
    cout << "Total Sum: " << sum;
    delete (a);
    getch();
}
