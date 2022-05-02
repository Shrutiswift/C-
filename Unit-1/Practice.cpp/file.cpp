#include "iostream"
#include "string"
#include "fstream"
using namespace std;
int main(void) {
    string name;
    string age;
    cin >> name >> age;
    ifstream fin ("ABC");
    name.append(name);
    age.append(age);
    ofstream fout ("ABC");
    fout << name << "\n" << age;
    fout.close();
    // fin >> name;
    // cout << name <<endl;
    // fin >> age;
    // cout << age;
    fin.close();
}