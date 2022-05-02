#include "iostream"
#include "fstream"
using namespace std;
int main(void) {
    char name[20];
    int age;
    cin >> name >> age;
    ofstream fout ("ABC");
    fout << name << "\n" << age;
    fout.close();
    ifstream fin ("ABC");
    fin >> name;
    cout << name <<endl;
    fin >> age;
    cout << age;
    fin.close();
}