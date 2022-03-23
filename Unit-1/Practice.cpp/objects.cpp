#include<iostream>
using namespace std;
class Car {
    public:
    string brand;
    string model;
    int year;
};

int main() {
    Car carobj;
    cin >> carobj.brand;
    cin >> carobj.model;
    cin >> carobj.year;


    Car carobj1;
    carobj1.brand = "Ford";
    carobj1.model = "Mustang";
    carobj1.year = 2004;

    cout << carobj.brand << "\n" << carobj.model << "\n" << carobj.year << "\n";
    return 0;
}
