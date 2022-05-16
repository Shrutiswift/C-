#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age, n, serial = 1;
    char name[20];
    cout << "How many entries do you want to make: ";
    cin >> n;
    cout << endl;
    fstream file;
    file.open("Text", ios::out | ios::in);

    if (!file)
    {
        cout << "File is not created" << endl;
        return 0;
    }

    file << "Sr.No     Name     Age" << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        file << " " << serial << "    " << name << "   " << age << endl;
        serial++;
    }
    cout << "\n<===== Student Data =====>" << endl;
    file.seekg(0, ios::beg);
    while (true)
    {
        char hue[100];
        file.getline(hue, 50);
        if (file.eof())
        {
            break;
        }
        cout << hue << endl;
    }
    return 0;
}
