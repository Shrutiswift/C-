#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int sum = 0, number_of_students;
    cout << "Name: Shruti Sharma\nUID: 21BCS9445\n";
    cout << "Enter number of students in Class:\n";
    cin >> number_of_students;
    int *a = new int[number_of_students];
    cout << "Enter " << number_of_students << endl;
    cout << "Students Marks: " << endl;
    for (int i = 0; i < number_of_students; i++)
    cin >> a[i];
    cout << "Enter Marks are:" << endl;
    for (int i = 0; i < number_of_students; i++)
    {
        cout << a[i] << endl;
        sum = sum + a[i]; // sum += a[i];
    }
    cout << "Total Sum: " << sum << "\n";
    delete (a);
    getch();
}
